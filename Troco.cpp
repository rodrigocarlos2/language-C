
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

#define MAX 100

int count;

void begin(int v[]);

void troco(int v[], int value);

void begin(int v[]){
	
	int i;
	
	count = 0;
	
	for(i=0; i<MAX; i++){
		v[i] = -1;
	}
	
}

void setLanguage(){
	
	setlocale(LC_ALL, "Portuguese");
	
}

void troco(int v[], int value){
	
	if(value>=100){
		
		v[count] = 100;
		count++;
		troco(v, value-100);
		
	}
	
	else if(value>=25){
		
		v[count] = 25;
		count++;
		troco(v, value-25);
		
	}
	
	else if(value>=10){
		
		v[count] = 10;
		count++;
		troco(v, value-10);
		
	}
	
	else if(value>=1){
		
		v[count] = 1;
		count++;
		troco(v, value-1);
		
	}
	
	else{
		
		return;
		
	}
	
}

void show(int v[]){
	
	cout << "Moedas: ";
	
	for(int i=0; i<count; i++){
		
		cout << " " << v[i];
		
	}
	
	cout << endl;
	
	cout << "Solução gulosa com " << count << " moedas\n";
	
}

int menu(){
	
	int r;
	
	cout << "1. INPUT\n";
	cout << "2. OUTPUT\n";
	cout << "3. EXIT\n";
	
	cin >> r;
	
	return r;
	
}

void input(int *value){
	
	cout << "Write the value: ";
	cin >> *value;
	
}

int main(){
	
	int op, value;
	
	int v[MAX];
	
	setLanguage();
	
	begin(v);
	
	do{
		
		op = menu();
		
		switch(op){
			
			case 1:
				
				input(&value);
				
				begin(v);
				
				troco(v, value);
				
				break;
				
			case 2:
				
				show(v);
				
				break;
			
		}
		
		getchar();getchar();
		system("cls");
		
	}while(op!=3);
	
	system("pause");
	
	return 0;
	
}
