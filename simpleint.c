#include<stdio.h>
int main()
{
    int p,r,t;
    printf("enter p : ");
    scanf("%d",&p);

    printf("enter r :");
    scanf("%d",&r);
    printf("enter t : ");
    scanf("%d",&t);

//formula for simple intrest
float si;
si = (p*t*r)/100;
printf("si is : %f",si);
}