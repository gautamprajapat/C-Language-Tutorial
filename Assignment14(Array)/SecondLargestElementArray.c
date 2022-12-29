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

    int l=arr[0];
    int sl;
    for(i=1;i<n;i++)
    {
        if(l<arr[i])
        {
            l=arr[i];

            sl=arr[i-1];
//            sl=l;

        }
        else if(l>arr[i])
        {

            if(sl<arr[i])
            {
                sl=arr[i];

            }
        }

    }


        printf(" \nSecond largest Element is %d ",sl);

    return 0;

}

