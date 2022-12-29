#include<stdio.h>
// Write a program to calculate sum of squares of first N natural numbers
// Write a program to calculate sum of cubes of first N natural numbers
int main()
{

    int i, n,sumSq=0,sumQ=0;
    printf("How much number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sumSq+=(i*i);
       sumQ+=(i*i*i);
    }
    printf("\nSum of squre is %d sum of cube is %d ",sumSq,sumQ);

    return 0;

}
