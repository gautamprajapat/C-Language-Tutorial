/*
. Write a function to check whether a given number is Prime or not. (TSRS)
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int n,p,q;
    printf("\nEnter a number:");
    scanf("%d",&n);
    p=prime(n);
    if(p==0)
    {
        printf("\nGiven number is not Prime:");

    }
    else{
        printf("\nGiven number is  Prime:");
    }


}

int prime(int n)
{
    int i,flag=1;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            return flag;
        }
    }
}

