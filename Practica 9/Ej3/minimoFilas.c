#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pepe = (int *)malloc(12 * sizeof(int));

    for (int i = 0; i < 12; i++) {
        int num;
        scanf("%d", &num);

        *(pepe + i) = num;
    }

    for (int i = 0; i < 12; i++) {
        printf("%d: %d", i, *(pepe + i));
    }
}