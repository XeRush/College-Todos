#include <stdio.h>

int main() {
    int num;
    
    printf("No. of Elements:");
    scanf("%d", &num);

    int arr[num];
    
    printf("Enter the elements:");
    for(int i=0; i<num; i++ ) {
        scanf("%d", &arr[i]);
    }

    int target, k=0;

    int low = 0, high = num;
    int mid = (high-low)/2;

    printf("Enter the target:");
    scanf("%d", &target);
    for(int j=0; j<num; j++) {
        
        if (arr[mid] == target) {
            printf("Element %d found\n", arr[mid]);
            k++;
            printf("%d sessions executed\n", k);
            break;
        }

        else if (arr[mid] < target) {
            low = mid + 1;
            mid = (high+low)/2;
            k++;
            continue;
        }
        
        else if (arr[mid] > target) {
            high = mid - 1;
            mid = (high+low)/2;
            k++;
            continue;
        }
    }
}