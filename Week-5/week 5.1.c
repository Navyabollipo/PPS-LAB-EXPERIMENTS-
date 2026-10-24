#include<stdio.h>
int main()
{
    int a,b,c,d,max,min;
    printf("Enter four numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    max = min = a;
    
    if(b > max)
        max = b;
    if(b < min)
        min = b;
        
    if(c > max)
        max = c;
    if(c < min)
        min = c;
        
    if(d > max)
        max = d;
    if(d < min)
        min = d;
        
    printf("maximum=%d\n",max);
    printf("minimum=%d",min);
}






