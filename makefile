pet_manager: driver.o dog.o dogmanager.o dogtableprinter.o
	g++ -std=c++11 -o pet_manager driver.o dog.o dogmanager.o dogtableprinter.o

driver.o: driver.cpp dog.h dogmanager.h
	#g++ -std=c++11 driver.cpp
	g++ -std=c++11 -c driver.cpp

dog.o: dog.cpp dog.h
	#g++ -std=c++11 dog.cpp
	g++ -std=c++11 -c dog.cpp

dogmanager.o: dogmanager.cpp dogmanager.h
	#g++ -std=c++11 dogmanager.cpp
	g++ -std=c++11 -c dogmanager.cpp

dogtableprinter.o: dogtableprinter.cpp dogtableprinter.h 
	#g++ -std=c++11 dogtableprinter.cpp
	g++ -std=c++11 -c dogtableprinter.cpp

clean: 
	rm pet_manager *.o
