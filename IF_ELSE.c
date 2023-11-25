#include <stdio.h>
int main()

{
    int age;
    printf("enter age");
    scanf("%d", &age);

    if(age>18){
        printf("adult\n");
        printf("they can drive\n");
        printf("they can vote\n");
        printf("they are able to marrige\n");
        
    }
    else {
        printf("not adult\n");
        printf("they can not drive\n");
        printf("they can not vote\n");
        printf("they are not able to vote\n");

    }
    return 0;
}
