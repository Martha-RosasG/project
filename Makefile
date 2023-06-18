bin/proyectoMetodo.exe : src/Main.cpp 
//objetivo : dependencias 
	//tarea 
	g++ -o/proyectoMetodo src/Main.cpp -Iinclude

run: bin/proyectoMetodo.exe
	./bin/proyectoMetodo.exe

clean: bin/proyectoMetodo.exe
	rm -f bin/*.exev  
