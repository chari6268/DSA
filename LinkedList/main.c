#include<stdio.h>
#include "linked_list.h"

int main(){
    int n;
    printf("Enter numbers to append to the linked list (-1 to stop):\n");
    while (1) {
        scanf("%d", &n);
        if (n == -1)
            break;
        append(n);
    }
    printf("Linked list after appending:\n");
    display();
    printf("Enter numbers to append at the beginning of the linked list (-1 to stop):\n");
    while (1) {
        scanf("%d", &n);
        if (n == -1)
            break;
        appendAtBeginning(n);
    }
    printf("Linked list after appending at the beginning:\n");
    display();
    return 0;
}