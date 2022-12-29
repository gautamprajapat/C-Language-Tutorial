#include<stdio.h>
/*
Write a function to check whether a given number contains a given digit or not.
(TSRS)

*/
int digitCheck(int n,int d);
int main()
{
    int a,num,digit;
    printf("\nEnter a Number:");
    scanf("%d",&num);
    printf("\nEnter a digit:");
    scanf("%d",&digit);
    a=digitCheck(num,digit);
    if(a==digit)
        printf("\nGiven number contains a given digit %d",a);
    else
        printf("\nGiven number does not contains the given digit");

    return 0;

}
int digitCheck(int n,int d)
{
    int r;
    while(n>0)
    {
        r=n%10;
        if(r==d)
           return r;
        n=n/10;
    }
}

