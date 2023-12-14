#include<stdio.h>
int main()
{
    int number;
    printf("enter a number : ");
    scanf("%d",&number);
    if(number%2==0){
        printf("number is even");
    }
    else 
    printf("number is odd");

    return 0;

}