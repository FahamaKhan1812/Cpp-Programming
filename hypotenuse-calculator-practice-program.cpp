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
	
	a = pow(a, 2);
	b = pow(b,2);
	
	c = sqrt(a + b);
	
	cout << "Side C: " << c << endl;
	
	return 0;
}
