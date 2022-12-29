
#include<stdio.h>

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
    int i,j,a,b,count=0;
    printf("\nEnter The Range:");
    scanf("%d%d",&a,&b);

    for(int i=a;i<b;i++)
    {
        if(checkPrime(i))
            printf("\n%d",i);


    }



return 0;
}
