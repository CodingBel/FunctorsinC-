/*
* In C++ Functors allows us to call a class's objects just like 
* regular functions. 
* NOTE: functors could have any return type just like regualr 
* functions. 
* Don't confuse Functors with Constructors. That's why 
* I've used a constructor in this program
*/

#include <iostream>
// Functors just like regualr functions could also take arguments and return values 
// if programmed to do so. 

class Abela {
public: 
	int operator () (int num1, int num2) {
		return num1 + num2; 
	}
};

int main() {
	Abela obj1; 
	int sum = obj1.operator()(5, 6); 

	std::cout << "Sum of the two numbers is: " << sum << std::endl; 
	return 0; 
}