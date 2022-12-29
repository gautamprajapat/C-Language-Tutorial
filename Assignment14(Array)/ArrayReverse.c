#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter size of Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter  %d number in Array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("Rveresed Array is:\n");
     for(i=size-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }


}
