#include <stdio.h>

struct car {
	int nbrOfTyres, nbrOfDoors, nbrOfSeats;
	char color[20], model[100];
	float price;
};

void sanitize(char *ptrToChar) {
	char *source = ptrToChar;
	char *destination = ptrToChar;
	
	while (*source != '\0') {
		if (*source != '\n' && *source != '\r') {
			*destination = *source;
			destination++;
		} 
		source++;
	}
	*destination = '\0';
}

struct car Benz;
struct car *ptrToBenz = NULL;

void readInputsFor(struct car *ptr) {
	printf("Input specifications for a car below\n------------------------------------\n\n");
	
	printf("Input the number of \"tyres\"\n=>");
	scanf("%d", &ptr->nbrOfTyres);
	
	printf("Input number of \"Doors\" please\n=>");
	scanf("%d", &ptr->nbrOfDoors);
	
	printf("Input the number of \"Seats\" please\n=>");
	scanf("%d", &ptr->nbrOfSeats);
	
	getchar();
	
	printf("Input the \"Color\" please\n=>");
	fgets(ptr->color, sizeof(ptr->color), stdin);
	sanitize(ptr->color);
	
	printf("Input the \"Model\" please\n=>");
	fgets(ptr->model, sizeof(ptr->model), stdin);
	sanitize(ptr->model);
	
	printf("\n---\nSuccessfully recorded: \n\"A %d wheel, %d door, %d seat %s %s\"\n---\n",
	       ptr->nbrOfTyres, ptr->nbrOfDoors, ptr->nbrOfSeats, ptr->color, ptr->model);
}

void print(struct car *ptr) {
	printf("\nVehicle specifications for \"%s\" \n--------------\n", ptr->model);
	printf("%d Wheels\n", ptr->nbrOfTyres);
	printf("%d Seats\n", ptr->nbrOfSeats);
	printf("%d Doors\n", ptr->nbrOfDoors);
	printf("\"%s\" color\n", ptr->color);	
}

int main() {
	ptrToBenz = &Benz;
	readInputsFor(ptrToBenz);
	print(ptrToBenz);
	
	return 0;

}