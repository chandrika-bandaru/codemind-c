#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int a[r][c],r_sum;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        r_sum=0;
        for(j=0;j<c;j++)
        {
        r_sum=r_sum+a[i][j];
        }
        printf("%d ",r_sum);
    }
}