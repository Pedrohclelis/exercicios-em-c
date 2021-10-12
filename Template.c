#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
	setlocale(LC_ALL,"");
	char data[1024];
	FILE *f;
	
	f = fopen("arq.txt", "w");
	if (f == NULL){
		printf("Error");
		exit(1);
	}
	
	printf("Enter content to store in file: ");
	fgets(data, sizeof(data), stdin);
	
	fputs(data, f);
	
	fclose(f);
	printf("File succesfully created", data);

	return 0;
}
