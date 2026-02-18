#include <stdio.h>

int reverse(int num){
	int rev = 0;
	
	while(num > 0){
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	
	return rev;	
}

int main(){
	int input; 
	
	printf("Enter a number: ");
	scanf("%d", &input);
	
	printf("%d", reverse(input));
	
	return 0;
}
