#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>


using namespace std;

void llenar_Matriz(int tablero[][9], char *datos,int posibles[][9][9])
{
    int hola, numeros[3],cont=-1;;
    string cadena=datos;
    char s;

     for(int i=0;i<9;i++)
     {
         for(int j=0;j<9;j++)
         {
             tablero[i][j]=0;
             for(int k=0;k<9;k++)
             {
             	posibles[i][j][k]=0;
             }
          }
      }
    
     for(int i=0;i<cadena.length();i++)
     {
         s=cadena[i];
         hola=s;
         if(hola>47 && hola<58)
         {
             numeros[++cont]=hola-48;
         }
         if(cont==2)
         {
             tablero[numeros[0]][numeros[1]]=numeros[2];
             cont=-1;
         }
     
     }
}

int comprobar_Datos(char *datos)
{
    int dato=1,hola,chao=0,numeros[3],cont=-1;
    char s;
    string cadena=datos;
    for(int i=0;i<cadena.length();i++)
     {
         s=cadena[i];
         hola=s;
         if(hola>47 && hola<58 || hola==91 || hola==93 || hola==59)
         {
            if((chao>47 && chao<58) && (hola>47 && hola<58))
            {
                i=cadena.length();
                dato=0;
            }
            chao=hola;
         }
         else
         {
            i=cadena.length();
            dato=0;
         }
     
     }

     if(dato==1)
     {
        for(int i=0;i<cadena.length();i++)
        {
             s=cadena[i];
             hola=s;
             if(hola>47 && hola<58)
             {
                 numeros[++cont]=hola-48;
             }
             if(cont==2)
             {
                 cont=-1;
                 if(numeros[0]>-1 && numeros[0]<9 && numeros[1]>-1 && numeros[1]<9 && numeros[2]>0 && numeros[2]<10)
                 {

                 }
                 else
                 {
                    i=cadena.length();
                    dato=0;
                 }
             }
     
        }
     }
     return dato;
}

void mostrar_Matriz(int tablero[][9])
{
    for(int i=0;i<9;i++)
    {
        if(i%3==0)
        {
            cout<<"--------------------"<<endl;
        }
        for(int j=0;j<9;j++)
        {
            if(j%3==0)
            {
                cout<<"|";
            }
            cout<<tablero[i][j]<<" ";

        }
        cout<<endl;
    }
}

int RevisarFila(int fila, int valor, int tablero[][9])
{
    int ver=0;
    if((valor>0 && valor<10) && (fila>=0 && fila<=8))
    {
    	ver=1;
	    for(int i=0;i<9;i++)
	    {
	        if(tablero[fila][i]==valor)
	        {
	            ver=0;
	            i=9;
	        }
	    }
	}
    return ver;
}

int RevisarColumna(int columna, int valor, int tablero[][9])
{
    int ver=0;
    if((valor>0 && valor<10) && (columna>=0 && columna<=8))
    {
    	ver=1;
	    for(int i=0;i<9;i++)
	    {
	        if(tablero[i][columna]==valor)
	        {
	            ver=0;
	            i=9;
	        }
	    }
	}
    return ver;
}

int RevisarSubmatriz(int subMatriz, int valor, int tablero[][9])
{
    int ver=0;
    if(valor>0 && valor<10)
    {
    	ver=1;
	    if(subMatriz==1)
	    {
	        for(int i=0;i<3;i++)
	        {
	            for(int j=0;j<3;j++)
	            {
	                if(tablero[i][j]==valor)
	                {
	                    ver=0;
	                    i=9;
	                    j=9;
	                }
	            }
	        }
	    }
	    else
	    {
	        if(subMatriz==2)
	        {
	            for(int i=0;i<3;i++)
	            {
	                for(int j=3;j<6;j++)
	                {
	                    if(tablero[i][j]==valor)
	                    {
	                        ver=0;
	                        i=9;
	                        j=9;
	                    }
	                }
	            }
	        }
	        else
	        {
	            if(subMatriz==3)
	            {
	                for(int i=0;i<3;i++)
	               {
	                    for(int j=6;j<9;j++)
	                    {
	                        if(tablero[i][j]==valor)
	                        {
	                            ver=0;
	                            i=9;
	                            j=9;
	                        }
	                    }
	                }
	            }
	            else
	            {
	                if(subMatriz==4)
	                {
	                    for(int i=3;i<6;i++)
	                    {
	                        for(int j=0;j<3;j++)
	                        {
	                            if(tablero[i][j]==valor)
	                            {
	                                ver=0;
	                                i=9;
	                                j=9;
	                            }
	                        }
	                    }
	                }
	                else
	                {
	                    if(subMatriz==5)
	                    {
	                        for(int i=3;i<6;i++)
	                        {
	                            for(int j=3;j<6;j++)
	                            {
	                                if(tablero[i][j]==valor)
	                                {
	                                    ver=0;
	                                    i=9;
	                                    j=9;
	                                }
	                            }
	                        }
	                    }
	                    else
	                    {
	                        if(subMatriz==6)
	                        {
	                            for(int i=3;i<6;i++)
	                            {
	                                for(int j=6;j<9;j++)
	                                {
	                                    if(tablero[i][j]==valor)
	                                    {
	                                        ver=0;
	                                        i=9;
	                                        j=9;
	                                    }
	                                }
	                            }
	                        }
	                        else
	                        {
	                            if(subMatriz==7)
	                            {
	                                for(int i=6;i<9;i++)
	                                {
	                                    for(int j=0;j<3;j++)
	                                    {
	                                        if(tablero[i][j]==valor)
	                                        {
	                                            ver=0;
	                                            i=9;
	                                            j=9;
	                                        }
	                                    }
	                                }
	                            }
	                            else
	                            {
	                                if(subMatriz==8)
	                                {
	                                    for(int i=6;i<9;i++)
	                                    {
	                                        for(int j=3;j<6;j++)
	                                        {
	                                            if(tablero[i][j]==valor)
	                                            {
	                                                ver=0;
	                                                i=9;
	                                                j=9;
	                                            }
	                                        }
	                                    }
	                                }
	                                else
	                                {
	                                    if(subMatriz==9)
	                                    {
	                                        for(int i=6;i<9;i++)
	                                        {
	                                            for(int j=6;j<9;j++)
	                                            {
	                                                if(tablero[i][j]==valor)
	                                                {
	                                                    ver=0;
	                                                    i=9;
	                                                    j=9;
	                                                }
	                                            }
	                                        }
	                                    }
	                                }
	                            }
	                        }
	                    }
	                }
	            }
	        }
	    }
	}
    return ver;
}

void buscar_Opciones(int tablero[][9], int posibles[][9][9])
{
	for(int i=0; i<9;i++)
	{
		for(int j =0; j<9;j++)
		{
			for(int v=1; v<10; v++)
			{
				if(RevisarColumna(j,v,tablero)==1 && RevisarFila(i,v,tablero)==1 && tablero[i][j]==0)
				{
					if(i>=0 && i<3 && j>=0 && j<3)
					{
						if(RevisarSubmatriz(1,v,tablero)==1)
						{
							for(int p=0;p<9;p++)
							{
								if(posibles[i][j][p]==0)
								{
									posibles[i][j][p]=v;
									p=9;
								}
							}
						}
					}
					else
					{
						if(i>=0 && i<3 && j>=3 && j<6)
						{
							if(RevisarSubmatriz(2,v,tablero)==1)
							{
								for(int p=0;p<9;p++)
								{
									if(posibles[i][j][p]==0)
									{
										posibles[i][j][p]=v;
										p=9;
									}
								}
							}
						}
						else
						{
							if(i>=0 && i<3 && j>=6 && j<9)
							{
								if(RevisarSubmatriz(3,v,tablero)==1)
								{
									for(int p=0;p<9;p++)
									{
										if(posibles[i][j][p]==0)
										{
											posibles[i][j][p]=v;
											p=9;
										}
									}
								}
							}
							else
							{
								if(i>=3 && i<6 && j>=0 && j<3)
								{
									if(RevisarSubmatriz(4,v,tablero)==1)
							        {
										for(int p=0;p<9;p++)
										{
											if(posibles[i][j][p]==0)
											{
												posibles[i][j][p]=v;
												p=9;
											}
										}
									}
								}
								else
								{
									if(i>=3 && i<6 && j>=3 && j<6)
									{
										if(RevisarSubmatriz(5,v,tablero)==1)
										{
											for(int p=0;p<9;p++)
											{
												if(posibles[i][j][p]==0)
												{
													posibles[i][j][p]=v;
													p=9;
												}
											}
										}
									}
									else
									{
										if(i>=3 && i<6 && j>=6 && j<9)
										{
											if(RevisarSubmatriz(6,v,tablero)==1)
											{											
												for(int p=0;p<9;p++)
												{
													if(posibles[i][j][p]==0)
													{
														posibles[i][j][p]=v;
														p=9;
													}
												}
											}
										}
										else
										{
											if(i>=6 && i<9 && j>=0 && j<3)
											{
												if(RevisarSubmatriz(7,v,tablero)==1)
												{
													for(int p=0;p<9;p++)
													{
														if(posibles[i][j][p]==0)
														{
															posibles[i][j][p]=v;
															p=9;
														}
													}
												}
											}
											else
											{
												if(i>=6 && i<9 && j>=3 && j<6)
												{
													if(RevisarSubmatriz(8,v,tablero)==1)
													{
														for(int p=0;p<9;p++)
														{
															if(posibles[i][j][p]==0)
															{
																posibles[i][j][p]=v;
																p=9;
															}
														}
													}
												}
												else
												{
													if(RevisarSubmatriz(9,v,tablero)==1)
							  						{
														for(int p=0;p<9;p++)
														{
															if(posibles[i][j][p]==0)
															{
																posibles[i][j][p]=v;
																p=9;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
void ver_Matriz(int tablero[][9])
{
	int ver=0;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(tablero[i][j]==0)
			{
				ver=1;
				i=9;
				j=9;
			}
		}
	}
	if(ver==0)
	{
		mostrar_Matriz(tablero);
	}
}
void buscar_Solucion(int tableroaux[][9], int posibles[][9][9], int fila,int columna)
{
	int cont=0;
	int tablero[9][9];
	if(columna>8 && (fila+1)>8)
	{
		mostrar_Matriz(tableroaux);
	}
	else
	{
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				tablero[i][j]=tableroaux[i][j];
			}
		}

		if(columna>8)
		{
			fila++;
			columna=0;
		}
		for(int i=fila;i<9;i++)
		{

			for(int j=columna;j<9;j++)
			{
				if(tablero[i][j]==0)
				{
					while(posibles[i][j][cont]!=0 && cont<9)
					{
						if(RevisarColumna(j,posibles[i][j][cont],tablero)==1 && RevisarFila(i,posibles[i][j][cont],tablero)==1)
						{
							if(i>=0 && i<3 && j>=0 && j<3)
							{
								if(RevisarSubmatriz(1,posibles[i][j][cont],tablero)==1)
								{
									tablero[i][j]=posibles[i][j][cont];
									buscar_Solucion(tablero,posibles,i,j+1);
								}
							}
							else
							{
								if(i>=0 && i<3 && j>=3 && j<6)
								{
									if(RevisarSubmatriz(2,posibles[i][j][cont],tablero)==1)
									{
										tablero[i][j]=posibles[i][j][cont];
										buscar_Solucion(tablero,posibles,i,j+1);
									}
								}
								else
								{
									if(i>=0 && i<3 && j>=6 && j<9)
									{
										if(RevisarSubmatriz(3,posibles[i][j][cont],tablero)==1)
										{
											tablero[i][j]=posibles[i][j][cont];
											buscar_Solucion(tablero,posibles,i,j+1);
										}
									}
									else
									{
										if(i>=3 && i<6 && j>=0 && j<3)
										{
											if(RevisarSubmatriz(4,posibles[i][j][cont],tablero)==1)
									        {
												tablero[i][j]=posibles[i][j][cont];
												buscar_Solucion(tablero,posibles,i,j+1);
											}
										}
										else
										{
											if(i>=3 && i<6 && j>=3 && j<6)
											{
												if(RevisarSubmatriz(5,posibles[i][j][cont],tablero)==1)
												{
													tablero[i][j]=posibles[i][j][cont];
													buscar_Solucion(tablero,posibles,i,j+1);
												}
											}
											else
											{
												if(i>=3 && i<6 && j>=6 && j<9)
												{
													if(RevisarSubmatriz(6,posibles[i][j][cont],tablero)==1)
													{
														tablero[i][j]=posibles[i][j][cont];
														buscar_Solucion(tablero,posibles,i,j+1);
													}
												}
												else
												{
													if(i>=6 && i<9 && j>=0 && j<3)
													{
														if(RevisarSubmatriz(7,posibles[i][j][cont],tablero)==1)
														{
															tablero[i][j]=posibles[i][j][cont];
															buscar_Solucion(tablero,posibles,i,j+1);
														}
													}
													else
													{
														if(i>=6 && i<9 && j>=3 && j<6)
														{
															if(RevisarSubmatriz(8,posibles[i][j][cont],tablero)==1)
															{
																tablero[i][j]=posibles[i][j][cont];
																buscar_Solucion(tablero,posibles,i,j+1);
															}
														}
														else
														{
															if(RevisarSubmatriz(9,posibles[i][j][cont],tablero)==1)
									  						{
																tablero[i][j]=posibles[i][j][cont];
																buscar_Solucion(tablero,posibles,i,j+1);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}

						cont++;
						for(int f=0;f<9;f++)
						{
							for(int d=0;d<9;d++)
							{
								tablero[f][d]=tableroaux[f][d];
							}
						}
					}
					i=9;
					j=9;
				}
				else
				{
					if(i==8 && j==8)
					{
						mostrar_Matriz(tablero);
					}
				}
			}
			columna=0;
		}
	}
}

void resolver_Sudoku(int tablero[][9],int posibles[][9][9])
{
	int tableroaux[9][9];
	int t,y,mayor=0,conta=0;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			for(int p=0;p<9;p++)
			{
				if(posibles[i][j][p]!=0)
				{
					conta++;
				}
			}
			if(conta>mayor)
			{
				t=i;
				y=j;
				mayor=conta;
			}
			conta=0;
		}
	}

	for(int i=0;i<9;i++)
	{
		if(posibles[t][y][i]!=0)
		{
			for(int i=0;i<9;i++)
			{
				for(int j=0;j<9;j++)
				{
					tableroaux[i][j]=tablero[i][j];
				}
			}
			tableroaux[t][y]=posibles[t][y][i];
			//cout<<".......................................................................INICIAL CON "<<posibles[t][y][i]<<endl;
			buscar_Solucion(tableroaux,posibles,0,0);
		}
	}
}

void mostrar_Posibles(int posibles[][9][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			for(int p=0;p<9;p++)
			{
				cout<<posibles[i][j][p];
			}
			cout<<endl;
		}
	}
}

int main(int argc, char* argv[])
{

    int  tablero[9][9], posibles[9][9][9];
    if(argc<2)
    {
        cout<<"Ingresa los datos"<<endl;
    }
    else
    {
        if(comprobar_Datos(argv[1])==1)
        {
            llenar_Matriz(tablero,argv[1],posibles);
            mostrar_Matriz(tablero);
            buscar_Opciones(tablero,posibles);
            cout<<endl;
            resolver_Sudoku(tablero,posibles);
            
        }
        else
        {
            cout<<"Datos ingresados erroneos"<<endl;
        }
    }
    return 0;
}