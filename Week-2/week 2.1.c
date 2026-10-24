#include<stdio.h>
int main()
{
int a,b,c,s;
float A;
printf("Enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
s=a+b+c;
printf("\n sum of three numbers is %d",s);
A=s/3;
printf("\n the average of three numbers is %f",A);
}