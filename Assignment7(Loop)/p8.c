//Armstrong number
#include<stdio.h>
int main()
{
int i,n,sum=0,rem,temp;
printf("\nEnter a number");
scanf("%d",&n);
temp=n;
while(n>0)
{
    rem=n%10;
    sum=sum+(rem*rem*rem);
    n=n/10;

}
//printf("\n%d",sum);
if(temp==sum)
{

    printf("\nArmstrong number %d",temp);
}

else{
    printf("\n Not armstrong number");
}

}
