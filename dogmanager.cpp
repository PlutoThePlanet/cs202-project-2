//The class is responsible for loading and maintaining dog data. 
//Implementation of functions go here

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "dog.h"
#include "dogmanager.h"
#include "dogtableprinter.h"

    std::vector<Dog> dogList; //holds dogs loaded from file

    //constructor
    DogManager::DogManager(std::string file){//call the private function loadDogs
        loadDogs(file);
    } 

    void DogManager::loadDogs(std::string file){ //try and see if the file can be opened. if it can't be, throw an exception
        std::ifstream fin;
        std::string dogStats;
        std::string name;
        int age;
        std::string breed;

        fin.open(file);
        if((fin.is_open()) == false){
            std::cout << "File " << file << "could not be opened" << std::endl;
            throw std::exception();
        }
        
        while(getline(fin, dogStats)){ //while you can still pull lines of text
            int index = 0;
            std::istringstream streamLine(dogStats);

            if(streamLine >> name >> age >> breed){
                Dog newDog(name, age, breed);
                dogList.emplace_back(newDog);
                index++;
            }else{
                std::cout << "The data file is not formatted correctly" << std::endl;
                throw std::exception();
            }
        }
        fin.close();
    }

    //methods
    Dog DogManager::oldestDog(){
        int index = 0;
        for(int i=0; i < dogList.size(); i++){
            if(dogList[i].getAge() > dogList[index].getAge()){
                index = i;
            }
        }
        return dogList[index]; //returns the oldest Dog object 
    } 
    
    void DogManager::printDogs(){ //delegates printing to the DogTablePrinter class by calling printDogTable
        DogTablePrinter::printDogTable(dogList);
    } 
