#include <stdio.h>
#include <stdbool.h>
int main ()
{ 
 float m[5]={88,98,76,98,79};
 float tot,avg;
 bool result;
 printf("\t\t\t BCA \n");
 printf("__________________________________________________________________________________________________________________________\n");
 printf("NAME:RAJLAXMI \t\t\t reg no; 1187356\n"); 
 printf("__________________________________________________________________________________________________________________________\n");
 printf("Tamil=\t\t\t\t\t %5.2f \n",m[0]);
 printf("english=\t\t\t\t %5.2f \n",m[1]);
 printf("maths=\t\t\t\t\t %5.2f\n",m[2]);
 printf("science=\t\t\t\t %5.2f \n",m[3]);
 printf("social=\t\t\t\t\t %5.2f \n",m[4]);
 tot=m[0]+m[1]+m[2]+m[3]+m[4];
 avg=tot/5;
 if(avg>50)
 result=true;
 printf("__________________________________________________________________________________________________________________________\n");
 printf("tot=%5.2f \t \t \t \t \t avg=%5.2f\n",tot,avg,result);
 if(result==true)
    printf("pass");
 else 
    printf("fail"); 
 }
