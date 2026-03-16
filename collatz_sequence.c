#include <stdio.h>
#include <stdlib.h>

int* collatz_sequence(int n, int* length) {
    int* sequence = malloc(1000 * sizeof(int));
    int count = 0;
    
    while (n != 1) {
        sequence[count++] = n;
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    sequence[count++] = 1;
    *length = count;
    
    return sequence;
}

int main() {
    int length = 0;
    int* result = collatz_sequence(27, &length);
    
    printf("Collatz sequence for 27:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", result[i]);
    }
    printf("\nLength: %d\n", length);
    
    free(result);
    return 0;
}