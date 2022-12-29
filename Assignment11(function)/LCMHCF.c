/*
Write a function to calculate LCM of two numbers. (TSRS)
 Write a function to calculate HCF of two numbers. (TSRS)
*/

#include<stdio.h>
int LCM(int a,int b);
int main()
{
     int a,b,lcm,hcf;
    printf("\nEnter two number");
    scanf("%d%d",&a,&b);
    lcm=LCM(a,b);
    printf("\nLCM of two number is %d",lcm);
    hcf=HCF(lcm,a,b);
    printf("\nHCF of two number is %d",hcf);


}

int LCM(int a,int b)
{
    for(int i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            return i;
        }
    }
}

int HCF(int lcm,int a,int b)
{
    return (a*b)/lcm;
}


