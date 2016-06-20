
#include <stdio.h>
#include <stdlib.h>

void ping(char ip[]){
	
	char exec[] = "ping -t ";
	
	strcat(exec, ip);
	
	system(exec);
	
}

void input(char ip[]){
	
	printf("Write the ip: ");
	scanf("%s", ip);
	
}

int main(){
	
	char ip[15];
	
	input(ip);
	
	ping(ip);
	
	getchar();
	return 0;
	
}
