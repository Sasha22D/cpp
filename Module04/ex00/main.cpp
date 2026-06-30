#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    Animal* animal = new Animal();
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    animal->makeSound();
    dog->makeSound();
    cat->makeSound();
    std::cout << animal->getType() << "\n";
    std::cout << dog->getType() << "\n";
    std::cout << cat->getType() << "\n";
    delete animal;
    delete dog;
    delete cat;
}