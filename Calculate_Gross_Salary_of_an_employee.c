#include<stdio.h>
int main()
{
    float basicSalary,hra,da,grossSalary,pf;
    scanf("%f%f%f",&basicSalary,&hra,&da);
    pf=0.12*basicSalary,grossSalary=basicSalary+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f
",grossSalary);
}