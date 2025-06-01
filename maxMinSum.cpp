#include<iostream> // code for check k is less than and equal to the sum of max from left half array and min of right half array 
using namespace std;
int find(int a[],int n){
    int max=INT16_MIN;
    int i=0,j=n-1;
    int min=INT16_MAX;
    while(i<=n/2){
        if(a[i]>max){
            max=a[i];
        }
         if(a[j]<min){
            min=a[j];
         }
         i++;
         j--;
    } return max+min;
}
int main() {
    int a[]={1,5,6,8,9},k;
    int n=sizeof(a)/sizeof(a[0]);
    int sum=find(a,n);
    cout<<"enter k=";
    cin>>k;
    if(k<=sum){
        cout<<"true"<<endl;
    }
    else {
        cout<<"false"<<endl;
    }
    cout<<"sum of max and min= "<<sum;
    return 0; 
    }