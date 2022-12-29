#include<stdio.h>
int main()
{
   int n=12;
   decimal(n);
   return 0;

}

void decimal(int n)
{

    if(n==0)
        return;

    decimal(n>>1);
    printf("%d",n&1);
}
