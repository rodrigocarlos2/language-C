
#include <iostream>
#include <thread>
#include <string.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

string host_ip[18];
string ap_ip[18] = "10.180.40.1";

void attack(string host_ip){
	
	cout << "--------------" << endl;
	string ping = "start ping "+host_ip;
	system(ping.c_str());
	cout << "--------------" << endl;	
}

int main(){
	
	thread td[10];
	int i=0;
	
	for(i=1; i<=10; i++){
		
		string ip;
		
		if(i<10)
			ip = "10.180.88.00";
		else
			ip = "10.180.88.0";
		
		string ip2;
		
		ip2 = to_string(i);
		
		ip = ip+ip2;
		
		cout << ip << endl;
		
		td[i] = thread(attack, ip);
		
	}
	
	for(i=0; i<10; i++){
		
		td[i].join();
		
	}
	
	/*
	td[0] = thread(attack, "10.180.89.79");
	
	td[1] = thread(attack, "10.180.89.22");
	
	td[2] = thread(attack, "10.180.89.123");
	
	td[3] = thread(attack, "10.180.88.179");
	
	td[0].join();
	
	td[1].join();
	
	td[2].join();
	*/
	
	// All thread create should runned
	
	system("pause");
	
	return 0;
	
}
