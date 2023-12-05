#include<stdio.h>
void main()
{
    int i,j,a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j] = i*3*(i+3);
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}