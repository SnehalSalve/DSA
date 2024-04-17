#include<stdio.h>

//this function is avoiding last element of an array because of fixed size of an array- make it right towmorrow
void insertElement(int arr[], int n, int x, int pos)
{
    // shift elements to the right
    // which are on the right side of pos
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];

    arr[pos] = x;
    
printf("\n new array is : ");
for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
}

int main(){
    // int arr[] = { 1, 2, 3, 4, 5 };
    // int len = sizeof(arr) / sizeof(arr[0]);
    // // Traversing over arr[]
    // for (int i = 0; i < len; i++) {
    //     printf("%d ", arr[i]);
    // }
    int size;
    printf("\nEnter how many elements you want in array:");
    scanf("%d",&size);

    int arr[size];

    printf("\nEnter elements of an array");
    for(int i=0;i<size;i++)
    {
        printf("enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n Array elements are as follows-");
    for(int i=0;i<size;i++)
    {
        printf("\n %d",arr[i]);
    }

    int new,pos;
    printf("\nenter new element to add in array and enter position where to add in array");
    scanf("%d %d",&new,&pos);

    insertElement(arr,size,new,pos);



    return 0;
}