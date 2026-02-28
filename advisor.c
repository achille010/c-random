#include <stdio.h>

int main() {
    int mood;
    int energy;
    int goodDays = 0;
    int badDays = 0;
    char choice;

    do {
        printf("\nHow was your day?\n");
        printf("1. Bad\n");
        printf("2. Okay\n");
        printf("3. Good\n");
        printf("Choose: ");
        scanf("%d", &mood);

        printf("\nHow much energy do you have? (1-10): ");
        scanf("%d", &energy);

        if (mood == 3) {
            goodDays++;
            if (energy >= 7)
                printf("Advice: Use this energy. Do something productive.\n");
            else
                printf("Advice: You had a good day. Rest and enjoy it.\n");
        } 
        else if (mood == 2) {
            printf("Advice: Not bad. Improve one small thing tomorrow.\n");
        } 
        else if (mood == 1) {
            badDays++;
            if (energy <= 4)
                printf("Advice: Rest. Tomorrow can be better.\n");
            else
                printf("Advice: Try something small to lift your mood.\n");
        } 
        else {
            printf("Invalid mood choice.\n");
        }

        printf("\nGood days so far: %d\n", goodDays);
        printf("Bad days so far: %d\n", badDays);

        printf("\nDo you want to enter another day? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nSummary:\n");
    printf("Good days: %d\n", goodDays);
    printf("Bad days: %d\n", badDays);

    if (goodDays > badDays)
        printf("Overall: You're doing okay. Keep going.\n");
    else
        printf("Overall: Tough times, but you're still standing.\n");

    return 0;
}
