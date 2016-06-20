
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Uppercase(char phrase[]);

void Lowercase(char phrase[]);

int compare(char phrase1[], char phrase2);

void Uppercase(char phrase[]){
	
	int i;
	int max = strlen(phrase);
	
	for(i=0; i<max; i++){
		
		phrase[i] = toupper(phrase[i]);
		
	}
	
}

void Lowercase(char phrase[]){
	
	int i;
	int max = strlen(phrase);
	
	for(i=0; i<max; i++){
		
		phrase[i] = tolower(phrase[i]);
		
	}
	
}

int compare(char phrase1[], char phrase2){
	
	return strcmp(phrase1, phrase2);
	
}

void show(char phrase[]){
	
	printf("Str: %s\n", phrase);
	
}

int main(){
	
	char phrase[]="rodrigo";
	
	Uppercase(phrase);
	
	show(phrase);
	
	Lowercase(phrase);
	
	show(phrase);
	
	getchar();
	
	return 0;
	
}
