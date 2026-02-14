#include <stdio.h>

#define MAX 1001

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int freq[MAX] = {0}; 

    printf("Enter the numbers:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] >= 0 && arr[i] < MAX) {
            freq[arr[i]]++; 
        }
    }

    int maxFreq = 0;
    int mostFrequent = -1;

    printf("\nFrequency Table:\n");
    for(int i = 0; i < MAX; i++) {
        if(freq[i] > 0) {
            printf("%d -> %d %s\n", i, freq[i], ((freq[i] == 1)? "time" : "times"));

            if(freq[i] > maxFreq) {
                maxFreq = freq[i];
                mostFrequent = i;
            }
        }
    }

    printf("\nMost frequent: %d\n", mostFrequent);

    return 0;
}
