/*
* In C++ Functors allows us to call a class's objects just like 
* regular functions. 
* Don't confuse Functors with Constructors. That's why 
* I've used a constructor in this program
*/

#include <iostream>

class Abela {
public: 
	Abela() {	// This is just a consturctor 
		std::cout << "An object has been created" << std::endl; 
	}
	void operator () (){	// class Abela's Functor 
		std::cout << "\nThis is a C++ Functor!!" << std::endl; 
		std::cout << "Welcome to Functors" << std::endl;
	}
};

int main() {
	Abela obj1; // Create an object of type Abela 
	obj1 ();	// Calling the object as a function. Functor 

	return 0; 
}