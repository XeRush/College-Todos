#include <stdio.h>

void Qpush(int *p, int arr[]);
void Qpop(int *p, int arr[]);
void Qdisplay(int p, int arr[]);
void Qcount(int p);
void Qpeek(int p, int arr[]);
void isEmpty();
void isFull();

int main() {
    int queue[50], top = 0, ch, cont_ch;
    
    do
    {
        printf("1.) Push\n2.) Pop\n3.) Display\n4.) Count\n5.) Peek\n");
        printf("Enter a choice: "); 
        scanf("%d", &ch);

        if (ch == 1) {
            if (top < 50) {
                Qpush(&top, queue);
            }

            else isFull();
        } 

        else if (ch == 2) {
            if (top > 0) {
                Qpop(&top, queue);
            }

            else isEmpty();
        }    

        else if (ch == 3) Qdisplay(top, queue);

        else if (ch == 4) Qcount(top);

        else if (ch == 5) Qpeek(top, queue);

        else printf("Enter a Valid choice");

        printf("Wanna Continue(0/1):");
        scanf("%d", &cont_ch);

    } while (cont_ch == 1);

    if (cont_ch == 0) {
        printf("Code Exited");
    }
    
    else  printf("Enter a valid choice");
}

void Qpush(int *p, int arr[]) {
    printf("Enter the Element:");
    scanf("%d", &arr[*p]);
    (*p)++;
}

void Qpop(int *p, int arr[]) {
    int i, popped;

    popped = arr[0];
    for(i=0; i<*p; i++) {
        arr[i] = arr[i+1];
    }
    printf("Popped Element:%d\n", popped);
    (*p)--;
}

void Qdisplay(int p, int arr[]) {
    int i;
    if (p==0) printf("Queue is Empty\n");

    for (i=0; i < p; i++) {
        printf("%d ", arr[i]);
    }
}

void Qcount(int p) {
    printf("The No. of Elements in the queue is %d\n", p);
}

void Qpeek(int p, int arr[]) {
    printf("The peak element in the queue is %d\n", arr[p-1]);
}

void isEmpty() {
    printf("Underflow\n");
}

void isFull() {
    printf("Overflow\n");
}