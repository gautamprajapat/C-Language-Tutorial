#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter size of Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter  N number in Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
     for(i=0;i<n;i++)
    {
       sum+=arr[i];
    }

    printf("The sum of array is %d",sum);
}
