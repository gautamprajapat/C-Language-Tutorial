/*
Write a function to print all Prime numbers between two given numbers. (TSRN)
*/
#include<stdio.h>
int main()
{

    int a,b,i;
    printf("\n Enter two number:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(isPrime(i))
        {
             printf("%d ",i);
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
