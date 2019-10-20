#include<graphics.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
// #include <iostrim.h>
#define ARRIBA 72
#define IZQUIERDA 75
#define ABAJO 80
#define DERECHA 77


void linean(int x1, int y1, int x2, int y2,int color)
{

	int xf, xi, yf, yi,aux,opc,p,a,b;
	int dx = x2-x1;
	int dy = y2-y1;
	if((dx*dy) < 0){aux = -1;}
	else{ aux = 1; }
	//pil.push(x1);
	//pil.push(y1);
        printf("sxc %d \t",x1);
        printf("sxc %d \n",y1);
        putpixel(x1,y1,color);

	if((dx < 0 && dy < 0) || (dx < 0 && dy > 0))
	{   xf = x1; xi = x2;
	    yf = y1; yi = y2;
	}else{
		xf = x2; xi = x1;
		yf = y2; yi = y1;}
	dx = abs(dx);
	dy = abs(dy);
	if(dy > dx)
	{ 	a = 2*dx;	b = 2*(dx-dy);
		opc = 2;    p = 2*dx - dy;
	}else{
		a = 2*dy;   b = 2*(dy-dx);
		opc = 1;	p = 2*dy - dx;
	}

	if(opc == 1){
		while(xi < xf){
			if(p<0){
				xi++; p+=a;
			}else{
				xi++; p+=b;
				yi+=aux;
			}
        printf("sxc %d \t",xi);
        printf("sxc %d \n",yi);
         putpixel(xi,yi,color);
			//pil.push(xi);
			//pil.push(yi);
		}
	}else{
		while(yi < yf)	{
			if(p<0){
				yi+=aux; p+=a;
			}else{
				xi++; p+=b;
				yi+=aux;
			}
        printf("sxc %d \t",xi);
        printf("sxc %d \n",yi);
        putpixel(xi,yi,color);
			//pil.push(xi);
			//pil.push(yi);
		}
	}
}

void tras(int x1, int y1, int x2, int y2)
{
	

int trasx=1,trasy=1;


x1=x1+trasx;
y1=y1+trasy;
x2=x2+trasx;
y2=y2+trasy;

	int xf, xi, yf, yi,aux,opc,p,a,b;
	int dx = x2-x1;
	int dy = y2-y1;
	if((dx*dy) < 0){aux = -1;}
	else{ aux = 1; }
	//pil.push(x1);
	//pil.push(y1);
        printf("sxc %d \t",x1);
        printf("sxc %d \n",y1);
        putpixel(x1,y1,RED);

	if((dx < 0 && dy < 0) || (dx < 0 && dy > 0))
	{   xf = x1; xi = x2;
	    yf = y1; yi = y2;
	}else{
		xf = x2; xi = x1;
		yf = y2; yi = y1;}
	dx = abs(dx);
	dy = abs(dy);
	if(dy > dx)
	{ 	a = 2*dx;	b = 2*(dx-dy);
		opc = 2;    p = 2*dx - dy;
	}else{
		a = 2*dy;   b = 2*(dy-dx);
		opc = 1;	p = 2*dy - dx;
	}

	if(opc == 1){
		while(xi < xf){
			if(p<0){
				xi++; p+=a;
			}else{
				xi++; p+=b;
				yi+=aux;
			}
        printf("sxc %d \t",xi);
        printf("sxc %d \n",yi);
         putpixel(xi,yi,RED);
			//pil.push(xi);
			//pil.push(yi);
		}
	}else{
		while(yi < yf)	{
			if(p<0){
				yi+=aux; p+=a;
			}else{
				xi++; p+=b;
				yi+=aux;
			}
        printf("sxc %d \t",xi);
        printf("sxc %d \n",yi);
        putpixel(xi,yi,RED);
			//pil.push(xi);
			//pil.push(yi);
		}
	}
}


void gotoxy(int x, int y)
{
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X= x;
	dwPos.Y= y;
	SetConsoleCursorPosition(hCon,dwPos);

}
void rectangulo(int x,int y,int c)
{
	setcolor(c);
//	setfillstyle(SOLID_FILL, BROWN);
	rectangle(x,y,x+45,y+15);
	rectangle(x+25,y-10,x+35,y+25);//20//******
	rectangle(x-25,y+3,x,y+10);//************
	rectangle(x-15,y-5,x-5,y+20);//10 25******************
	rectangle(x-25,y+20,x,y+25);//3//************
	rectangle(x-25,y-5,x,y-10);//3
	rectangle(x+15,y-10,x+45,y-15);///70
	rectangle(x+15,y+25,x+45,y+30);
	
	
/*	rectangle(x,y,x+45,y+15);
	rectangle(x+10,y-10,x+20,y+25);//20
	rectangle(x+45,y+3,x+70,y+10);
	rectangle(x+50,y-5,x+60,y+20);//10 25
	rectangle(x+45,y+20,x+70,y+25);//3
	rectangle(x+45,y-5,x+70,y-10);//3
	rectangle(x,y-10,x+30,y-15);///70
	rectangle(x,y+25,x+30,y+30);*/
	
	//setfillstyle(SOLID_FILL, BROWN);
//	floodfill(152, 182, WHITE);
	//floodfill(x,y,RED);
}
void original(int x,int y,int c)
{
	setcolor(c);
	
	rectangle(x,y,x+45,y+15);
	rectangle(x+10,y-10,x+20,y+25);//20
	rectangle(x+45,y+3,x+70,y+10);
	rectangle(x+50,y-5,x+60,y+20);//10 25
	rectangle(x+45,y+20,x+70,y+25);//3
	rectangle(x+45,y-5,x+70,y-10);//3
	rectangle(x,y-10,x+30,y-15);///70
	rectangle(x,y+25,x+30,y+30);

}

void rectanguloo(int x,int y)
{
	setcolor(0);
//	setfillstyle(SOLID_FILL, BROWN);
	rectangle(x,y,x+45,y+15);
	rectangle(x+10,y-10,x+20,y+25);//20
	rectangle(x+45,y+3,x+70,y+10);
	rectangle(x+50,y-5,x+60,y+20);//10 25
	rectangle(x+45,y+20,x+70,y+25);//3
	rectangle(x+45,y-5,x+70,y-10);//3
	rectangle(x,y-10,x+30,y-15);///70
	rectangle(x,y+25,x+30,y+30);
	
	//setfillstyle(SOLID_FILL, BROWN);
//	floodfill(152, 182, WHITE);
	//floodfill(x,y,RED);
}
void cuadro(int x,int y,int co)
{
	//line(100,200,100,215); //traza linea parra abajo izquierda}
	
	 linean(x,y,x,y+15,co);
	// line(100,200,145,200);
	 linean(x,y,x+45,y,co);
//	setcolor();
	//line(100,215,145,215);
	linean(x,y+15,x+45,y+15,co);
//	line(145,200,145,216); //abajo derecha
	linean(x+45,y,x+45,y+15,co);
	//rectangle(100,100,300,300);
	
	//------------------------------
	//line(100,200,100,215); //traza linea parra abajo izquierda}
	 tras(x,y,x,y+15);
	// line(100,200,145,200);
	 tras(x,y,x+45,y);
//	setcolor();
	//line(100,215,145,215);
	tras(x,y+15,x+45,y+15);
//	line(145,200,145,216); //abajo derecha
	tras(x+45,y,x+45,y+15);
	//rectangle(100,100,300,300);
	//------------------------------
}
void mover(int i)
{ int /*i=0,*/b=200,c=14;


//for(i;i<600;i++){
//rectangulo(i,b,0);
	 i++;
	 Sleep(20);
	 //b++;
	 //rectangulo(a,b,c);
	 if(i>600)
	 {
	 	i=100;
	 	b=200;
	 }
	 rectangulo(i,b,c);
	 //Sleep(20);
}//}v
void flechas()
{
	int x=200,y=300,c=14;
		if(kbhit())
		{
			
			char tecla=getch();
		//	gotoxy(x,y);
		    //rectangulo(x,y,c);
			rectanguloo(x,y);
			if(tecla== IZQUIERDA&&x>1)x--;
			if(tecla== DERECHA&&x+78<1000)x++;
			if(tecla== ARRIBA&&y>1)y--;
			if(tecla== ABAJO&&y+41<595)y++;
			//rectangulo(x,y,c);
			cuadro(x,y,5);
			//setcolor(1);


		}
}
void carriles()
{
		//Carriles
	setcolor(7);
	
	for(int i=180;i<185;i++){
		linean(0,i,350,i,7);
		linean(400,i,750,i,7);
		linean(800,i,1200,i,7);
	}
	for(int i=260;i<265;i++){
		linean(0,i,350,i,7);
		linean(400,i,750,i,7);
		linean(800,i,1200,i,7);
	}
	
	for(int i=340;i<345;i++){
		linean(0,i,350,i,7);
		linean(400,i,750,i,7);
		linean(800,i,1200,i,7);
	}
	for(int i=420;i<425;i++){
		line(0,i,350,i);
		linean(400,i,750,i,7);
		linean(800,i,1200,i,7);
	}

	for(int i=500;i<505;i++){
		linean(0,i,350,i,7);
		linean(400,i,750,i,7);
		linean(800,i,1200,i,7);
	}
}

void pasto()
{
		//Pasto superior
	setcolor(2);
	for(int i=56;i<100;i++){
		linean(0,i,350,i,2);
			linean(400,i,750,i,2);
		linean(800,i,1200,i,2);
	}
	
	//Pasto inferior
	for(int i=585;i<629;i++){
		linean(0,i,350,i,2);
			linean(400,i,750,i,2);
		linean(800,i,1200,i,2);
	}
	
	//Banner Azul
	setcolor(3);
	for(int i=630;i<700;i++){
		linean(0,i,1200,i,3);
			
	}
}

void coches(int i,int b)
{
	
	
	 rectangulo((i+100)+2,b+10,0);
	 rectangulo(i+100,b+10,RED);
	
         rectangulo((i+580)+2,(b-70),0);
	 	 rectangulo(i+580,b-70,BLUE);

	     rectangulo((i+180)+2,(b+170),0);
	 	 rectangulo(i+180,b+170,BLUE);
	 	
	 	 //------------------
	 	 rectangulo((i+480)+2,(b+100),0);
	 	 rectangulo(i+480,b+100,GREEN);
	 	
	 	 //}-----------------
	 	 
	 	 	 rectangulo((i+90)+2,(b+90),0);
	 	 rectangulo(i+90,b+90,YELLOW);
	 	 
	 	 
	 	 
	 	rectangulo((i+480)+2,(b+350),0);
	 	 rectangulo(i+480,b+350,BROWN);
	 	
	 	 
	 	 rectangulo((i+680)+2,(b+260),0);
	 	 rectangulo(i+680,b+260,11);
}
void coches2(int l,int b)
{
	
	
	 rectangulo(l+2,b+10,0);
	 rectangulo(l,b+10,RED);
	
         rectangulo((l+880)+2,(b-70),0);
	 	 rectangulo(l+880,b-70,7);

	     rectangulo((l+380)+2,(b+170),0);
	 	 rectangulo(l+380,b+170,8);
	 	
	 	 //------------------
	 	 rectangulo((l+780)+2,(b+100),0);
	 	 rectangulo(l+780,b+100,13);
	 	
	 	 //}-----------------
	 	 
	 	 	 rectangulo((l+120)+2,(b+90),0);
	 	 rectangulo(l+120,b+90,6);
	 	 
	 	 
	 	 
	 	rectangulo((l+580)+2,(b+350),0);
	 	 rectangulo(l+580,b+350,7);
	 	
	 	 
	 	 rectangulo((l+880)+2,(b+260),0);
	 	 rectangulo(l+880,b+260,14);
}

void coches3(int p,int b)
{

	 rectangulo((p+900)+2,b+10,0);
	 rectangulo((p+900),b+10,10);
	
         rectangulo((p+1880)+2,(b-70),0);
	 	 rectangulo(p+1880,b-70,1);

	     rectangulo((p+1380)+2,(b+170),0);
	 	 rectangulo(p+1380,b+170,3);
	 	
	 	 //------------------
	 	 rectangulo((p+1780)+2,(b+100),0);
	 	 rectangulo(p+1780,b+100,15);
	 	
	 	 //}-----------------
	 	 
	 	 	 rectangulo((p+1120)+2,(b+90),0);
	 	 rectangulo(p+1120,b+90,9);
	 	 
	 	 
	 	 
	 	rectangulo((p+1580)+2,(b+350),0);
	 	 rectangulo(p+1580,b+350,BROWN);
	 	
	 	 
	 	 rectangulo((p+880)+2,(b+260),0);
	 	 rectangulo(p+880,b+260,11);
}

int choqueX(int x)
{
//	printf("coor x %d \t",x);
	return x;
}

int choqueY(int y)
{
		//printf("coor y %d \n",y);
	return y;

}

int coi(int i)
{
printf("coor y %d \n",i);
return i;
}
int main()
{
	//---------------------------------
		initwindow(1200,700);
	
//	line(200,200,400,400);
//	circle(300,300,100);
	setcolor(12);//COLOR ROJO PARA EL TEXTO
    settextstyle(2,0,9);
	outtextxy(200,10,"Racing Car ");

/*	linean(0,50,1200,50,7);
	linean(0,51,1200,51,7);
	linean(0,52,1200,52,7);*///bvhgfhghj
	//Pasto superior
	setcolor(2);
	for(int i=56;i<100;i++){
		line(0,i,1200,i);
	}
	
	//Pasto inferior
	for(int i=585;i<629;i++){
		line(0,i,1200,i);
	}
	
	//Banner Azul
	setcolor(3);
	for(int i=630;i<700;i++){
		line(0,i,1200,i);
	}
	
	//Carriles
	setcolor(7);
	for(int i=180;i<185;i++){
		line(0,i,350,i);
		line(400,i,750,i);
		line(800,i,1200,i);
	}
	for(int i=260;i<265;i++){
		line(0,i,350,i);
		line(400,i,750,i);
		line(800,i,1200,i);
	}
	
	for(int i=340;i<345;i++){
		line(0,i,350,i);
		line(400,i,750,i);
		line(800,i,1200,i);
	}
	for(int i=420;i<425;i++){
		line(0,i,350,i);
		line(400,i,750,i);
		line(800,i,1200,i);
	}

	for(int i=500;i<505;i++){
		line(0,i,350,i);
		line(400,i,750,i);
		line(800,i,1200,i);
	}
	/*
	
	for(int i=180;i<185;i++){
		line(0,i,1200,i);
	}
	for(int i=260;i<265;i++){
		line(0,i,1200,i);
	}
	
	for(int i=340;i<345;i++){
		line(0,i,1200,i);
	}
	for(int i=420;i<425;i++){
		line(0,i,1200,i);
	}

	for(int i=500;i<505;i++){
		line(0,i,1200,i);
	}*/
	
	//pasto();
    //carriles();

	//Nombres
	setcolor(12);
    settextstyle(2,0,9);
	outtextxy(200,640,"Carlos ");
	outtextxy(800,640,"Edwin");
	
	//Puntuacion
	setcolor(5);
	outtextxy(600,10,"Puntuación: ");
	setcolor(1);
	outtextxy(850,10,"0...");
	//--------------------------------
	int x=200,y=300,c=14;
	int i=1000,b=200,l=1000,p=1500;//c=14;
	int a=100,m=200;
	//initwindow(1000,600);
	line(x+10,y-10,x+10,y+25);//20
	//mover();
	  /*a++;
	 //rectangulo(a,b,c);
	 if(a>1000)
	 {
	 	b=1;
	 }
	 cuadro(a,b);*/
	 //rectangulo(a,b,c);
	 //rectangulo(x,y,c);
	 setcolor(6);
	 //cuadro(400,500);
	//pintar(x,y+1,x+45,y);
		bool fin=false;
	while(!fin)
	{
	
	
	 /*rectangulo(i+2,b+10,0);
	 rectangulo(i,b+10,RED);
	
         rectangulo((i+580)+2,(b-70),0);
	 	 rectangulo(i+580,b-70,BLUE);

	     rectangulo((i+180)+2,(b+170),0);
	 	 rectangulo(i+180,b+170,BLUE);
	 	
	 	 //------------------
	 	 rectangulo((i+480)+2,(b+100),0);
	 	 rectangulo(i+480,b+100,GREEN);
	 	
	 	 //}-----------------
	 	 
	 	 	 rectangulo((i+90)+2,(b+90),0);
	 	 rectangulo(i+90,b+90,YELLOW);
	 	 
	 	 
	 	 
	 	rectangulo((i+480)+2,(b+350),0);
	 	 rectangulo(i+480,b+350,BROWN);
	 	
	 	 
	 	 rectangulo((i+680)+2,(b+260),0);
	 	 rectangulo(i+680,b+260,11);*/
	 	 
	     coches(i,b);
	     coches2(l,b);
	     coches3(i,b);
		i--;
        p--;
		l--;
	//	i++;
		Sleep(1);
		//int q;
		if (i<-2800)//&&l<700&&p<700)
		{ 
		
		i=1300;
		if(l<-3000){
		
		l=1500;
	    }
	    if(p<-1000){
		
	    p=1500;
	}
		//i=rand()%1000+300;
	//	b=rand()%500+100;
		}
		
		 if(i>=choqueX(x)&&i<=choqueX(x)+40&&b>=choqueY(y)&&b<=choqueY(y)+20)//&&l>=choqueX(x)&&l<=choqueX(x)+40&&p>=choqueX(x)&&p<=choqueX(x)+40)
             {
             	printf("valio riata");
             	original(200,300,RED);
             	fin=true;
			 }
	
	 
	
	/* if(i>1300)
	 {
	 	i=100;
	 	b=200;
	 }*/
	//rectangulo(i,b,0);
	 
	 if(kbhit())
		{
	    
			char tecla=getch();
		//	gotoxy(x,y);
		    //rectangulo(x,y,c);
			rectanguloo(x,y);
			if(tecla== IZQUIERDA&&x>1)
			x-=4;
		
			if(tecla== DERECHA&&x+78<1000)x+=4;//fin=true;}
			if(tecla== ARRIBA&&y>115)y-=4; //fin=true;
			if(tecla== ABAJO&&y+41<595)y+=4; //fin=true;
			original(x,y,c);
			//cuadro(x,y);
			//setcolor(1);
             //choqueX(x);
             choqueY(y);
             coi(i);
             
            

setcolor(7);
     /*   for(int i=180;i<185;i++){
		line(0,i,1200,i);
	}
	for(int i=260;i<265;i++){
		line(0,i,1200,i);
	}
	
	for(int i=340;i<345;i++){
		line(0,i,1200,i);
	}
	for(int i=420;i<425;i++){
		line(0,i,1200,i);
	}

	for(int i=500;i<505;i++){
		line(0,i,1200,i);
	}
	*/

	
	for(int i=180;i<185;i++){
		line(0,i,350,i);
		line(400,i,750,i);
		line(800,i,1200,i);
	}
	for(int i=260;i<265;i++){
		line(0,i,350,i);
		line(400,i,750,i);
		line(800,i,1200,i);
	}
	
	for(int i=340;i<345;i++){
		line(0,i,350,i);
		line(400,i,750,i);
		line(800,i,1200,i);
	}
	for(int i=420;i<425;i++){
		line(0,i,350,i);
		line(400,i,750,i);
		line(800,i,1200,i);
	}

	for(int i=500;i<505;i++){
		line(0,i,350,i);
		line(400,i,750,i);
		line(800,i,1200,i);
	}
		}
		
		
		
	
	}
	
	getch();
	return 0;
}


