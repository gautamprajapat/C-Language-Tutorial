#include<stdio.h>
//Write a program to check whether a given number is there in the Fibonacci series or not.

int main()
{
    int a,b,c,n;
    printf("\nEnter the required term:");
    scanf("%d",&n);
    a=0,b=1,c=0;
    while(c<n)
    {
       c=a+b;
        b=a;
        a=c;

    }
    if(c==n)
    {
        printf("\nGiven number is fibbonacci");
    }
    else{
        printf("\n Given number is not fibbonacchi");
    }


return 0;
}
