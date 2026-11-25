
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int main()
{
    std::cout << "\n========== TEST 1: BUREAUCRATS ==========\n";

    try
    {
        Bureaucrat boss("Boss", 1);
        Bureaucrat employee("Employee", 150);

        std::cout << boss << std::endl;
        std::cout << employee << std::endl;

        std::cout << "\n========== TEST 2: FORM CREATION ==========\n";

        ShrubberyCreationForm shrubbery("home");
        RobotomyRequestForm robotomy("Bender");
        PresidentialPardonForm pardon("Arthur Dent");

        std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
        std::cout << pardon << std::endl;

        std::cout << "\n========== TEST 3: LOW GRADE SIGNING ==========\n";

        try
        {
            employee.signForm(shrubbery);
        }
        catch (const std::exception &e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }

        std::cout << "\n========== TEST 4: SIGNING FORMS ==========\n";

        boss.signForm(shrubbery);
        boss.signForm(robotomy);
        boss.signForm(pardon);

        std::cout << "\n========== TEST 5: EXECUTING FORMS ==========\n";

        boss.executeForm(shrubbery);
        boss.executeForm(robotomy);
        boss.executeForm(pardon);

        std::cout << "\n========== TEST 6: EXECUTION WITHOUT SIGNATURE ==========\n";

        ShrubberyCreationForm unsignedForm("unsigned");

        try
        {
            boss.executeForm(unsignedForm);
        }
        catch (const std::exception &e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }

        std::cout << "\n========== TEST 7: EXECUTION WITH INSUFFICIENT GRADE ==========\n";

        Bureaucrat weak("Weak", 140);

        try
        {
            weak.executeForm(shrubbery);
        }
        catch (const std::exception &e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }

        std::cout << "\n========== TEST 8: INVALID GRADES ==========\n";

        try
        {
            Bureaucrat invalid("Invalid", 0);
        }
        catch (const std::exception &e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }

        try
        {
            Bureaucrat invalid("Invalid", 151);
        }
        catch (const std::exception &e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    std::cout << "\n========== END OF TESTS ==========\n";

    return 0;
}
