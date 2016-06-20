
#include <stdio.h>
#include <stdlib.h>

int fatRec(int n){
	
	if(n<2){
		return n;
	}
	else
		return n*fatRec(n-1);
	
}

int fatNormal(int n){
	
	int fat = 1;
	int i;
	
	for(i=n; i>0; i--){
		fat = fat*i;
	}
	
	return fat;
	
}

int main(){
	
	printf("Fat: %d\n", fatRec(5));
	printf("Fat: %d\n", fatNormal(5));
	
	getchar();
	
}
