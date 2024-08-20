#include <stdio.h>

void Spush(int *p, int arr[]);
void Spop(int *p, int arr[]);
void Sdisplay(int p, int arr[]);
void Scount(int p);
void Speek(int p, int arr[]);
void isEmpty();
void isFull();

int main() {
    int ch, stack[50], peak = 0, cont_ch, session_count = 0;

    do {
        printf("1.) Push\n2.) Pop\n3.) Display\n4.) Count\n5.) Peek\n");
        printf("Enter a choice: "); 
        scanf("%d", &ch);

        if (ch == 1) {
            if (peak < 50) Spush(&peak, stack);

            else isFull();
        } 
        
        else if (ch == 2) {
            if (peak > 0) Spop(&peak, stack);
            
            else isEmpty();
        } 
        
        else if (ch == 3) Sdisplay(peak, stack); 
        
        else if (ch == 4) Scount(peak);
        
        else if (ch == 5) Speek(peak, stack);
        
        else printf("Enter a valid option\n");

        session_count++;

        printf("Do you want to continue (0/1): ");
        scanf("%d", &cont_ch);

    } while (cont_ch == 1);

    if (cont_ch == 0) printf("Exited with %d sessions", session_count);

    else printf("Enter a Valid Choice");
    
    return 0;
}

void Spush(int *p, int arr[]) {
    printf("Enter an Element: ");
    scanf("%d", &arr[*p]);
    (*p)++;
}

void Spop(int *p, int arr[]) {
    (*p)--;
    printf("Popped Element: %d\n", arr[*p]);
    arr[*p] = 0; 
}

void Sdisplay(int p, int arr[]) {
    int i;
    if (p == 0) {
        printf("Stack is empty\n");
        return;
    }
    for (i = 0; i < p; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Scount(int p) {
    
    printf("Count of Elements in the stack is %d\n", p);

}

void Speek(int p, int arr[]) {
    if (p == 0) printf("Stack is empty\n");
    else printf("Peek element in the stack is %d with the peak index %d\n", arr[p-1], p-1);
}

void isEmpty() {
    printf("Underflow\n");
}

void isFull() {
    printf("Overflow\n");

}
