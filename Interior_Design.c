#include<stdio.h>
int main()
{
    int a,b,X1,Y1,X2,Y2;
    scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
    a=X1+Y1;
    b=X2+Y2;
    if((X1+Y1)>(X2+Y2))
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",a);
    }
}