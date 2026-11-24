#include "Form.hpp"

int main() {
	try {
		Bureaucrat b1("b1", 150);
		Form f1("f1", 149, 160);
		
		b1.signForm(f1);
		std::cout << f1.getSignedStatus();
	} catch(std::exception& e) {
		std::cout << "exception catched: " << e.what();
	}
}