int searchInRotatedArray(int arr,int n,int target)
{
    int index;
    for(i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            index=i;
            return index;
        }
    }
    return -1;
}