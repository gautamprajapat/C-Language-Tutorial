//Write a program to calculate sum of first N odd natural numbers

//Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int n,sumOdd=0,sumEven=0;
    printf("How much number :");
    scanf("%d",&n);
    //for(int i=1;i<=n;i++) //sum of natural number
    //for(int i=1;i<=2*n;i++) //sum of first n odd number
    for(int i=1;i<=2*n;i++)//sum of first n even number
    {
        if(i%2==0)
        {
             sumEven=sumEven+i;
        }
    else{
        sumOdd=sumOdd+i;
    }



    }




    printf("\nSum of  odd digits are %d and even digits are %d  sum of ",sumOdd,sumEven);






return 0;}
