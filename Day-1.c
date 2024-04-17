Operations on Array:
1. Array Traversal:
Array traversal involves visiting all the elements of the array once. Below is the implementation of Array traversal in different Languages:


int arr[] = { 1, 2, 3, 4, 5 };
int len = sizeof(arr) / sizeof(arr[0]);
// Traversing over arr[]
for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
}

2. Insertion in Array:
We can insert one or multiple elements at any position in the array. Below is the implementation of Insertion in Array in different languages:


// Function to insert element
// at a specific position
void insertElement(int arr[], int n, int x, int pos)
{
    // shift elements to the right
    // which are on the right side of pos
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];

    arr[pos] = x;
}
Deletion in Array:
We can delete an element at any index in an array. Below is the implementation of Deletion of element in an array:


// C program to implement delete operation in a
// unsorted array
#include <stdio.h>
 
// To search a key to be deleted
int findElement(int arr[], int n, int key);
 
// Function to delete an element
int deleteElement(int arr[], int n, int key)
{
    // Find position of element to be deleted
    int pos = findElement(arr, n, key);
 
    if (pos == -1) {
        printf("Element not found");
        return n;
    }
 
    // Deleting element
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    return n - 1;
}
 
// Function to implement search operation
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
     // Return -1 if key is not found
    return -1;
}
Searching in Array:
We can traverse over an array and search for an element. Below is the implementation of Deletion of element in an array:


// Function to implement search operation
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
 
    // If the key is not found
    return -1;
}