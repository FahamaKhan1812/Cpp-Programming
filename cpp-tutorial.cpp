#include<iostream>
using namespace std;

/*
cout -> << (insertion operator)
cin -> >> (extraction operator)
*/


int main(){
	
	string name;
	int age;
	
	cout << "Enter your name: " << endl;
	cin >> name;
	cout << "Hello " << name << endl;
	
	cout << "Enter your age: " << endl;
	cin >> age;
	cout << "Your age is: " << age << endl;	
	
	
	return 0;
}
