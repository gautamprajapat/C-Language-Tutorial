int main()
{
    int i,n,d,count=0;
    printf("Enter size of Array\n");
    scanf("%d",&n);
    printf("Enter times of Rotaions\n");
    scanf("%d",&d);
    int arr[n];
    int temparr[n];
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
    int k=0;

    for(int i=d;i<n;i++)//first copy d to n-1 into temperary array
    {

        temparr[k]=arr[i];
        k++;
    }

    for(int i=0;i<d;i++)//then copy 0 to d-1 into temp array
    {
        temparr[k]=arr[i];
        k++;
    }

    for(int i=0;i<n;i++)
    {

        arr[i]=temparr[i];//now copy all items from temp array into original array
    }




    printf("New rotated array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
