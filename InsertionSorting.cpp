
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#define MAX 200

using namespace std;

int count;

void insertionSort(int *v, int e);

void readElement(int *e);

void begin(int v[]);

void print(int v[]);

void beginAux(int v[]);

void insertionSort(int *v, int e){
	
	int i, pos=count, i3=0;
	int aux[MAX];
	
	beginAux(aux);
	
	for(i=0; i<count+1; i++){
		
		if(v[i]>e){
			
			pos = i;
			
			break;
			
		}
		
	}
	
	// Found the position
	
	cout << "Position: " << pos << endl;
	cout << "Count: "<< count << endl;
	
	if(pos!=count || count==0){
		
		for(i=0; i<count+1; i++){
		
			if(i==pos){
				
				for(int i2=count; i2>pos; i2--){
					
					v[i2] = v[i2-1];
					
				}
				
				v[pos] = e;
				
			}
		
		}
		
	}
	
	else{
		
		v[pos] = e;
		
	}
	
	count = count+1;
	
	// Sorting
	
}

void begin(int v[]){
	
	int i;
	
	count = 0;
	
	for(i=0; i<MAX; i++){
		
		v[i] = -1;
		
	}
	
}

void beginAux(int v[]){
	
	int i;
	
	for(i=0; i<MAX; i++){
		
		v[i] = -1;
		
	}
	
}

void print(int v[]){
	
	int i;
	
	for(i=0; i<count; i++){
		
		if(v[i]!=-1)
			cout << " " << v[i] << " ";
		
	}
	
	cout << endl;
	
}

void readElement(int *e){
	
	cout << "Write the element: ";
	
	cin >> *e;
	
}

int menu(){
	
	int r;
	
	cout << "1. Insert\n";
	cout << "2. Show\n";
	cout << "3. Exit\n";
	
	cin >> r;
	
	return r;
}

int main(){
	
	int op, e;
	
	int v[MAX];
	
	begin(v);
	
	do{
		
		op = menu();
		
		switch(op){
			
			case 1:
				
				readElement(&e);
				
				insertionSort(v, e);
				
				break;
				
			case 2:
				
				print(v);
				
				break;
			
		}
		
		getchar();getchar();
		system("cls");
		
	}while(op!=3);
	
	system("pause");
	
	return 0;
	
}
