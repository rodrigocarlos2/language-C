


#include <iostream>
#include <vector>
#include <stdio.h>


using namespace std;

int main(){
	
	int n;
	vector <int> v;
	
	v.push_back( 10 );
	v.push_back( 5 );
	v.push_back( 2 );
	
	for(n=0; n<3; n++){
		
		cout << v[n] << " ";
		
	}
	
	if(v.empty()==true){
		cout << "List is empty!\n";
	}
	else{
		cout << "List is not empty!\n";
	}
	
	return 0;
	
}
