#include<stdio.h> 

int linearSearch(int arr[], int n, int k)
{
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == k)
        {
            return i; 
        }
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

    int index = linearSearch(arr, n, k); 

    printf("The element you are searching for is at index %d\n", index); 
}
