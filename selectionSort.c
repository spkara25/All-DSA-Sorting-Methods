#include<stdio.h> 

void selectionSort(int arr[], int n)
{
    for(int i = 0;i<n-1;i++)
    {
        int minIndex = i; 
        for(int j = i+1;j<n;j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j; 
            }
        }

        int temp = arr[minIndex]; 
        arr[minIndex] = arr[i]; 
        arr[i] = temp; 
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

    printf("After sorting the array"); 
    selectionSort(arr, n); 
    for(int i = 0;i<n;i++){
        printf("%d", arr[i]); 
    }

    return 0; 
}