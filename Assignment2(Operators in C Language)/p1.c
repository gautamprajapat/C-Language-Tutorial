#include<stdio.h>
int main()
{
    int num,rem,sumEven=0,sumOdd=0;
    printf("\nEnter a number");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;

        if(rem%2==0)
        {
            printf("\n%d",rem);
            sumEven=sumEven+rem;
        }
        if(rem%2!=0)
        {
            printf("\n%d",rem);
            sumOdd=sumOdd+rem;
        }



        num=num/10;
    }
    printf("\nSum of Even Digit is %d",sumEven);
    printf("\nSum of Even Digit is %d",sumOdd);

return 0;

}
