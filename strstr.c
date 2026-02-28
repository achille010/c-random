#include <stdio.h>
#include <string.h>

int main(){
	char first[30] = "Hello world!";
	char second[30] = "Hello world!";
	
	char *result = strstr(first, "Hello world");
	char *lChar = strchr(first, 'l');
	char *fChar = strrchr(first, 'l');
	
	
	if(result != NULL) printf("Found: %s\n", result);
	else printf("Not found!");
	
	if(lChar != NULL) printf("Found: %s\n", lChar);
	else printf("Not found!");
	
	if(fChar != NULL) printf("Found: %s\n", fChar);
	else printf("Not Found!");
	
	const int comparResult = strcmp(first, second);
	printf("%d", result);
	
	return 0;
}