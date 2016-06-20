

#include <stdio.h>
#include <stdlib.h>

int pot(int b, int e){
	
	if(e<2)
		return b;
	else
		return b*pot(b, e-1);
	
}

int main(){
	
	printf("Resultado: %d\n", pot(2, 3));
	
	return 0;
	
}
