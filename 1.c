#include<stdio.h>
main()
{
    float a,b,A,M;
    printf("Enter two number");
    scanf("%f%f",&a,&b);
    A=a+b;
    M=a*b;
    printf("%5.2f\n%5.3f",A,M);
}