int main()
{
    int i,n,d,count=0;
    printf("Enter size of Array\n");
    scanf("%d",&n);
    printf("Enter times of Rotaions\n");
    scanf("%d",&d);
    int arr[n];
    int arr2[n];
    printf("Enter  %d number in Array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);


    for(i=0;i<d;i++)
    {
        int temp=arr[0];
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];

        }
         arr[n-1]=temp;
    }
    printf("New rotated array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
