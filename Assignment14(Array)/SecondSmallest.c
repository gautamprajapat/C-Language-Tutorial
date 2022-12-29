/* Second smallest number in array*/
#include<stdio.h>
int main()
{

    int arr[100],n,i,smallest,secondsmallest;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter element in array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Array is:\n");

     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }

    if(arr[0]<arr[1])
    {
        smallest=arr[0];
        secondsmallest=arr[1];

    }
    else{
        smallest=arr[1];
        secondsmallest=arr[0];

    }
    printf("smallest number is:%d\n",smallest);
     printf("Second smallest number is:%d\n",secondsmallest);



    for(int i=2;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            secondsmallest=smallest;
            smallest=arr[i];

        }
        else if(arr[i]<secondsmallest)
        {
            secondsmallest=arr[i];
        }


    }
    printf("Second smallest number is:%d",secondsmallest);

    return 0;
}
