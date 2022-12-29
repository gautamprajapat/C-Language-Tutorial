
#include<stdio.h>
//Write a program to print all Prime numbers under 100
// Write a program to print all Prime numbers between two given numbers

#include<stdio.h>


int checkPrime(int i)
{

    if(i<2)
        return 0;
    else{
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int i,j,n=100;
//    printf("\nEnter the required term:");
//    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
        if(checkPrime(i))
            printf("\n%d",i);


    }



return 0;
}
