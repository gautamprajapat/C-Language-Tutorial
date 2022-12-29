/* Second smallest number in array*/
#include<stdio.h>
int main()
{

    int arr[100],n,i,gretest,secondgretest;
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

    if(arr[0]>arr[1])
    {
        gretest=arr[0];
        secondgretest=arr[1];

    }
    else{
        gretest=arr[1];
        secondgretest=arr[0];

    }



    for(int i=2;i<n;i++)
    {
        if(arr[i]>gretest)
        {
            secondgretest=gretest;
            gretest=arr[i];

        }
        else if(arr[i]>secondgretest)
        {
            secondgretest=arr[i];
        }


    }
    printf("Second smallest number is:%d",secondgretest);

    return 0;
}
