
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct delegate{
	
	int id;
	char name[55];
	char cpf[14];
	
};

typedef struct delegate Delegate;

struct requisition{
	
	int id;
	int id_delegate;
	char type[20];
	
};

typedef struct requisition Requistion;

int verifyCpf(Delegate *v1, int length, int cpf){
	
	int i;
	
	for(i=0; i<length; i++){
		
		if(v1[i].id!=-1){
			
			if(strcmp(v1[i].cpf, cpf)==0){
				return 0;
			}
			
		}
		
	}
	
	return 1;
}

int insertDelegate(Delegate *v1, int count, Delegate d){
	
	if(verifyCpf(d.cpf)){
		
		int i;
		
		for(i=0; i<count; i++){
			
			if(v[i].d==-1){
				
				v[i] = d;
				v[i].id = i;
				return 1;
				
			}
			
		}
		
	}
	
	return 0;
	
}

void begin(Delegate *v1, int count){
	
	int i;
	
	for(i=0; i<count; i++){
		
		v1[i].id = -1;
		
	}
	
}

int deleteDelegate(Delegate *v1, int count, char cpf[14]){
	
	int i;
	
	for(i=0; i<count; i++){
		
		if(v1[i].id!=-1 && (strcmp(v1[i].cpf, cpf)==0)){
			
			v1[i].id = -1;
			return 1;
			
		}
		
	}
	
	return 0;
	
}

void showDelegate(Delegate *v1, int count, char cpf[14]){
	
	int i;
	
	for(i=0; i<count; i++){
		
		if(v1[i].id!=-1){
			
			if(strcmp(v1[i].cpf, cpf)==0){
				
				printf("Id: %d\n", v1[i].id);
				printf("Name: %s\n", v1[i].id);
				printf("Cpf: %s\n", v1[i].cpf);
				
			}
			
		}
		
	}
	
}

void showAllDelegate(Delegate *v1, int count){
	
	int i;
	
	for(i=0; i<count; i++){
		
		showDelegate(v1, count, v1[i].cpf);
		
	}
	
}

Delegate* alloc(int count){
	
	Delegate *v;
	
	v = (Delegate *)malloc(count*sizeof(Delegate));
	
	if(v==NULL)
		exit(1);
		
	return v;
	
}

int menu(){
	
	int r;
	
	printf("1. Create Delegate\n");
	printf("2. Show Delegate\n");
	printf("3. Show all delegates\n");
	printf("4. Delete delegate\n");
	printf("5. End\n");
	
	scanf("%d", &r);
	
	return r;
	
}

void update(Delegate *v, int count){
	
	count++;
	
	v = (Delegate *)realloc(v, count*sizeof(Delegate));
	
}

void readDelegate(Delegate *d){
	
	printf("Digite seu nome: ");
	
	gets(d->name);
	
}

int main(){
	
	Delegate *v;
	int count=1;
	int op;
	Delegate in;
	
	v = alloc(count);
	
	begin(v1, count);
	
	do{
		
		op = menu();
		
		switch(op){
			
			case 1:
				
				
			
		}
		
	}
	
	return 0;
	
}
