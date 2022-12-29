#include<stdio.h>
int main()
{
    int i,n,smallest;
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
    smallest=arr[0];
     for(i=1;i<n;i++)
    {
      if(smallest>arr[i])
      {
          smallest=arr[i];
      }

    }

    printf("\nThe smallest value of array is %d",smallest);
}
