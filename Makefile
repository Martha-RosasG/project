//Arturo Alejandro Guzman Perez 22110356
//Cesar Eduardo Campos Virgen 22110354 

bin/proyectoMetodo.exe : src/Main.cpp 
//objetivo : dependencias 
	//tarea 
	g++ -o/proyectoMetodo src/Main.cpp -Iinclude

run: bin/proyectoMetodo.exe
	./bin/proyectoMetodo.exe

clean: bin/proyectoMetodo.exe
	rm -f bin/*.exev  