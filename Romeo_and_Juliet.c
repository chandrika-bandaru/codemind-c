#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int numofchoclates=((x*5)+(y*10))/z;
    printf("%d",numofchoclates);
}