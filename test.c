#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	FILE* fptr;
	char input[50] = "";
	fptr = fopen("test.txt","r");
	while (fscanf(fptr,"%[^\n]\n",&input) != EOF) {
		printf("%s\t",input);
	}
	return 0;
}