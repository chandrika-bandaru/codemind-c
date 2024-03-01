#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
    {
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
        if(k+n<=m)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}