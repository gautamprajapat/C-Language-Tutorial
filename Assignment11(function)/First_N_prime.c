/*
Write a function to print first N prime numbers (TSRN)
*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(isPrime(i))
        {
            printf("\n%d",i);
        }
    }
}

int isPrime(int n)
{

    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
