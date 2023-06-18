Rosas Galaviz Martha Lorena_21310187_3.F

Manual de usuario 

Método: Gauss Seidel 

Pasos con ejemplo para ejecutar el progama en la consola: 

  1. Introducir el número de ecuaciones que se desean calcular; ejemplo: 3
  2. Introducir solo los coeficientes en orden de matriz, con sus respectivos espacios y saltos de línea; ejemplo:
     
     De tener una matriz así:                x - 15y + 2z = -8
                                            -x + 3y  + 20z= 10
                                           10x + 3y  - z  = 4
    
    Introduciremos sólo los coeficientes:    1 -15 2 -8
                                            -1 3 20 10
                                             10 3 -1 4

  3. A continuación se imprimiran los valores peviamente establecidos en forma de matiz, esto para que podamos ver el cambio de una matriz desacomodada y una diagonalmente dominante.
        [1.0000]        [-15.0000]      [2.0000]        [-8.0000]
        [-1.0000]       [3.0000]        [20.0000]       [10.0000]
        [10.0000]       [3.0000]        [-1.0000]       [4.0000]
 
  4. Ingresaremos los valores inicales; ejemplo: 0 0 0

  5. Ingresamos la precision de la solución; ejemplo: 0.01, 0.001, 0.0001 etc.

  6. El programa imprime la matriz diagonalmente dominante:
        [10.0000]       [3.0000]        [-1.0000]       [4.0000]
        [1.0000]        [-15.0000]      [2.0000]        [-8.0000]
        [-1.0000]       [3.0000]        [20.0000]       [10.0000]

  7. El programa imprime las iteraciones:
     
 Iter         x0                 x1                 x2
----------------------------------------------------------------------
              0.4000            0.5600            0.4360

  8. El programa imprime las soluciones de las ecuaciones:

     La Solucion es la Siguiente:
     x0 = 0.4000
     x1 = 0.5600
     x2 = 0.4360

  9. Finalmente el progama le pregunta al usuario si desea cotinuar en el programa o no, escribiendo ¨S¨, en caso de que sí y ¨N¨, en caso de que no. 
  Fin del pograma.  
