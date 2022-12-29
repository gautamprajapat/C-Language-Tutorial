/*
Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function
*/
#include<stdio.h>
int main()
{
int i,n=6,sum=0;
for(i=1;i<=n;i++)
{
    sum=sum+(factorial(i)/i);
}
printf("\nSum is %d ",sum);

}

int factorial(int n)
{
    int fact=1;
    int num=n;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
