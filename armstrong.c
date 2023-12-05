#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int cube = n*n*n;
    int sum=0;
while(n!=0)
{
    int t = cube%10;
    sum=sum+t;
    t= cube/10;
}
if (n==sum)
    printf("This is a Armstrong Number.");
else
printf("This is not an Armstrong Numer.");
}