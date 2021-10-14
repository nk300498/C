#include<stdio.h>
main()
{
    int a,n,i,n1=0,n2=1,a1;
    printf("Enter the number upto which you want fibonacci series=");
    scanf("%d",&n);
    a=1;
    printf("%d\n%d\n",n1,n2);
    while (a<=n)

    {  
        printf("%d \n",a);
        n1=n2;
        n2=a;
        a=n1+n2;
        
    }
}