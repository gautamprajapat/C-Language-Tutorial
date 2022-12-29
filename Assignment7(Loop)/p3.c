#include<stdio.h>
//Write a program to print LCM And HCF of two number:

int main()
{
    int i, a,b,hcf;
    printf("\nEnter two number:");
    scanf("%d%d",&a,&b);

    for(i=1;i<+a*b;i++)
    {
       if(i%a==0 && i%b==0)
       {
           break;
       }
    }
    hcf=(a*b)/i;

if(hcf==1)
{
    printf("\nGivem numbers are Co-prime");
}

printf("\nLCM of given number is %d",i);
printf("\nHCF of given number is %d",hcf);
return 0;
}




void coprime()
{


}
