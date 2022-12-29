/* Find next prime number*/
#include<stdio.h>
int main()
{
   int n,p;
   printf("\nEnter a number:");
   scanf("%d",&n);
   p=nextPrime(n);
   printf("\n%d ",p);

}
int isPrime(int n)
{

    int i,flag=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

}

int nextPrime(int n)
{

    int nextPrime=n;
    int found=0;
    while(!found)
    {
        nextPrime++;
        if(isPrime(nextPrime))
        {
            found=1 ;
        }
    }
    return nextPrime;
}
