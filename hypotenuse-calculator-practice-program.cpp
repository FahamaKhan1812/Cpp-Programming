#include<iostream>
#include<cmath>

using namespace std;

/*
	Hypotenuse calculator practice program 
*/


int main(){
	double a; 
	double b;
	double c;
	
	cout << "Enter side A: " << endl;
	cin >> a;
	
	cout << "Enter side B: " << endl;
	cin >> b;
	
	c = sqrt(pow(a, 2) + pow(b,2) );
	
	cout << "Side C: " << c << endl;
	
	return 0;
}
