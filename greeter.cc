// Simple starting example to illustrate the "strategy design pattern"
// ** Variability **

#include <string>
#include <vector>
#include <iostream>

// greeter class: configured with a list of names, outputs a greeting for each name
class Greeter {
private:
	std::vector<std::string> names; // the list of names that the greeter must greet

public:
	// adds a name to the list of names that this Greeter object must greet
	void addName(std::string name) {
		names.push_back(name);
	}

	// greeting everyone:
	void greet() {
		for (std::vector<std::string>::iterator it=names.begin(); it != names.end(); it++) {
			std::cout << "Hello " << *it << "!" << std::endl;
		}
	}
};


// example of using the class

int main() {
	Greeter john;
	john.addName("Mark");
	john.addName("Sophie");
	john.addName("Lilly");
	john.greet();
	// outputs
	// Hello Mark!
  // Hello Sophie!
	// Hello Lilly!
	return 0;
}
	
