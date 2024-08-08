#include <stdio.h>

int main() {
    int arr[20], i, j, k, no_ele, preference, ele_del, ele_cp;
    
    printf("Enter the no. of elements:");
    scanf("%d", &no_ele);
    
    printf("Enter Elements");
    
    for (i=0; i<no_ele; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Do you want to perform deletion(0/1) ");
    scanf("%d", &preference);
    
    if (preference == 1) {
        printf("Enter the element to be deleted");
        scanf("%d", &ele_del);
        
        for (j=0; j<no_ele; j++) {
            if (arr[j] == ele_del) {
                
                for (k=j; k < no_ele-1; k++) {
                    arr[k] = arr[k+1];
                }
                
                ele_cp = 1;    
                printf("Element %d found and deleted\n", ele_del);
                
            }
        }
        
        printf("Elements of the Array:");
        
        for (i=0; i<no_ele-1; i++) {
            printf("%d ", arr[i]);
        }
        if (ele_cp != 1) {
            printf("Element not found in the array");
        }
    }
    
    else if (preference == 0) {
        return 0;
    }
    
    else {
        printf("Enter a valid preference");
    }

    return 0;
}