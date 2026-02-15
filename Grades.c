#include <stdio.h>

int main() {
    char subject[20];
    int students, max;

    printf("Course name please: ");
    scanf("%19s", subject);

    printf("Number of students please: ");
    scanf("%d", &students);

    printf("The course is out of: ");
    scanf("%d", &max);

    int marks[students];
    int perc[students];
    char grade[students];

    for (int i = 0; i < students; i++) {
        printf("Input the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < students; i++) {
        perc[i] = (marks[i] * 100) / max;

        if (perc[i] >= 80)
            grade[i] = 'A';
        else if (perc[i] >= 70)
            grade[i] = 'B';
        else if (perc[i] >= 50)
            grade[i] = 'C';
        else
            grade[i] = 'F';
    }

    printf("\nMarks for the Course: %s\n", subject);
    printf(" #   Marks   Percentage   Grade\n");
    printf("--------------------------------\n");

    for (int i = 0; i < students; i++) {
        printf(" %d     %d        %d%%         %c\n",
               i + 1, marks[i], perc[i], grade[i]);
    }

    printf("--------------------------------\n");
    return 0;
}
