#include<stdio.h>
int main()
{
    float c,f;
    float t;
    printf("enter temperature in (c) : ");
    scanf("%f",&c);
    //c to f conversion
    f = (9.0/5.0)*c+32.0;
    printf("\ntemperature is (f) : %f",f);

    //farhenite to celcius  conversion 
    printf("\nenter temperature (f) : ");
    scanf("%f",&f);

    c = ((f-32)/9)*5;
    printf("temperature is (c) : %f",t);


}