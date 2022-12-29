#include<stdio.h>
/*
0. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/
int main()
{


printf("\n****************function to print all prime factors of a given number**************");
int n;
printf("\nEnter a number:");
scanf("\n%d",&n);
for(int i=2;i<=n;i++)
{
    while(n%i==0)
    {
        n=n/i;
        printf("%d,",i);

    }

}

}
