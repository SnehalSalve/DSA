#include<stdio.h>
int main(){
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

    //static array
    int a[] = { 1, 2, 3, 4, 5 };
    int len = sizeof(a) / sizeof(a[0]);
    // Traversing over a[]
    for (int i = 0; i < len; i++) {
        printf("\n%d ", a[i]);
    }
    return 0;
}