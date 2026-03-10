#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    char userName[100];
    int contributions;
    int streak;
} gitUser;

void sanitizeFgets(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

void inp(gitUser *ptr){
	
	printf("Welcome to the GitHub Assessment");
	printf("\n--------------------------------\n\n");

    printf("What is your actual full name?\n=> ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    sanitizeFgets(ptr->name);

    printf("What is your username\n=> ");
    fgets(ptr->userName, sizeof(ptr->userName), stdin);
    sanitizeFgets(ptr->userName);

    printf("How many contributions do you have?\n=> ");
    scanf("%d", &ptr->contributions);

    printf("What is your longest streak?\n=> ");
    scanf("%d", &ptr->streak);
}

void outp(gitUser *ptr){
    printf("\nName => %s\n", ptr->name);
    printf("Username => %s\n", ptr->userName);
    printf("Contributions => %d\n", ptr->contributions);
    printf("Longest streak => %d\n", ptr->streak);
}

int main(){

    gitUser user;

    inp(&user);
    outp(&user);

    return 0;
}