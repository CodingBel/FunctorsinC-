/*
* In C++ Functors allows us to call a class's objects just like 
* regular functions. 
* NOTE: functors could have any return type just like regualr 
* functions. 
* Don't confuse Functors with Constructors. That's why 
* I've used a constructor in this program
*/

#include <iostream>
class Abela {
private: 
	int initialValue = 0; 
public: 
	Abela(int zNum) {
		initialValue = zNum; 
	}

	int operator ()(int theNum) {
		return initialValue + theNum; 
	}
};

int main() {

	Abela obj1(100); // parametreized constructor 
	int sum = obj1(50); // Passing an int value to Z Functor

	std::cout << "The Value of sum is: " << sum << std::endl; 

	return 0; 
}