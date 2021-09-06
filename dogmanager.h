#ifndef DOGMANAGER_H
#define DOGMANAGER_H

#include <vector>
#include <string>

class DogManager{
    std::vector<Dog> dogList; //holds dogs loaded from file

    void loadDogs(std::string file);

public:
    DogManager(std::string file); //call the private function loadDogs

    Dog oldestDog(); //Returns: the Dog object that has the highest age of those currently loaded
    void printDogs(); //delegates printing to the DogTablePrinter class by calling printDogTable

};

#endif