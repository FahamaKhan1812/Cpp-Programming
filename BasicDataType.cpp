#include<iostream>

int main(){
	
	//integer (whole number)
	int x ;
	x = 5;
	int y = 6;
	int sum = x + y;
	
	std::cout << x << '\n';
	std::cout << y << '\n';
	std::cout << sum << '\n';	
	
	//double (number including decimal)
	double price = 10.5443;
	double temperature = 35.5;
	
	std::cout << price << '\n';
	std::cout << temperature << '\n';
	
	//char (single character)
	char grade = 'A';
	char initial = 'B';
	char currency = '$';
	
	std::cout << initial << '\n';
	std::cout << currency << '\n';
	
	//boolean 
	bool isLoading = false;
	bool isDisplay = true;
	
	//string
	std::string name = "Fahama";
	std::string day = "Sunday";
	
	std::cout << name << '\n'; 
	std::cout << day << '\n'; 
	
	return 0; 
}
