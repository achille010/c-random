#include <stdio.h>

void checker(int n){
	if(n % 2 == 0) printf("Even");
	else if(n % 2 == 1) printf("Odd");
}

int main(){
	int input; 
	
	printf("Enter a number: ");
	if(scanf("%d", &input) != 1){
		printf("Invalid input!");
		return 1;
	}
	
	checker(input);
	return 0;	
}