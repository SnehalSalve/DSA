#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5,6};
    int no;
    
    int size=sizeof(a)/sizeof(a[0]);
   // printf("\nsize : %d",size);

    printf("\narray elements are :\n");
    for(int i=0;i<size;i++){
        printf("\t[%d]",a[i]);
    }

    printf("\nenter element to delete from array : ");
    scanf("%d",&no);
  
    int i, pos = -1; // Initialize pos with -1
    for (i = 0; i < size; i++){
        if (a[i] == no){
            pos = i; // Store the position of the element to be deleted
            break;   // Exit the loop once the element is found
        }
    }
    
    if (pos != -1) { // Check if the element was found
        for (i = pos; i < size - 1; i++){
            a[i] = a[i + 1]; // Shift elements to the left to overwrite the deleted element
        }
        size--; // Decrease the size of the array
    } else {
        printf("Element not found in the array.\n");
    }
    
    printf("\n After array elements are :\n");
    for(int i=0;i<size;i++){
        printf("\t [%d]",a[i]);
    }
    
    return 0;
}
