/*
 Write a recursive function to print first N natural numbers
*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter a number:");
    scanf("%d",&n);
    natural(n);



}

void natural(int n)
{
    if(n!=1)
    {
        natural(n-1);


    }

     printf("%d ",n);

}
