#include <stdio.h>

int main(){
	int input, sum = 0;
	
	printf("Input a number: ");
	scanf("%d", &input);
	
	for(int i = 1; i <= input; i++){
		printf("%d ", i);
		sum += i;
	}
	printf("\n%d", sum);
}