
#include <stdio.h>
#include <stdlib.h>

void makePing(int max){
	
	int i;
	
	for(i=0; i<max; i++){
		system("ping www.google.com.br");
	}
	
}

int main(){
	
	makePing(10);
	
	getchar();
	return 0;
	
}
