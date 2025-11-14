#include<iostream> // nurmology

using namespace std;

int month(int m,int y){

    int t;

    switch(m){

        case 1: t=31;

        break; 

        case 2: 

        if((y%400==0 && y%100==0) || (y%4==0 && y%100!=0)){

            t=29;

        }

        else {

            t=28;

        }

        break; 

        case 3: t=31;

        break; 

        case 4: t=30;

        break; 

        case 5: t=31;

        break; 

        case 6: t=30;

        break; 

        case 7: t=31;

        break; 

        case 8: t=31;

        break; 

        case 9: t=30;

        break; 

        case 10: t=31;

        break; 

        case 11: t=30;

        break; 

        case 12: t=31;

        break; 

    }

    return t;

}

int main(){

    char ch;

    int t;

    do{ int unsigned d,m,y,sum1=0,sum2=0,sum3=0,k,ans=0;  

    cout<<"birth date=";

    cin>>d;

    cout<<"month=";

    cin>>m;

    cout<<"year=";

    cin>>y;

  if(d<=month(m,y) && m<13)

  {

    for(int i=0;i<2;i++){

        int D=d%10;

        sum1 +=D;

        d/=10;

    }

    for(int i=0;i<2;i++){

        int M=m%10;

        sum2 +=M;

        m/=10;

    }

    for(int i=0;i<4;i++){

        int Y=y%10;

        sum3 +=Y;

        y/=10; 

    }

    k=sum1+sum2+sum3;

    for(int i=0;i<2;i++){

        int K=k%10;

        ans+=K;

        k/=10;

    } }



    switch(ans){

          case 1: cout<<"Leader: bold,independent,driven\n";

          break;

          case 2: cout<<"Peacekeeper: loving,sensitive,cooperative\n";

          break;

          case 3: cout<<"Creative: expressive,joyful,artistic\n";

          break;

          case 4: cout<<"Builder: stable,practical,hardworking\n";

          break;

          case 5: cout<<"Free spirit: adventurous,curious,loves change\n";

          break;

          case 6: cout<<"Nurturer: bcaring,responsible,family focused\n";

          break;

          case 7: cout<<"Thinker: spritual,mysterious,analytical\n";

          break;

          case 8: cout<<"Powerhouse: ambitious,business minded,strong\n";

          break;

          case 9: cout<< "Humanitarian: kind,wise,wants to help the world\n";

          break;

          default: cout<<"--ERROR 404--\n";
    

    }   cout<<"enter 'y' to continue"<<endl;

    cin>>ch; }

    while(ch=='y');

}
