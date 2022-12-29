#include<stdio.h>
int main()
{
    int i,n,greatest;
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
    //greatest=arr[0];
    greatest=-1;
     for(i=1;i<n;i++)
    {
      if(greatest<arr[i])
      {
          greatest=arr[i];
      }

    }

    printf("\nThe greatest value of array is %d",greatest);
}
