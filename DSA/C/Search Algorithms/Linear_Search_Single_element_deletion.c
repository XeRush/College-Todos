#include <stdio.h>

int main() {
    int num_ele, ele_arr[20], trav, travj, ele_search, num_occ = 0, ele_cp = 0;

    printf("Enter the no. of Elements:");
    scanf("%d", &num_ele);
    
    for (trav=0; trav<num_ele; trav++) {
        printf("Enter the Element %d:", trav);
        scanf("%d", &ele_arr[trav]);
    }  

    printf("Enter the element to be searched:");
    scanf("%d", &ele_search);
    
    for (trav=0; trav < num_ele; trav++) {
        if (ele_arr[trav] == ele_search) {
            for (travj=trav; travj < num_ele - 1; travj++) {
                ele_arr[travj] = ele_arr[travj+1];
            }
            num_ele--;
            trav--;
            ele_cp = 1;
            num_occ++;
        }
        if (ele_cp == 1 ) {
            break;
        }
    }

    for (trav=0; trav<num_ele-1; trav++) {
        if (ele_arr[trav] == ele_search) {
            num_occ++;
        }    
        
    }
    printf("The resultant array is: ");
    for (trav=0; trav < num_ele; trav++) {
        printf("%d ", ele_arr[trav]);
    }

    printf("\nDel: %d Occurance: %d", ele_search, num_occ);

    return 0;
}