/*
10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/
#include<stdio.h>
#include<math.h>

void prime(int a);
int main()
{
    int n=24;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {

              prime(i);
              n=n/i;



        }
    }
    return 0;
}

    void prime(int a)
    {
          int count=1;
        for(int j=2;j<a;j++)
        {
            if(a%j==0)
            {
                count=0;
                break;
            }

        }


        if(count==1)
            printf("%d ",a);



    }

