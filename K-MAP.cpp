#include <iostream>
#include<windows.h> // for colours

using namespace std;

// Set Color
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Draw Horizontal Line
void line(int len) {
    for (int i = 0; i < len; i++) cout << "=";
    cout << endl; }

// Function to create and print the matrix
void matrix(int r, int c, int a[],int n) {
     int m[4][4]={0};

    // fill matrix based on array
    for (int i = 0; i < n; i++) {
        if(r==2 && c==2){
           
        switch (a[i]) {

            case 0: m[0][0] = 1; break;
            case 1: m[0][1] = 1; break;
            case 2: m[1][0] = 1; break;
            case 3: m[1][1] = 1; break;
            default: break;
        }    
    }
        else if(r==2 && c==4) {
          
                    switch (a[i]) {
            case 0: m[0][0] = 1; break;
            case 1: m[0][1] = 1; break;
            case 2: m[0][3] = 1; break;
            case 3: m[0][2] = 1; break;
            case 4: m[1][0] = 1; break;
            case 5: m[1][1] = 1; break;
            case 6: m[1][3] = 1; break;
            case 7: m[1][2] = 1; break;

            default: break;
        } } 
                else if(r==4 && c==4) {
                 
                    switch (a[i]) {
            case 0: m[0][0] = 1; break;
            case 1: m[0][1] = 1; break;
            case 2: m[0][3] = 1; break;
            case 3: m[0][2] = 1; break;
            case 4: m[1][0] = 1; break;
            case 5: m[1][1] = 1; break;
            case 6: m[1][3] = 1; break;
            case 7: m[1][2] = 1; break;
            case 8: m[3][0] = 1; break;
            case 9: m[3][1] = 1; break;
            case 10: m[3][3] = 1; break;
            case 11: m[3][2] = 1; break;
            case 12: m[2][0] = 1; break;
            case 13: m[2][1] = 1; break;
            case 14: m[2][3] = 1; break;
            case 15: m[2][2] = 1; break;


            default: break;
        } } else {
            cout<<"invalid"<<endl;
        }

        }

        cout << endl;
        color(13);
        cout << "============== K - M A P ==============" << endl;
        color(7);

    

    // print matrix
    for (int i = 0; i < r; i++) {
       cout<<"   ";
        for (int j = 0; j < c; j++) {
            color(10); cout<<" | ";
            color(14); cout << m[i][j] << " ";
        } color(10); cout<<" | ";
        cout << endl;
    }
}

int main() {
    int a[16], n, max=0;
    char ch,x;
   do{ 
        system("cls");

        color(11);

        line(50);
         cout << "\tK - M A P   G E N E R A T O R\n";
        line(50);
        
        color(7);

        cout << " enter no. of Min terms = ";
        cin >> n;
        if(n<=16){
    cout << " Enter Min terms for K-Map = ";
 
    for (int k = 0; k < n; k++) {
        cin >> a[k];

       if(a[k]>max){
        max=a[k];
       }
    
    }
  
    // to decide the order of k-map
        if( max>=0 && max<4){
             matrix(2, 2, a, n);

        }
        else if(max>=4 && max<8){
             matrix(2, 4, a, n);

        }
        else if(max>=8 && max<16){
             matrix(4, 4, a, n);

        }
        else {
             color(4);       
            cout<<"invalid... :("<<endl;
        } color(7);
        cout<<"enter y to continue...."<<endl;
        cin>>ch;

        } else {
            color(5);
            cout<<" terms range 1 to 16"<<endl; 
            color(7);
        }

    }  while (ch=='Y' or ch=='y');
   

return 0;
}
