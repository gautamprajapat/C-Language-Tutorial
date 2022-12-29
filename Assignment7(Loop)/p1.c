#include<stdio.h>
//Write a program to find the Nth term of the Fibonnaci series.
// Write a program to print first N terms of Fibonacci series
void nthFibbo();
int main()
{
    int a,b,c,n;
    printf("\nEnter the required term:");
    scanf("%d",&n);
    a=0,b=1;
    for(int i=0;i<n;i++)
    {
       c=a+b;
        b=a;
        a=c;
        printf("\n%d ",c);
    }


nthFibbo();
return 0;
}

void nthFibbo()
{
     int a,b,c,n;
    printf("\nWhict Term You Watn?");
    scanf("%d",&n);
    a=0,b=1;
    for(int i=0;i<n;i++)
    {
        c=a+b;
        b=a;

        a=c;



    }
    printf("\n%d ",c);

}
