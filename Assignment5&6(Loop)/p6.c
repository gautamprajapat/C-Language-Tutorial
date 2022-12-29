#include<stdio.h>
#include<math.h>
//8. Write a program to check whether a given number is a Prime number or not */
void primeNum();
void p();
int main()
{
    printf("\n *************************** Primr Number ****************************");
    primeNum();
//    p();

return 0;
}




void primeNum()
{

    int n, count=0;
    printf("\nEnter a number");
    scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }


    //printf("\n%d",count);
    if(count==2)
        printf("Prime number");
    else
        printf("\nNot Prime");
}




void p()
{
       int n, flag=1;
    printf("\nEnter a number");
    scanf("%d",&n);

        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }

    if(n<=1)
    {
        flag=0;
    }


    if(flag==1)
        printf("Prime number");
    else
        printf("\nNot Prime");


}
