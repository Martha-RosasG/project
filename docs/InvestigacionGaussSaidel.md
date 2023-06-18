Rosas Galaviz Martha Lorena_21310187_3.F

Investigación

Método: Gauss Seidel 

- ¿Qué es?
  Es un procedimiento iterativo para soluciones aproximadas a un sistema de ecuaciones algebraicas lineales con la precisión que se decida. Su aplicación es para matrices cuadradas que contienen elementos no nulos en sus diagonales y la convergencia se cumple si la matriz es diagonalmente dominante.
  Este método mo sólo se limita únicamente a sistema de ecuaciones lineales 2×2. Si no para un sistema lineal de n ecuaciones con n incógnitas, representado matricialmente como: A X = b


-¿Qué es una Matriz diagonalmente dominante?
  Una matriz es diagonalmente dominante cuando el valor absoluto del elemento diagonal de cada fila es mayor o igual que la suma de los valores absolutos de los otros elementos de esa misma fila.

-Procedimiento con ejmplo:

 1.Oraganizar la matriz en forma diagonalmente dominante, de mayor a menor

  Matiz desordenada       Matriz ordenada 

  x - 15y + 2z = -8       10x + 3y  - z  = 4
 -x + 3y  + 20z= 10         x - 15y + 2z = -8  
  10x + 3y  - z  = 4       -x + 3y  + 20z= 10 


  2.Despejar las variables de cada ecuación

 Matriz ordenada          Despejes

10x + 3y  - z  = 4       x= 4-3y+z/10
  x - 15y + 2z = -8      y= -8-x-2z/-15
 -x + 3y  + 20z= 10      z= 10+x-3y/20


 3.Calcular de acuerdo a los valores iniciales 
  
  x(0)=0   x(1)=2/5   x(2)= 4-3y+z/10 =0.290
  y(0)=0   y(1)=8/15  x(2)= -8-x-2z/-15 =0.627
  z(0)=0   z(1)=0     x(2)= 10+x-3y/20 =0.440

4.Calcular la cantidad de iteraciones deseadas sustituyendo los valores iniciales en la ecuación despejada.


- Análisis del método: 

A diferencia de otros métodos iterativos,en que se requieren aproximaciones de etapa previa, en dicho método se tiene que sustituir en las variables, y con esto los valores aproximados obtenidos para la variable previa en ese mismo paso. 
Seidel tampoco paralelo, mientras que Gauss-Jordan si lo es.Siendo esta la razón de que el método de Gauss-Seidel tenga una convergencia en menos pasos que el método de Jordan.
Y en cuanto a la condición de matriz diagonalmente dominante, esta no siempre se satisface. Aunque, la mayoría de casos basta con intercambiar las filas del sistema original para que se cumpla la condición. Además, el método converge casi siempre, aun cuando no se cumpla la condición de dominancia diagonal.
