#include<stdio.h>
int main()
{
    float a,b;
    int choice;
    printf("Enter two numbers:");
    scanf("%f%f",&a,&b);
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4. division\n");
    printf("Enter your choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("result=%.2f",a+b);
    break;
    case 2:
    printf("result=%.2f",a-b);
    break;
    case 3:
    printf("result=%.2f",a*b);
    break;
    case 4:
    if (b==0)
    {
    printf("division by zero is not possible");
    }
    else 
    {
    printf("result=%.2f",a/b);
    }
    break;
    default:
    printf("invalid option");
    }
}





