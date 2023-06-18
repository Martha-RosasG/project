#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
using namespace std;

class Gauss_Seildel//clase
{
private://atributos
    int n,i,j,k,flag,count;
    
public://metodos
    Gauss_Seildel(int,int,int,int,int,int);//Constructor
    void fix();
    void matriz();
};
//inicio del constructor
Gauss_Seildel::Gauss_Seildel(int _n,int _i, int _j, int _k, int _flag = 0,int _count = 0){
    n = _n;
    i = _i;
    j = _j;
    k = _k;
    flag = _flag;
    count = _count;
   
};

void Gauss_Seildel::fix(){
    cout.precision(4);
    cout.setf(ios::fixed);
};
void Gauss_Seildel::matriz(){
    setlocale(LC_ALL, "spanish");//Sirve para mostrar caracteres o letras especiales.
	double a[n][n+1];            //Declara una matrix 2d para almacenar los elementos de la matriz aumentada.
    double x[n];                //Declara una matriz para almacenar los valores de las variables.
    double eps,y;

    cout<<"\nIngresa los valores (coeficientes) de la ecuaci�n (ordenados o desordenados):\n";//En esta parte debemos agregar los numeros uno por uno en orden de la fila de la matriz.
	for (i=0;i<n;i++)
	for (j=0;j<=n;j++)             
    cin>>a[i][j];

	cout<<"\n\tMatriz de coeficientes:";//Imprime la ecuaci�n en forma de matriz que ingresamos nosotros.
	cout<<"\n-----------------------------------------------------------------------\n ";	
	
    for(i=0;i<n;i++){
		for(j=0;j<=n;j++){
			cout<<"\t["<<a[i][j]<<"]";
		}
		cout<<"\n";
	}
	cout<<"\n-----------------------------------------------------------------------\n\n ";//Termina de imprimir eciaci�n.

	cout<<"\nIngresa los valores iniciales:\n";//Debe ser agregado uno por uno de igual manera en una sola columna.
	for (i=0;i<n;i++)         
    cin>>x[i];

    cout<<"\nIngresa el error o la precision que desea para la solucion:\n";     cin>>eps;//Ingresar ya sea 0.1, 0.01, 0.001, 0.0001, etc.
    for (i=0;i<n;i++)//Sirve para hace la ecuacion diagonalmente dominante.
    	for (k=i+1;k<n;k++)
            if (abs(a[i][i])<abs(a[k][i]))
                for (j=0;j<=n;j++)
                {
                    double temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }  

	cout<<"\n\tEcuaci�n diagonalmente dominante:";//Imprime ecuaci�n diagonalmente dominante en forma de matriz.
	cout<<"\n-----------------------------------------------------------------------\n ";			 
	for(i=0;i<n;i++){
		for(j=0;j<=n;j++){
			cout<<"\t["<<a[i][j]<<"]";
		}
		cout<<"\n";
	}
	cout<<"\n-----------------------------------------------------------------------\n\n\n ";// termina de imprimirla.	     
    cout<<"Iter"<<setw(10);
    for(i=0;i<n;i++)
        cout<<"x"<<i<<setw(18);
    cout<<"\n----------------------------------------------------------------------";
    do                            //Sirve para realizar y calcular las interacciones x1,x2,...xn.
    {
        cout<<"\n"<<count+1<<"."<<setw(16);
        for (i=0;i<n;i++)                //Bucle que calcula x1,x2,...xn.
        {
            y=x[i];
            x[i]=a[i][n];
            for (j=0;j<n;j++)
            {
                if (j!=i)
                x[i]=x[i]-a[i][j]*x[j];
            }
            x[i]=x[i]/a[i][i];
            if (abs(x[i]-y)<=eps)            //Compara el valor con el ultimo valor.
                flag++;
            cout<<x[i]<<setw(18);
        }
        cout<<"\n";
        count++;
    }while(flag<n);  //Si los valores de todas las variables no difieren de sus valores anteriores con un error superior se detiene el bucle.
 
    cout<<"\nLa Solucion es la Siguiente:\n";
    for (i=0;i<n;i++)
        cout<<"x"<<i<<" = "<<x[i]<<endl;        //Imprime el contenido de x[].
}
