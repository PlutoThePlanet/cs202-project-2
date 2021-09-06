//This class encapsulates the printing of the table. 
//Note that this class has no attributes
//designed to have only static functions

#include <iostream>
#include <vector>
#include "dog.h"
#include "dogtableprinter.h"

void DogTablePrinter::printDogTable(std::vector<Dog> dogList){ //prints table of dogs
    std::cout << "Name    Age     Breed" << std::endl;
    std::cout << "======================" << std::endl;

//std::cout << dogList.size() << std::endl;

    for(int i=0; i < dogList.size(); i++){
        std::cout << dogList[i].getName() << "\t" << dogList[i].getAge() << "\t" << dogList[i].getBreed() << std::endl;
    }
} 

/*
Name    Age     Breed
======================
Rover   10      baddog
Tim     12      Terrier
Grogu   50      Jeddi
*/