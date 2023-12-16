#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int i,a[n];//a[5]
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//12 -1 34 -456 56
    }
    max=a[0];//max=12
    for(i=1;i<n;i++)//i=1
    {
        if(max<a[i])//12<-1
        {
            max=a[i];
        }
    }
    printf("%d",max);
}