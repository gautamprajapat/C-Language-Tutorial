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

void mergArray(int arr1[],int arr2[],int n1,int n2,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;


        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;


        }

    }
    while(i<n1)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
     printf("\nThe Final Sorted Array:\n");
     for(int i=0;i<(n1+n2);i++)
    {
        printf("%d ",arr3[i]);
    }
}

