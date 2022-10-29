#include<iostream>
using namespace std;

/*
	namespace provides s solution for preventing name conflicts in large projects.
	Each entity needs a unique name
*/

namespace first{
	int x = 5;
}

namespace second{
	int x = 20;
}

int main(){
	int x = 0;
	
	cout << x << endl; //if we don't explicitly state what namespace we're using we'll use local one i.e x = 0
	
	cout << second::x << endl; // here '::' is called scope reslution operator
	 
	return 0;
}
