#include<stdio.h>
int main()
{
    int n,i,sum=0,res;
    scanf("%d",&n);
    int even[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&even[i]);
    }
    for(i=0;i<n;i++)
    {
       if(even[i]%2==0)
       {
           sum=sum+even[i];
       }
    }
    printf("%d",sum);
}