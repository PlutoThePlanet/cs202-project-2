//The class is responsible for holding all attributes of a dog. 
//Implementation of functions go here

#include <iostream>
#include <string>
#include "dog.h"

    std::string name; // name of the dog
    int age; // its age in years
    std::string breed; // the dog breed (Terrier, Bloodhound, etc.)

    //getters
    std::string Dog::getName() const{
        return name;
    }

    int Dog::getAge() const{
        return age;
    }

    std::string Dog::getBreed() const{
        return breed;
    }

    //setters
    void Dog::setName(std::string newName){
        name = newName;
    }

    void Dog::setAge(int newAge){
        age = newAge;
    }

    void Dog::setBreed(std::string newBreed){
        breed = newBreed;
    }

    //constructor
    Dog::Dog(std::string name, int age, std::string breed): name(name), age(age), breed(breed){};