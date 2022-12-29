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

    return 0;

}

void natural(int n)
{
    if(n==0)
        return ;
    natural(n-1);
    printf("%d ",n);

}
