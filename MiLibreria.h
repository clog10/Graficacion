

/* 
 * File:   LiLibreria.h
 * Author: Clog_10
 *
 * Created on 22 de septiembre de 2019, 01:21 PM
 */

#ifndef MILIBRERIA_H
#define MILIBRERIA_H

typedef struct Nodo
{
	int info;
	struct Nodo *siguiente;
} nodoL; 

typedef nodoL* lista;    

void insertarAlFrente(lista *L, int n); //inserta el valor n al frente de la lista
int mostrar(nodoL* L);//muestra por pantalla los valores de L, en forma recursiva
//void borrar(lista *L, int n);//borra un elemento de la lista
lista lista_de_coordenadas(int x0, int y0,int x1, int y1);
int eliminar_elemento(lista* L);
//void dibujar_matriz();
void dibujar_matriz(lista lista_de_coordenadas);



/*
int main() 
{   //se declara y asigna una 1ra variable para controlar  la opción seleccionada en el menú
	int op=-1;
	//se declara una lista
	lista milista=NULL; 
	//mientras op sea distinto de 0 (cuando es op=0 finaliza el programa)
	while (op)
	{
	 system("cls"); //borrar la pantalla
	 //mostrar en pantalla las opciones del menú 
	 printf("\t\tEjemplo con listas\n\n\tSeleccione una opción\n\n\t-1. Agregar elemento al frente\n\t-2. Mostrar lista\n\t-3. Borrar un elemento\n\t-4. Salir\n");
	 scanf_s("%d", &op);//captura el número de opción seleccionado
	 switch (op)//ir a la opción indicada por le usuario
	 {
		 //ingresar un valor al comienzo de la lista
	 case 1:
		 { 
			 int numNuevo;//crear una variable para el numero a insertar en la lista
			 system("cls");//borra la pantalla
			 printf("Ingrese el número para agregar a la lista:\n");//pedir por pantalla un numero para insertar en la lista
			 scanf_s("%d", &numNuevo);//capturar el numero a insertar en la lista
			 //system("cls"); 
			 insertarAlFrente(&milista, numNuevo);//llamara al procedimiento que inserta un numero al comienzo de la lista
			 getchar(); //esperar a que el usuario presione una tecla
			 break;
		 }
		 //mostrar la lista por pantalla
	 case 2:
		 {
		
			 int i ;
			  system("cls");
			  //mostrar en pantalla un titulo
			  printf("Los números cargados en la lista:\n\n");
			  //declarar una variable y asignarle el valor devuelto por la función
			  i = mostrar(milista);
			  //revisar si la lista esta vacía y mostrar en pantalla el texto que corresponda
			  if(i==0) 
			  {
				  printf("La lista está vacía \n\n"); 
			      getchar(); 
				
			  }else{ 
				  printf("# \n\n");
				  getchar();
			  }
			//  getchar();//esperar a que el usuario presione una tecla
			  
			  break;
			 
		 }
		 //eliminar un número de la lista
	 case 3:
		 {
			 /*
			 char *n; //crear una variable que almacene el número a borrar de la lista
			 system("cls");
			 printf("elemento borrado de la lista\n");
			 scanf("%d", &n);
			 //system("cls");
			 borrar(&milista,n);
			 printf("elemento borrado de la lista\n");
			 getchar();
			 break;
			 */
/*
		     system("cls");
			// printf("elemento borrado de la lista\n");
			// scanf("%d", &n);
			 //system("cls");
			 //eliminar_elemento(&milista);
			 printf("elemento borrado de la lista: %d \n",eliminar_elemento(&milista));
			 getchar();
			 getchar();
			 break;

		 }
	
	 default:
		 break;

	 }
	}
	return 0;
}
*/

void insertarAlFrente(lista *L, int n)  
{
	lista aux = malloc(sizeof(nodoL));//crear un nuevo nodo
	aux ->info = n; 
	aux->siguiente=*L;
	*L=aux;
	//printf("se agrego el %d a la lista\n",n);
	//getchar();

}
int mostrar(nodoL* L)
{
	int i=0;
	if (L!=NULL)
	{
		i=1;
		printf("	|%d|->",L->info);
		mostrar(L->siguiente);
		getchar();
	}
	return i;
} 

int lista_vacia(nodoL *milista)
{
	int i = mostrar(milista); 
			  //revisar si la lista esta vacía y mostrar en pantalla el texto que corresponda
			  if(i==0) 
			  {
				  printf("La lista está vacía \n\n"); 
			      getchar(); 
				
			  }else{ 
				//  printf("# \n\n");
				  //getchar();
			  }
   return i;
}
/*
void borrar(lista* L,int n)
{
	lista aux= *L;
	(*L) = (*L)->siguiente;
	free(aux);
} 
*/
/*
boolean lista_esta_vacia(lista* L) { 
	boolean bandera=false;
	if (L=NULL)
	{
		bandera = true;
		return bandera;
	}else{
			return bandera;
	}
}
*/

int eliminar_elemento(lista* L)
{
	lista aux = *L;
	int numero=0;  
	numero = (aux)->info;
	(*L) = (aux)->siguiente;
	free(aux); 
	return numero; 
}
 /*
lista *extraer_elemento_desde_inicio(lista *pl) { 
	nodoL *pn=NULL;//Nodo *pn= NULL; 
	int elemento=0;//Elemento *pe = NULL;
	if (!pl || lista_esta_vacia(pl) == TRUE) { 
		return NULL; 
	}
	pn = first(pl); 
	pe = elemento_copiar(info(pn)); 
	if (!pe) { 
		return NULL; 
	}
	first(pl) = next(pn); 
	nodo_liberar(pn);
	return pe;
}
*/

lista lista_de_coordenadas(int x0, int y0, int x1,int y1){
	lista lista_coordenadas = NULL;
	//char *coordenadas;
	//int x0, x1, y0, y1;
	int dY,dX,pK;
	int i=0;

	
	
	/*x0 = 0;
	y0 = 0;
	x1 = 10;
	y1 = 3;
	*/
	/*
	printf("Introduzca el punto x0 ");
	scanf("%d", &x0);
	printf("Introduzca el punto y0 ");
	scanf("%d", &y0);
	printf("Introduzca el punto x1 ");
	scanf("%d", &x1);
	printf("Introduzca el punto y1 ");
	scanf("%d", &y1);
	*/
	
	dY = y1 - y0;
	dX = x1 - x0;
	pK = (2 * dY) - dX;

	printf("|	K	|	P	|	xK	|	yK	|");
	printf("\n|		|		|		|		|");
	printf("\n|	%d	|	%d	|	%d	|	%d	|",i, pK, x0, y0);

	
	insertarAlFrente(&lista_coordenadas,x0); 
	insertarAlFrente(&lista_coordenadas,y0); 
	i++;

	for(i;x0 != x1 && y0 != y1 ; i++){
		if (pK < 0) {
			x0 += 1;
			pK = pK + (2 * dY);
		
		}else{
			
			x0 += 1; 
			y0 += 1;
			pK = pK + ((2 * dY) - (2 * dX));
			
		}
	printf("\n|	%d	|	%d	|	%d	|	%d	|",i, pK, x0, y0);

	insertarAlFrente(&lista_coordenadas,x0); 
    insertarAlFrente(&lista_coordenadas,y0); 
	}

	if (pK < 0) {
			x0 += 1;
			pK = pK + (2 * dY);
		
	}else{
			
			x0 += 1;
			y0 += 1;   
			pK = pK + ((2 * dY) - (2 * dX));
			  
	}
	printf("\n|	%d	|	%d	|	%d	|	%d	|",i, pK, x0, y0);
	printf("\n\n"); 
	insertarAlFrente(&lista_coordenadas,x0); 
	insertarAlFrente(&lista_coordenadas,y0); 
	//mostrar(lista_coordenadas);
	//getchar();
	//getchar();
	return lista_coordenadas;
} 

void dibujar_matriz(lista lista_de_coordenadas) 
{ 
	int i,j; 
	int h=0,k=0;
	int puntox,puntoy;
	int matriz [11][11];
	int matriz2 [11][11];  
	
	
	for (i = 0; i < 11; i++)
	{ 
		for (j = 0; j < 11; j++)
		{
			matriz[i][j] = 0;
		}  
	}
	
	do
	{
		puntoy  = eliminar_elemento(&lista_de_coordenadas);
		puntox = eliminar_elemento(&lista_de_coordenadas);
		 
		printf("punto x: %d",puntox); 
		printf(" punto y: %d\n",puntoy);
		for (i = 0; i < 11 ; i++)
		{
			if (i==puntox)
			{
				for (j = 0; j < 11; j++)
				{
					if (j==puntoy) 
					{
						matriz[i][j]=1; 
					}
				}  
			}
		}
		 
	} while (lista_de_coordenadas != NULL); 
	//de arriba hacia abajo
	printf("\nDe arriba hacia abajo\n");
	for (i = 0; i < 11; i++)
	{  
		printf("\n");
		for (j = 0; j < 11; j++) 
		{	
			printf("%d ",matriz[i][j]);
		}  
	}
	//de abajo hacia arriba
	printf("\n\nDe abajo hacia arriba\n");
	for (i = 10; i >= 0; i--)
	{  
		printf("\n");
		for (j = 0; j < 11; j++)  
		{	
			printf("%d ",matriz[i][j]);
		}  
	}	
	//copiar matriz a matriz2
	for (i = 0; i < 11; i++)
	{  
		for (j = 10; j >= 0; j--) 
		{	
			matriz2[h][k]=	matriz[i][j];
			h++;
		} 
		h=0; 
		k++;
	}
	//imprimir matriz2
	//de izquierda a derecha
	printf("\n\nDe izquierda a derecha\n");
	for (h = 0; h < 11; h++)
	{  
		printf("\n");
		for (k = 0; k < 11; k++) 
		{	 
			printf("%d ",matriz2[h][k]);
		}  
	}
	//de derecha a izquierda
	printf("\n\nDe derecha a izquierda\n");
	for (h = 0; h < 11; h++)
	{  
		printf("\n");
		for (k = 10; k >= 0; k--) 
		{	 
			printf("%d ",matriz2[h][k]);
		}  
	}	 
} 
#endif 

