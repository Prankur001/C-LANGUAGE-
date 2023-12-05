#include<stdio.h>
int main()
{
    int number ,cube;
    printf("enter a number");
    scanf("%d", &number);

    //formula for cube of a number 
    cube = number*number*number;
    printf("cube is %d", cube  );
    return 0;
}