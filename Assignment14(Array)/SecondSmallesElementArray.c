/*
Write a program to find the second smallest number in an array.Take array values
from the user.
*/
/*
. Write a program to find second largest in an array.Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter size of Array\n");
    scanf("%d",&n);
    int  arr[n];
    printf("Enter  %d number in Array\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d.Enter number",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    int s=arr[0];
    int ss;
    for(i=1;i<n;i++)
    {
        if(s>arr[i])
        {
            s=arr[i];

            ss=arr[i-1];
//            sl=l;

        }
        else if(s<arr[i])
        {
//           s=arr[i];
//           ss=arr[i-1];

            if(ss>arr[i])
            {
                ss=arr[i];

            }
        }

    }


        printf(" \nSecond smallest Element is %d ",ss);

    return 0;

}

