#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include "../include/rainbow.hpp"
#include "../include/GaussSeidel.h"

using namespace std;


int main()
{
    char salir;
    do{
        system("cls");
    print_colored("****************GAUSS-SEIDEL*******************\n ", YELLOW, BG_BLUE);

    set_color(MAGENTA, BG_CYAN);
    set_color(DEFAULT, BG_DEFAULT);
    int e;
    
    cout<<"\nIngresa el numero de Ecuciones: \n";
    cin>>e;

    Gauss_Seildel g1 = Gauss_Seildel(e,e,e,e,e,e);//objeto de la clase

    g1.fix();
    g1.matriz();
    cout<<"\n\nDesea continuar en el programa(S/N).\n"<<endl;
    cin>>salir; 
    }while(salir=='S');

    system("pause");
    return 0;
}
