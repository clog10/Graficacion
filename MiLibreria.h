

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
lista lista_de_coordenadas(int x0, int y0,int x1, int y1);
int eliminar_elemento(lista* L);
void dibujar_matriz(lista lista_de_coordenadas);





void insertarAlFrente(lista *L, int n)  {
	lista aux = malloc(sizeof(nodoL));//crear un nuevo nodo
	aux ->info = n; 
	aux->siguiente=*L;
	*L=aux;
}
int mostrar(nodoL* L){
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

int lista_vacia(nodoL *milista){
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


int eliminar_elemento(lista* L){
	lista aux = *L;
	int numero=0;  
	numero = (aux)->info;
	(*L) = (aux)->siguiente;
	free(aux); 
	return numero; 
}


lista lista_de_coordenadas(int x0, int y0, int x1,int y1){
	lista lista_coordenadas = NULL;
	int dY,dX,pK;
	int i=0;
	
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
	return lista_coordenadas;
} 

void dibujar_matriz(lista lista_de_coordenadas) { 
	int i,j; 
	int h=0,k=0;
	int puntox,puntoy;
	int matriz [11][11];
	int matriz2 [11][11];  
	
	
	for (i = 0; i < 11; i++){ 
		for (j = 0; j < 11; j++){
			matriz[i][j] = 0;
		}  
	}
	
	do{
		puntoy  = eliminar_elemento(&lista_de_coordenadas);
		puntox = eliminar_elemento(&lista_de_coordenadas);
		 
		printf("punto x: %d",puntox); 
		printf(" punto y: %d\n",puntoy);
		for (i = 0; i < 11 ; i++){
			if (i==puntox){
				for (j = 0; j < 11; j++){
					if (j==puntoy) {
						matriz[i][j]=1; 
					}
				}  
			}
		}
		 
	} while (lista_de_coordenadas != NULL); 
	//de arriba hacia abajo
	printf("\nDe arriba hacia abajo\n");
	for (i = 0; i < 11; i++){  
		printf("\n");
		for (j = 0; j < 11; j++) {	
			printf("%d ",matriz[i][j]);
		}  
	}
	//de abajo hacia arriba
	printf("\n\nDe abajo hacia arriba\n");
	for (i = 10; i >= 0; i--){  
		printf("\n");
		for (j = 0; j < 11; j++){	
			printf("%d ",matriz[i][j]);
		}  
	}	
	//copiar matriz a matriz2
	for (i = 0; i < 11; i++){  
		for (j = 10; j >= 0; j--) {	
			matriz2[h][k]=	matriz[i][j];
			h++;
		} 
		h=0; 
		k++;
	}
	//imprimir matriz2
	//de izquierda a derecha
	printf("\n\nDe izquierda a derecha\n");
	for (h = 0; h < 11; h++){  
		printf("\n");
		for (k = 0; k < 11; k++) {	 
			printf("%d ",matriz2[h][k]);
		}  
	}
	//de derecha a izquierda
	printf("\n\nDe derecha a izquierda\n");
	for (h = 0; h < 11; h++){  
		printf("\n");
		for (k = 10; k >= 0; k--) {	 
			printf("%d ",matriz2[h][k]);
		}  
	}	 
} 
#endif 


