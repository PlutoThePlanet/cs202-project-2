#ifndef DOG_H
#define DOG_H

#include <vector>

class Dog{
    std::string name;  // name of the dog
    int age;      // its age in years
    std::string breed; // the dog breed (Terrier, Bloodhound, etc.)

public: 
    //Create getters and setters for all class attributes.
    std::string getName() const;
    int getAge() const;
    std::string getBreed() const;

    void setName(std::string newName);
    void setAge(int newAge);
    void setBreed(std::string newBreed);

    Dog(std::string name, int age, std::string breed);
};

#endif