/*Write a function in C to count a total number of duplicate elements in an array.*/

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter size of Array\n");
    scanf("%d",&n);
    int arr[100];
    printf("Enter  %d number in Array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    int d=Tduplicate(arr,n);
    printf("Totalduplicate number in array are %d ",d);
}

int Tduplicate(int arr[],int n)
{ int count=0;

    for(int i=0;i<n;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }


        }


    }

    return count;

}
