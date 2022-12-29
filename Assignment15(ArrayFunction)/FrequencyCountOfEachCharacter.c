/*
Write a function in C to count the frequency of each element of an array
*/
#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,n,count=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        count=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]=-1;
                }
            }
            b[i]=count;
        }
    }

    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            printf("No of %d is %d \n",a[i],b[i]);
        }
    }
}
