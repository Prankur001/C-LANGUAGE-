#include<stdio.h>
void main(){
    int i,j,k,a[3][3][3];
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for (k=0;k<3;k++)
            {
                a[i][j][k] = i*j*k*(i+1)*(j+2);
                printf("%d", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}