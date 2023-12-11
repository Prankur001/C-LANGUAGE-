#include<stdio.h>
void main()
{
    //Task 1: print 2 matrices

    int a[3][3], b[3][3];
    printf("Entry of elements are Row wise\n");
    printf("Enter 1st matrix\n");
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter 2nd matrix\n");
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    //Task 2: addition of two matrices
    printf("Addition of both matrices\n");
    int sum;
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            sum = (a[i][j] + b[i][j]);
            printf("%d ",sum);
        }
        printf("\n");
    }
//Task 3: Finding adjoint of a Matrix
int c[3][3];
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(i==0 && j==0)
        c[i][j] = (a[1][1]*a[2][2]) - (a[1][2]*a[2][1]);
         if(i==0 && j==1)
        c[i][j] = -(a[1][0]*a[2][2]) - (a[1][2]*a[2][0]);
         if(i==0 && j==2)
        c[i][j] = (a[1][0]*a[2][1]) - (a[1][1]*a[2][0]);
         if(i==1 && j==0)
        c[i][j] = -(a[0][1]*a[2][2]) - (a[0][2]*a[2][1]);
         if(i==1 && j==1)
        c[i][j] = (a[0][0]*a[2][2]) - (a[0][2]*a[2][0]);
         if(i==1 && j==2)
        c[i][j] = -(a[0][0]*a[2][1]) - (a[0][1]*a[2][0]);
         if(i==2 && j==0)
        c[i][j] = (a[0][1]*a[1][2]) - (a[0][2]*a[1][1]);
         if(i==2 && j==1)
        c[i][j] = -(a[0][0]*a[1][2]) - (a[0][2]*a[1][0]);
         if(i==2 && j==2)
        c[i][j] = (a[0][0]*a[1][1]) - (a[0][1]*a[1][0]);
    }
}
 for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
           c[i][j] = c[j][i];
        }
         printf("\n");
    }
printf("Adjoint of 1st Matrix is:\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
//Task 4 : Inverse of a matrix
int det=0;
    for(int j=0;j<3;j++)
    {
        if(j==0)
        det = det + a[0][j]*((a[1][1]*a[2][2]) - (a[1][2]*a[2][1]));
         if(j==1)
        det = det - a[0][j]*((a[1][0]*a[2][2]) - (a[1][2]*a[2][0]));
         if(j==2)
        det = det + a[0][j]*((a[1][0]*a[2][1]) - (a[1][1]*a[2][0]));   
    }
    if (det == 0)
    printf("Inverse is not possible.");
    else{
    printf("Inverse of 1st Matrix is:\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%.2f ",c[i][j]/det);
    }
    printf("\n");
}
}}