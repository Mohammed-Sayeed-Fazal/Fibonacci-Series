#include<stdio.h>
int main()
{
    int i, term1=0, term2=1, n, fib;
    printf("ENter the position in Fibonacci Series (n): \n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Enter a Number greater than 0: \n");
        return 0;
    }
    else if(n==1)
    {
        fib=0;
    }
    else if(n==2)
    {
        fib=1;
    }
    else
    {
        for(int i=2; i<n; i++)
        {
            fib=term1+term2;
            term1=term2;
            term2=fib;
        }
    }
    printf("The nth number in the Fibonacci Series is : %d\n", fib);
}