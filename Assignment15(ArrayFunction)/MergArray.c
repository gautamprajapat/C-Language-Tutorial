/*
Write a function in C to merge two arrays of the same size sorted in descending
order
*/
#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],arr3[100];
    int n1,n2,n3;
    printf("Enter the size of array1");
    scanf("%d",&n1);
    printf("Enter the size of array2");
    scanf("%d",&n2);
    printf("\n\n");
    printf("the size of array3 is %d\n",n1+n2);

    printf("Enter the element in array1\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
     printf("the element in array1\n");
    for(int i=0;i<n1;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");

    printf("Enter the element in array2\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("the element in array2\n");
    for(int i=0;i<n2;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");


mergArray(arr1,arr2,n1,n2,arr3);

}


void mergArray(int arr1[],int arr2[],int n1,int n2,int arr3[] )
{
    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];

    }
    for(int i=0;i<n2;i++)
    {
        arr3[i+n2]=arr2[i];
    }


    printf("\n The merged array is:\n");
     for(int i=0;i<(n1+n2);i++)
    {
        printf("%d ",arr3[i]);
    }

     printf("\nApplying the  sorting on arr3\n");
     int temp;
     for(int i=0;i<(n1+n2);i++)
     {
         for(int j=i+1;j<(n1+n2);j++)
         {
             if(arr3[i]>arr3[j])
             {
                 temp=arr3[i];
                 arr3[i]=arr3[j];
                 arr3[j]=temp;
             }

         }
     }
     printf("\nThe Final Sorted Array:\n");
     for(int i=0;i<(n1+n2);i++)
    {
        printf("%d ",arr3[i]);
    }
}
