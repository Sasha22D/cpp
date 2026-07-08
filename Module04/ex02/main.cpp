#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    Animal* array[100];
    for (int i = 0; i < 50; i++)
        array[i] = new Dog();
    for (int i = 50; i < 100; i++)
        array[i] = new Cat();

    for (int i = 0; i < 100; i++)
        delete array[i];
}