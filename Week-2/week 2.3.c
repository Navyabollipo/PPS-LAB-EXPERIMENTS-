#include<stdio.h>
int main()
{
float P,T,R,SI;
printf("Enter the principle amount, rate of interest,time period:");
scanf("%f%f%f",&P,&R,&T);
SI=P*T*R/100;
printf("simple intrest=%f",SI);
}