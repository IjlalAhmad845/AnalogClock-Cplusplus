#include <iostream>
#include<windows.h>
#include<ctime>

using namespace std;
void gotoxy(int,int);
void zero();    void one();     void two();     void three();       void four();
void five();    void six();     void seven();   void eight();       void nine();
void calculation();     void nullassign(); void  set_position();
int i,j,a=4,b,x[10],y[10],err=0,num[6];
int main()
{nullassign();
calculation();
}
void nullassign()
{for(i=0;i<10;i++)
    {x[i]=10;
        y[i]=5;}}
void calculation()
{while(1)
{if(num[0]%2==0)
    {gotoxy(40,7); cout<<"* *";gotoxy(41,6); cout<<"*";gotoxy(41,8); cout<<"*";
     gotoxy(40,11);cout<<"* *";gotoxy(41,10);cout<<"*";gotoxy(41,12);cout<<"*";
     gotoxy(76,7); cout<<"* *";gotoxy(77,6); cout<<"*";gotoxy(77,8); cout<<"*";
     gotoxy(76,11);cout<<"* *";gotoxy(77,10);cout<<"*";gotoxy(77,12);cout<<"*";}

    time_t now=time(NULL);
char* tm=ctime(&now);
gotoxy(99,15);cout<<"DATE-> ";
for(i=0;i<10;i++)
    cout<<tm[i];
/**every array element the int element takes two digit no so we have to divide it into two parts
 first one sent to previous int element and second one to itself by doing MOD */
num[0]=atoi(&tm[17]);num[1]=num[0]/10;num[0]=num[0]%10;
num[2]=atoi(&tm[14]);num[3]=num[2]/10;num[2]=num[2]%10;
num[4]=atoi(&tm[11]);

if(num[4]>12){num[4]=num[4]-12;gotoxy(113,13);cout<<"P.M.";}        ///---------12 hrs format
else {gotoxy(113,13);cout<<"A.M.";}

num[5]=num[4]/10;num[4]=num[4]%10;
 set_position();Sleep(900);system("cls");
}
}

void set_position()
{for(j=0;j<6;j++)
    {if(num[j]==0)
{if(j==0){x[0]=98;}
    else if(j==1){x[0]=80;}
    else if(j==2){x[0]=62;}
    else if(j==3){x[0]=44;}
    else if(j==4){x[0]=26;}
    else if(j==5){x[0]=8;}
zero();
}
if(num[j]==1)
{if(j==0){x[1]=58;}
    else if(j==1){x[1]=48;}
    else if(j==2){x[1]=38;}
    else if(j==3){x[1]=28;}
    else if(j==4){x[1]=18;}
    else if(j==5){x[1]=8;}
one();
}
if(num[j]==2)
{if(j==0){x[2]=95;}
    else if(j==1){x[2]=77;}
    else if(j==2){x[2]=59;}
    else if(j==3){x[2]=41;}
    else if(j==4){x[2]=23;}
    else if(j==5){x[2]=5;}
two();
}
if(num[j]==3)
{if(j==0){x[3]=95;}
    else if(j==1){x[3]=77;}
    else if(j==2){x[3]=59;}
    else if(j==3){x[3]=41;}
    else if(j==4){x[3]=23;}
    else if(j==5){x[3]=5;}
three();
}
if(num[j]==4)
{if(j==0){x[4]=97;}
    else if(j==1){x[4]=79;}
    else if(j==2){x[4]=61;}
    else if(j==3){x[4]=43;}
    else if(j==4){x[4]=25;}
    else if(j==5){x[4]=7;}
four();
}
if(num[j]==5)
{if(j==0){x[5]=95;}
    else if(j==1){x[5]=77;}
    else if(j==2){x[5]=59;}
    else if(j==3){x[5]=41;}
    else if(j==4){x[5]=23;}
    else if(j==5){x[5]=5;}
five();
}
if(num[j]==6)
{if(j==0){x[6]=95;}
    else if(j==1){x[6]=77;}
    else if(j==2){x[6]=59;}
    else if(j==3){x[6]=41;}
    else if(j==4){x[6]=23;}
    else if(j==5){x[6]=5;}
six();
}
if(num[j]==7)
{if(j==0){x[7]=97;}
    else if(j==1){x[7]=79;}
    else if(j==2){x[7]=61;}
    else if(j==3){x[7]=43;}
    else if(j==4){x[7]=25;}
    else if(j==5){x[7]=7;}
seven();
}
if(num[j]==8)
{if(j==0){x[8]=95;}
    else if(j==1){x[8]=77;}
    else if(j==2){x[8]=59;}
    else if(j==3){x[8]=41;}
    else if(j==4){x[8]=23;}
    else if(j==5){x[8]=5;}
eight();
}
if(num[j]==9)
{if(j==0){x[9]=95;}
    else if(j==1){x[9]=77;}
    else if(j==2){x[9]=59;}
    else if(j==3){x[9]=41;}
    else if(j==4){x[9]=23;}
    else if(j==5){x[9]=5;}
nine();
}
}           ///for loop ends
}
void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void zero()                             ///=====================================DEFINITION of ZERO
{for(i=1;i<=a;i++)            ///-------------prints upper part of 0
    {gotoxy(x[0]+2*i,y[0]);cout<<"*";}
    for(i=1;i<=2*a-1;i++)     ///---------------------------------prints adjacent parts
    {gotoxy(x[0],y[0]+i);cout<<"*";
    gotoxy(x[0]+10,y[0]+i);cout<<"*";}
for(i=1;i<=a;i++)            ///------------------------------------prints lower part
    {gotoxy(x[0]+2*i,2*a+y[0]);cout<<"*";}
}
void one()                              ///=====================================DEFINITION of ONE
{for(i=0;i<=a-2;i++)          ///-------------prints tail of one of 1
    {gotoxy(x[1]+x[1]-2*i-x[1]/5-1,i+y[1]);cout<<"*";}
for(i=0;i<=2*a-2;i++)
{gotoxy(x[1]+x[1]*4/5,y[1]+1+i);cout<<"*";}
for(i=0;i<=a;i++)
{gotoxy(x[1]+(x[1]-5)*4/5+2*i,y[1]*2+2*a-y[1]);cout<<"*";}
}
void two()                              ///=====================================DEFINITION of TWO
{if(x[2]==23)err=1;
else err=0;
    for(i=2;i<=a+2;i++)          ///-------------prints upper part of 2
    {gotoxy(x[2]+2*i,y[2]);cout<<"*";}
    for(i=2;i<=a;i++)               ///----------prints upper middle part
    {gotoxy(2*x[2]+x[2]/5-(x[2]-10)*6/5+2,y[2]+i-a/4);cout<<"*";}
   for(i=2;i<=a+a/2;i++)                ///-------------prints middle part
    {gotoxy(x[2]+2*i+2,y[2]+5-a/4);cout<<"*";}
       for(i=2;i<=a;i++)            ///----------prints lower middle part slightly left
    {gotoxy(2*x[2]-(x[2]-10)*6/5-(40-x[2])/5-err,y[2]+i+3);cout<<"*";}            ///exception for 23 by -1
for(i=2;i<=a+3;i++)              ///----------prints lower part
    {gotoxy(x[2]+2*i,y[2]+10-2);cout<<"*";}
}
void three()                            ///=====================================DEFINITION of THREE
{for(i=2;i<=a+2;i++)          ///-------------prints upper part of 3
    {gotoxy(x[3]+2*i,y[3]);cout<<"*";}
    for(i=2;i<=a;i++)               ///----------prints upper middle part
    {gotoxy(2*x[3]+x[3]/5-(x[3]-10)*6/5+2,y[3]+i-a/4);cout<<"*";}
   for(i=2;i<=a+a/2;i++)                ///-------------prints middle part
    {gotoxy(x[3]+2*i,y[3]+5-a/4);cout<<"*";}
       for(i=2;i<=a;i++)            ///----------prints lower middle part
    {gotoxy(2*x[3]+x[3]/5-(x[3]-10)*6/5+2,y[3]+i+3);cout<<"*";}
 for(i=2;i<=a+a/2;i++)              ///----------prints lower part
    {gotoxy(x[3]+2*i,y[3]+10-2);cout<<"*";}
}
void four()                             ///=====================================DEFINITION of FOUR
{for(i=0;i<a;i++)            ///-------------prints upper half of 4
{gotoxy(x[4]+2,y[4]+i);cout<<"*";
gotoxy(x[4]+11,y[4]+i);cout<<"*";}
for(i=0;i<=a;i++)                       ///---------------prints middle portion
{gotoxy(x[4]+2*i+2+1,y[4]+4);cout<<"*";}
for(i=1;i<=a;i++)                       ///-------------lower half of four
{gotoxy(x[4]+10+1,y[4]+i+4);cout<<"*";}
}
void five()                             ///=====================================DEFINITION of FIVE
{if(x[5]==23)err=1;
else err=0;
    for(i=2;i<=a+2;i++)          ///-------------prints upper part of 5
    {gotoxy(x[5]+2*i+1,y[5]);cout<<"*";}
    for(i=2;i<=a;i++)               ///----------prints upper middle part slightly left
    {gotoxy(2*x[5]-(x[5]-10)*6/5-(40-x[5])/5-err,y[5]+i-a/4);cout<<"*";}      ///exception for 23 by -1
            for(i=2;i<=a+a/2;i++)                ///-------------prints middle part
    {gotoxy(x[5]+2*i+1,y[5]+5-a/4);cout<<"*";}              ///---------exchanged code from 2 of lower and upper part after x
       for(i=2;i<=a;i++)            ///----------prints lower middle part
    {gotoxy(2*x[5]+x[5]/5-(x[5]-10)*6/5+2,y[5]+i+3);cout<<"*";}
 for(i=1;i<=a+1;i++)              ///----------prints lower part
    {gotoxy(x[5]+2*i+3,y[5]+10-2);cout<<"*";}
}
void six()                              ///=====================================DEFINITION of SIX
{if(x[6]==23)err=1;
else err=0;
    for(i=2;i<=a+2;i++)          ///-------------prints upper part of 6
    {gotoxy(x[6]+2*i+2,y[6]);cout<<"*";}
    for(i=2;i<=a;i++)               ///----------prints upper middle part slightly left
    {gotoxy(2*x[6]-(x[6]-10)*6/5-(40-x[6])/5-err,y[6]+i-a/4);cout<<"*";}        ///exception for 23 by -1
   for(i=2;i<=a+a/2;i++)                ///-------------prints middle part
    {gotoxy(x[6]+2*i,y[6]+5-a/4);cout<<"*";}              ///---------exchanged code from 2 of lower and upper part after 2*x
       for(i=2;i<=a;i++)            ///----------prints lower middle part
    {gotoxy(2*x[6]-(x[6]-10)*6/5-(40-x[6])/5-err,y[6]+i+3);cout<<"*";///---------------------similar code as four but on lower side
        gotoxy(2*x[6]+x[6]/5-(x[6]-10)*6/5+2,y[6]+i+3);cout<<"*";}
 for(i=2;i<=a+a/2;i++)              ///----------prints lower part
    {gotoxy(x[6]+2*i+2,y[6]+10-2);cout<<"*";}
}
void seven()                            ///=====================================DEFINITION of SEVEN
{for(i=1;i<=a+2;i++)          ///-------------prints upper part of 7
    {gotoxy(x[7]+2*i,y[7]);cout<<"*";}
   for(i=1;i<=a+4;i++)        ///-------------prints lower diagonal shape of 7
   {gotoxy(x[7]-i+12,y[7]+i);cout<<"*";}
}
void eight()                            ///=====================================DEFINITION of EIGHT
{if(x[8]==23)err=1;
else err=0;
    for(i=2;i<=a+2;i++)          ///-------------prints upper part of 8
    {gotoxy(x[8]+2*i,y[8]);cout<<"*";}
    for(i=2;i<=a;i++)               ///----------prints upper middle part slightly left
    {gotoxy(2*x[8]-(x[8]-10)*6/5-(40-x[8])/5-err,y[8]+i-a/4);cout<<"*";///---------------------similar code as four but on upper side
    gotoxy(2*x[8]+x[8]/5-(x[8]-10)*6/5+2,y[8]+i-a/4);cout<<"*";}
   for(i=2;i<=a+a/2;i++)                ///-------------prints middle part
    {gotoxy(x[8]+2*i+1,y[8]+5-a/4);cout<<"*";}              ///---------exchanged code from 2 of lower and upper part after x
       for(i=2;i<=a;i++)            ///----------prints lower middle part
    {gotoxy(2*x[8]-(x[8]-10)*6/5-(40-x[8])/5-err,y[8]+i+3);cout<<"*";///---------------------similar code as four but on lower side
        gotoxy(2*x[8]+x[8]/5-(x[8]-10)*6/5+2,y[8]+i+3);cout<<"*";}
 for(i=2;i<=a+a/2;i++)              ///----------prints lower part
    {gotoxy(x[8]+2*i+2,y[8]+10-2);cout<<"*";}
}
void nine()                             ///=====================================DEFINITION of NINE
{if(x[9]==23)err=1;
else err=0;
    for(i=3;i<=a+3;i++)          ///-------------prints upper part of 9
    {gotoxy(x[9]+2*i,y[9]);cout<<"*";}
    for(i=2;i<=a;i++)               ///----------prints upper middle part slightly left
    {gotoxy(2*x[9]-(x[9]-10)*6/5-(40-x[9])/5-err,y[9]+i-a/4);cout<<"*";///---------------------similar code as four but on upper side
    gotoxy(2*x[9]+x[9]/5-(x[9]-10)*6/5+2,y[9]+i-a/4);cout<<"*";}
   for(i=2;i<=a+a/2;i++)                ///-------------prints middle part
    {gotoxy(x[9]+2*i+2,y[9]+5-a/4);cout<<"*";}              ///---------exchanged code from 2 of lower and upper part after x
       for(i=2;i<=a;i++)            ///----------prints lower middle part
    {gotoxy(2*x[9]+x[9]/5-(x[9]-10)*6/5+2,y[9]+i+3);cout<<"*";}///+VE because of we have to print at back side
        for(i=2;i<=a+a/2;i++)              ///----------prints lower part
    {gotoxy(x[9]+2*i,y[9]+10-2);cout<<"*";}
}
