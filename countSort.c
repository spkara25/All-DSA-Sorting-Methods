#include<stdio.h> 

void countSort(int arr[], int n)
{
    int max = arr[0]; 
    for(int i = 1;i<n;i++) // get the maximum element 
    {
        if(arr[i] > max)
        {
            max = arr[i]; 
        }
    }

    int count[max+1]; 
    for(int i = 0;i<=max;i++) // initialise the array with max + 1 length 
    {
        count[i] = 0; 
    }

    for(int i = 0;i<n;i++) // get the frequency of each element in new array 
    {
        count[arr[i]]++; 
    }

    int index = 0; 
    for(int i = 0;i<=max;i++) // rewrite the sorted array 
    {
        while(count[i] > 0)
        {
            arr[index++] = i; 
            count[i] --; 
        }
    }
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
    countSort(arr, n); 

    printf("Sorted Array: "); 
    for(int i = 0;i<n;i++)
    {
        printf("%d ", arr[i]); 
    }
    return 0; 
}