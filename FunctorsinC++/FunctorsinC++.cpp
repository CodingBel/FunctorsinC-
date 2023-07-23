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
public: 
	Abela() {	// This is just a consturctor 
		std::cout << "An object of Class Abela has been created" << std::endl; 
	}
	void operator ()() {	// class Abela's Functor 
		std::cout << "\nThis is a C++ Functor!!" << std::endl; 
		std::cout << "Welcome to Functors" << std::endl;
	}

};

int main() {
	Abela obj1; // Create an object of type Abela 
	obj1 ();	// Calling the object as a function. Functor 
	
	Abela obj2; 
	// We could also call Fuctors using the . operator. 
	obj2.operator()(); 

	return 0; 
}