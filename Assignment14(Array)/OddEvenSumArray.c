#include<stdio.h>
int main()
{
    int i,n,OddSum=0,EvenSum=0;
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
        if(arr[i]%2==0)
        {
            EvenSum+=arr[i];
        }
        else{
           OddSum+=arr[i];
        }

    }

    printf("\nThe sum of Even Numbers in  array is %d\n",EvenSum);
    printf("\nThe sum of Even Numbers in  array is %d",OddSum);
}
