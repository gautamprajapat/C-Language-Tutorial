#include<stdio.h>
int main()
{
    int i,n,smallest,temp;
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

     for(i=0;i<n;i++)
    {
        for(int j=i;j<n;j++){

            if(arr[i]>arr[j])
      {

        swap( arr,&i,&j);
      }

        }


    }
    printf("\nSorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


}
void swap(int arr[],int* i,int *j)
{

    int temp;
     temp=arr[*i];
     arr[*i]=arr[*j];
     arr[*j]=temp;


}
