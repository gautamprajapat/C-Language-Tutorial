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


//    int size=sizeof(arr)/sizeof(arr[0]);
     int FO=FirstOccurence(arr,n);
     printf("First occurence number is:%d",FO);


}
int FirstOccurence(int arr[],int n)
  {
       for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
            return arr[i];
    }

  }
