#include<stdio.h>
int main()
{
    int number;
    printf("enter number : ");
    scanf("%d", &number);

    if (number>0){
        printf("natural number");
    
    } 
     else {
        printf("not a natural number");

     }
    return 0;
}