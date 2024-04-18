#include<stdio.h>

// Function to find the position of the key element in the array
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    // Return -1 if key is not found
    return -1;
}

// Function to delete the key element from the array
int deleteElement(int arr[], int n, int key)
{
    // Find the position of the element to be deleted
    int pos = findElement(arr, n, key);
 
    if (pos == -1) {
        printf("Element not found\n");
        return n; // Return the original size if key is not found
    }
 
    // Deleting element by shifting elements to the left
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    return n - 1; // Return the new size of the array
}

int main(){
    int a[]={1,2,3,4,5,6};
    int no;
    
    int size=sizeof(a)/sizeof(a[0]);
    printf("\nsize: %d\n", size);
    printf("Array elements are:\n");
    for(int i=0; i<size; i++){
        printf("Element %d\n", a[i]);
    }

    printf("Enter element to delete from array: ");
    scanf("%d", &no);
 
    // Call the deleteElement function
    size = deleteElement(a, size, no);
 
    printf("After deleting the element, array elements are:\n");
    for(int i=0; i<size; i++){
        printf("Element %d\n", a[i]);
    }
    
    return 0;
}
