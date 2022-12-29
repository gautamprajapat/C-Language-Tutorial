
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter size of Array\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter  N number in Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

//    for(i=0;i<n;i++)
//    {
//        printf("%d ",arr[i]);
//    }
     for(i=0;i<n;i++)
    {
      int count=0;
      for(int j=i+1;j<=n;j++)
      {
          if(arr[i]==arr[j])
          {
             count++;
          }


      }
      if(count==0)
      {
          printf("%d ",arr[i]);
      }

    }



}
