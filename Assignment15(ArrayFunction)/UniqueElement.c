/*Write a function in C to print all unique elements in an array*/
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
    printf("\n");

    UniqueElement(arr,n);

    return 0;
}

void UniqueElement(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j,count=0;
        for(j=i+1;j<n;j++)
        {

            if(arr[i]==arr[j])
            {
                count++;
            }
        }

        if(count!=0)
        {
            printf("%d ",arr[i]);
        }


    }



}
