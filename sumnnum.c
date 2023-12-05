#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
      
      int sum=0;
    for (int i=0; i<=n; i++){
        sum = sum+i; //sum +-i

    }
    printf("%d\n", sum);
}