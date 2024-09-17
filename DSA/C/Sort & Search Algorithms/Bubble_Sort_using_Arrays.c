#include <stdio.h>

int main() {
    int num;

    printf("Enter the no. of elements:");
    scanf("%d", &num);

    int arr[num], k=0, count=0, arr1[num];

    printf("Enter the Elements:");
    for(int ind=0; ind<num; ind++){ scanf("%d", &arr[ind]);} 
    for(int index=0; index<num; index++) {arr1[index] = arr[index];}
    
    for (int i=0; i<num; i++) {
        for (int j=0; j<num; j++) {
            if (arr[j]<arr[j+1]) continue;

            else if (arr[j]>arr[j+1]) {
                int swap =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
                k++;
            }

            else if (arr[j]==arr[j+1]) continue;

            count += k;
        }
        if (k==0) break;
    }

    printf("Before Sorting: ");

    for (int a = 0; a<num; a++) printf("%d ", &arr1[a]);

    printf("\nAfter Sorting: ");

    for (int b = 0; b<num; b++) printf("%d ", &arr[b]);

    printf("\n%d sessions executed", count);
}