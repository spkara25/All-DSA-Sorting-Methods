#include<stdio.h> 

int binarySearch(int arr[], int start, int end, int k)
{
    int mid = (start + end)/2; 
    if(arr[mid] == k)
    {
        return mid; 
    }
    else if(arr[mid] < k)
    {
        return binarySearch(arr, mid+1, end, k); 
    }
    else
    {
        return binarySearch(arr, start, mid -1, k); 
    }

    return -1; 
}

int main()
{
    int n; 
    scanf("%d", &n); 
    
    int arr[n]; 
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &arr[i]); 
    }
    int k; 
    scanf("%d", &k); 

    int result = binarySearch(arr, 0, n-1, k); 
    if(result != -1)
    {
        printf("Element found at: %d\n", result); 
    } 
    else{
        printf("Element not found\n"); 
    }

    return 0; 
}
