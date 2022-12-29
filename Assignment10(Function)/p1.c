/*
7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)

*/
#include<stdio.h>
int main()
{
   int n,r,nCr,nPr,factR;
   printf("\nEnter  value of n and r:");
   scanf("%d%d",&n,&r);

   nPr=factorial(n)/factorial(n-r);
   factR=factorial(r);
   nCr=nPr/factR;

   printf("\nThe value of nCr is %d",nCr);

}

int factorial(int n, int r)
{
    int fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}
