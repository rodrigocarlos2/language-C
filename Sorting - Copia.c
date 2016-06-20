
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isOrder(int *v, int count){
	
	int i;
	
	for(i=0; i<count; i++){
		if(i+1 < count){
			if(v[i]>v[i+1]){
				return 0;
			}
		}
	}
	
	return 1;
}

void swap(int *v1, int *v2){
	
	int tmp = *v1;
	*v1 = *v2;
	*v2 = tmp;
	
}

int random(int max){
	
	srand(time(NULL));
	
	return rand()%max;
	
}

void sorter(int *v, int count){
	
	while(isOrder(v, count)==0){
		
		int pos1 = random(count);
		
		int pos2 = random(count);
		
		if(pos2==pos1){
			
			pos2 = pos1+1;
			
			if(pos2==count){
				pos2 = pos2-2;
			}
			
		}
		
		printf("Wait...\n");
		
		if(pos1<pos2){
			
			if(v[pos1]>v[pos2]){
				swap(v+pos1, v+pos2);
			}
			
		}
		
		else{
			
			if(v[pos2]>v[pos1]){
				swap(v+pos2, v+pos1);
			}
			
		}
		
	}
	
}

void show(int *v, int count){
	
	int i;
	
	for(i=0; i<count; i++){
		
		printf("%d ", v[i]);
		
	}
	
	printf("\n");
	
}

int main(){
	
	int v[] = {6, 2, 3, 1, 4};
	
	// Random Order - It is much cost!
	sorter(v, 5);
	// Only for academic way!
	
	printf("Sorted!\n");
	show(v, 5);
	
	getchar();
	
}
