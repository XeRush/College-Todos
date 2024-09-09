#include <stdio.h>

int main() {
    int num, arr[num];
    
    printf("No. of Elements:");
    scanf("%d", &num);
    
    for(int i=0; i<num; i++ ) {
        printf("Enter the element:");
        scanf("%d", &arr[i]);
    }

    int len = sizeof(arr), target;

    int low = 0, high = len;
    int mid = (high-low)/2;

    printf("Enter the target:");
    scanf("%d", &target);
    for(int j=0; j<num; j++) {
        
        if (arr[mid] == target) {
            printf("%d", arr[mid]);
            break;
        }

        else if (arr[mid] < target) {
            low = mid + 1;
        }
        
        else if (arr[mid] > target) {
            high = mid - 1;
        }
    }
}