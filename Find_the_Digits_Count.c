#include<stdio.h>
int main()
{
 int n,i=0;
scanf("%d",&n);
do{
n=n/10;
i++;
}
while(n!=0);
printf("%d",i);
}

