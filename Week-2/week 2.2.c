#include<stdio.h>
int main()
{
float c,f;
printf("Enter the temoerature in celsius:");
scanf("%f",&c);
f=(c*9/5)+32;
printf("farenheit temperature is %f",f);
printf("\n  enter temperature in fahrenheit:");
scanf("%f",f);
c=(f-32)*5/9;
printf("celsius=%f",c);
}