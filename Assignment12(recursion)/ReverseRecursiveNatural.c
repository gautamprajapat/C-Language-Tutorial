/*
Write a recursive function to print first N natural numbers in reverse order

*/
#include<stdio.h>
int main()
{
 int n,i;
    printf("\nEnter a number:");
    scanf("%d",&n);
    reverseRecursive(n);



}

void reverseRecursive(int n)
{
    if(n==0)
        return;
    printf("%d ",n);
    reverseRecursive(n-1);

}
