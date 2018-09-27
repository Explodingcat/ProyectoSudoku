# ProyectoSudoku
Proyecto final paralelas sudoku

# 27/09/18 
Entrega 

# Para COMPILAR por consola
paralelo:  
mpic++ sudoku_paralelo.cpp -o "nombre_ejecutable"

secuencial:
g++ Sudoku_Secuencial.cpp -o "nombre_ejecutable"

# Para EJECUTAR por consola
paralelo:  
mpirun -np "numero procesadores" ./"nombre_ejecutable" "sudoku_ejemplo"

secuencial:
./"nombre_ejecutable" "sudoku_ejemplo"

NORMAL 2
"[0;2;8][0;4;5][0;6;9][0;7;7][1;5;3][1;8;2][2;1;5][2;4;7][2;5;6][2;7;3][2;8;8][3;0;8][4;0;1][4;1;9][4;3;5][4;4;8][4;5;7][4;7;2][4;8;4][5;8;7][6;0;2][6;1;8][6;3;7][6;4;6][6;7;9][7;0;5][7;3;4][8;1;6][8;2;7][8;4;3][8;6;2]"


EXTREMO 1
"[0;0;6][0;1;9][0;2;4][0;7;1][1;1;2][1;4;7][1;6;9][2;6;2][2;7;5][3;6;4][3;7;8][4;0;4][4;2;1][4;6;5][4;7;2][5;5;8][5;8;3][6;0;9][6;3;4][7;1;6][7;3;7][7;5;5][8;2;3][8;4;8]"


NORMAL 1
"[0;1;8][0;4;4][1;5;3][1;6;9][2;0;3][2;1;7][2;2;9][2;6;5][3;1;5][3;2;6][3;4;2][3;5;1][3;8;9][4;0;2][4;1;9][4;5;7][4;6;8][4;7;1][5;1;1][5;4;5][5;6;2][5;8;4][6;7;9][7;0;8][7;4;9][7;5;4][7;6;7][7;8;2][8;4;1][8;5;5][8;7;8]"


EXTREMO 2
"[0;5;4][0;6;5][1;0;6][1;2;4][1;3;7][1;7;9][2;1;1][2;5;8][2;7;4][3;3;5][3;4;9][4;1;5][4;6;9][4;7;3][4;8;8][5;2;7][6;5;2][6;6;3][7;0;1][7;3;4][7;7;5][7;8;6][8;0;7][8;2;6]"
