#include<stdio.h>
#include "linked_list.h"

int main(){
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == -1)
            break;
        append(n);
    }
    display();
    return 0;
}