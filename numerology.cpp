#include<iostream> // nurmology
#include<string> 
#include<windows.h> // for colours

using namespace std;

// Set Color
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int name(string s){
    int q;
     int sum=0;
    for(int i=0;i<s.length();i++){

        if(s[i]=='a' or s[i]=='i' or s[i]=='j' or s[i]=='q' or s[i]=='y'){
            q=1;
            sum=sum+q;
        }
        else if(s[i]=='b' or s[i]=='k' or s[i]=='r'){
            q=2;
            sum=sum+q;
        }
      else if(s[i]=='g' or s[i]=='s' or s[i]=='l' or s[i]=='c'){
            q=3;
            sum=sum+q;
        }
       else if(s[i]=='d' or s[i]=='m' or s[i]=='t'){
            q=4;
            sum=sum+q;
        }
        else if(s[i]=='e' or s[i]=='h' or s[i]=='n' or s[i]=='x'){
            q=5;
            sum=sum+q;
        }
       else if(s[i]=='u' or s[i]=='v' or s[i]=='w'){
            q=6;
            sum=sum+q;
        }
      else if(s[i]=='o' or s[i]=='z'){
            q=7;
            sum=sum+q;
        }
       else if(s[i]=='b' or s[i]=='k' or s[i]=='r'){
            q=8;
            sum=sum+q;
        }
        else {
            cout<<"wrong name"<<endl;
        }
    }
    return sum;
}
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

    do{ unsigned int d,m,y,sum1=0,sum2=0,sum3=0,k,ans=0,p;  

   color(2); cout<<"# choose what do you want to know?"<<endl;        
    color(3); cout<<"1. Zodiac sign\n2. Mulank (birth no.)\n3. Name numerology"<<endl;
    cin>>p;    
    if(p==1 or p==2) {   
    cout<<"birth date=";

    cin>>d;

    cout<<"month=";

    cin>>m;

    cout<<"year=";

    cin>>y; }
    
    int D,M,Y;   
        D=d;
        M=m;
        Y=y;
 
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

    for(int i=0;i<2;i++) {

        int K=k%10;

        ans+=K;

        k/=10;

    } 


// Zodiac sign
    if(p==1) {
           if( D<=month(M,Y) && M<13)

  {
       if((D<=18 && M==2) || (D>=20 && M==1)){
           color(5); cout<<"zodiac  sign: Aquarius ♒\n"<<"element: Air"<<endl;
        }
        else if((D>=19 && M==2) || (D<=20 && M==3)){
           color(5);  cout<<"zodiac  sign: Pisces ♓\n"<<"element: water"<<endl;
        }
       else if((D<=19 && M==1) || (D>=22 && M==12)){
           color(5);  cout<<"zodiac  sign: Capricorn ♑\n"<<"element: Earth"<<endl;
        }
       else if((D<=21 && M==12) || (D>=22 && M==11)){
          color(5);   cout<<"zodiac  sign: Sagittarius ♐\n"<<"element: Fire"<<endl;
        }
       else if((D<=21 && M==11) || (D>=23 && M==10)){
           color(5);  cout<<"zodiac  sign: Scorpio ♏\n"<<"element: water"<<endl;
        }
       else if((D<=22 && M==10) || (D>=23 && M==9)){
           color(5);  cout<<"zodiac  sign: Libra ♎\n"<<"element: Air"<<endl;
        }
       else if((D<=22 && M==9) || (D>=23 && M==8)){
           color(5);  cout<<"zodiac  sign: Virgo ♍\n"<<"element: Earth"<<endl;
        }
               else if((D<=22 && M==8) || (D>=23 && M==7)){
           color(5);  cout<<"zodiac  sign: Leo ♌\n"<<"element: Fire"<<endl;
        }
       else if((D<=22 && M==7) || (D>=21 && M==6)){
           color(5);  cout<<"zodiac  sign: Cancer ♋\n"<<"element: Water"<<endl;
        }
       else if((D<=20 && M==6) || (D>=21 && M==5)){
           color(5);  cout<<"zodiac  sign: Gemini ♊\n"<<"element: Air"<<endl;
        }
       else if((D<=20 && M==5) || (D>=20 && M==4)){
           color(5);  cout<<"zodiac  sign: Taurus ♉\n"<<"element: Earth"<<endl;
        }
       else if((D<=19 && M==4) || (D>=21 && M==3)){
           color(5);  cout<<"zodiac  sign: Aries ♈\n"<<"element: Fire"<<endl;
        }
        else {
           color(6);  cout<<"invalid"<<endl;
        }
    } else {
        cout<<"invalid"<<endl;
    }
}
// Mulank (birth no.)
  else if(p==2){
       if( D<=month(M,Y) && M<13){

         switch(ans){

          case 1: color(4);  cout<<"Mulank: "<<ans<<"\nLeader: bold,independent,driven\n";

          break;

          case 2: color(4); cout<<"Mulank: "<<ans<<"\nPeacekeeper: loving,sensitive,cooperative\n";

          break;

          case 3: color(4); cout<<"Mulank: "<<ans<<"\nCreative: expressive,joyful,artistic\n";

          break;

          case 4: color(4); cout<<"Mulank: "<<ans<<"\nBuilder: stable,practical,hardworking\n";

          break;

          case 5: color(4); cout<<"Mulank: "<<ans<<"\nFree spirit: adventurous,curious,loves change\n";

          break;

          case 6: color(4); cout<<"Mulank: "<<ans<<"\nNurturer: caring,responsible,family focused\n";

          break;

          case 7: color(4); cout<<"Mulank: "<<ans<<"\nThinker: spritual,mysterious,analytical\n";

          break;

          case 8: color(4); cout<<"Mulank: "<<ans<<"\nPowerhouse: ambitious,business minded,strong\n";

          break;

          case 9: color(4); cout<<"Mulank: "<<ans<<"\nHumanitarian: kind,wise,wants to help the world\n";

          break;
 
          default: color(6); cout<<"--ERROR 404--\n";
    
        }}
        else {
            color(6); cout<<"invalid"<<endl;
        }
    }
        // name nurmology

        else if(p==3){
            string s;
            int A=0;
            color(8); cout<<"enter your name =";
            cin>>s;
            int T = name(s);
            for(int i=0;i<2;i++){
                int r= T%10;
                A += r;
                T/=10;
            }
           switch(A){

          case 1: color(9); cout<<"Name no.: "<<A<<"\nSUN\n# leader,independence,confidence\npositive:\n* Ambitious\n* self driven\nnegative:\n* egoistic\n* dominating\n* impatient\n* doesnt like advice\n";

          break;

          case 2:color(9); cout<<"Name no.: "<<A<<"\nMOON\n# emotional,sensitive\npositive:\n* caring\n* creative\n* good listener\n* peace maker\nnegative:\n* moody\n* easily influenced\n";

          break;

          case 3:color(9); cout<<"Name no.: "<<A<<"\nJUPITER\n# Intelligence, communication, creativity\n Positive:\n* Expressive\n* Optimistic\n* Good speaker\n* Mentally sharp \nNegative:\n* Scattered focus\n* Talks more, does less\n* sometimes Can be careless\n* Needs validation\n";

          break;

          case 4:color(9); cout<<"Name no.: "<<A<<"\nRAHU\n # Unconventional, practical, rebel\n Positive:\n* Hardworking\n* Logical\n* Innovative\n* Strong mindset\n Negative:\n* Stubborn\n* Sudden life ups & downs\n* Emotionally detached\n* Can feel misunderstood\n";

          break;

          case 5:color(9); cout<<"Name no.: "<<A<<"\nMERCURY\n# Communication, adaptability, freedom\n Positive:\n* Smart\n* Quick thinker\n* Social\n* Multi-talented\n Negative:\n* Restless\n* Gets bored easily\n* Inconsistent\n* Risk-taking behavior\n";

          break;

          case 6:color(9); cout<<"Name no.: "<<A<<"\nVENUS\n# Love, beauty, harmony\n Positive:\n* Attractive personality\n* Caring\n* Family-oriented\n* Artistic\n Negative:\n* Over-attachment\n* Materialistic\n* Emotional dependency\n* Jealous sometimes\n";

          break;

          case 7:color(9); cout<<"Name no.: "<<A<<"\nKETU\n# Deep thinker, spiritual, mysterious\n Positive:\n* Analytical\n* Intuitive\n* Independent\n* Research-minded\n Negative:\n* Overthinking\n* Isolates self\n* Hard to understand\n* Mood swings\n";

          break;

          case 8:color(9); cout<<"Name no.: "<<A<<"\nSATURN\n# Power, discipline, karma\n Positive:\n* Ambitious\n* Strong willpower\n* Responsible\n* Long-term success mindset\n Negative:\n* Emotionally reserved\n* Rigid\n* Work-focused\n* Life delays & struggles\n";

          break;
          
          case 9:color(9); cout<<"Name no.: "<<A<<"\nMARS\n# action, courage, fighter spirit\n Positive:\n* bold\n* fearless\n* strong willpower\n* takes quick action\n Negative:\n* short temper\n* ego clashes\n* dominating\n* impulsive decisions\n";

          break;
 
          default: color(6); cout<<"--ERROR 404--\n";
    
        }

        }

    else {
        cout<<"wrong"<<endl;
    }

     color(14); cout<<"enter 'y' to continue"<<endl;

    cin>>ch; }

    while(ch=='y');

} 
