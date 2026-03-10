#include <stdio.h>

void traverse(int *p, int size){
	for(int i = 0; i < size; i ++){
		printf("%d ", *(p + i));
	}
}

int main(){
	int n;
	int *toArr = NULL;
	printf("Input the number of elements in your array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0; i < n; i ++){
		printf("What is the element at index %d\n=>", i);
		scanf("%d", &arr[i]);
	}
	
	toArr = arr;
	
	traverse(toArr, n);
	
	return 0;
}