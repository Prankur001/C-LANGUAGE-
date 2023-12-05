#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);

    marks>30 ? printf("pass") : printf("fail");

    return 0;
}