/*
. Write a recursive function to print first N odd natural numbers
*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
   // OddN(n);
    Odd(n);


}
void OddN(int n)
{
    if(n!=1)
        {
            return OddN(n-1);
        }
    printf("%d ",i)


}

void Odd(int n)
{
    for(int i=1;i<=n;i++)
    {
            if(i%2!=0)
            {

            }

    }

}
