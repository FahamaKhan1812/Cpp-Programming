#include<iostream>
#include<cmath>

using namespace std;

/*
	Simple calculator program 
*/


int main(){
	int options;
	
	double num1;
	double num2;
	double result;
	
	cout << "Simple Calculator App" << endl;
	cout << "You can perform these operations:\n1. +\n2. -\n3. *\n4. /" << endl;
	
	cout << "Select any options from the above" << endl;
	cin >> options;
	
	cout << "Enter number 1: " << endl;
	cin >> num1;
	
	cout << "Enter number 2: " << endl;
	cin >> num2;
	
	switch(options){
		case 1:
			result = num1+num2;
			cout  << "Sum of number 1 and nmber 2 is: " << result << endl;
			break;
	
		case 2:
			result = num1-num2;
			cout  << "Subtraction of number 1 and nmber 2 is: " << result << endl;
			break;
			
		case 3:
		result = num1*num2;
		cout  << "Multiplication of number 1 and nmber 2 is: " << result << endl;
		break;		
			
		case 4:
			result = num1/num2;
			cout  << "Division of number 1 and nmber 2 is: " << result << endl;
			break;
		
		default:
			cout << "Invalid option.\nPlease try again" << endl;		
	}
	
	
	return 0;
}
