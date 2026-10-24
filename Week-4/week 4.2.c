#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,max;
printf("Enter three numbers A,B,C,D,E,F,G:");
scanf("%d%d%d",&a,&b,&c);
max=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("maximum number=%d",max);
}







