

/* 
 * File:   LiLibreria.h
 * Author: Clog_10
 *
 * Created on 22 de septiembre de 2019, 01:21 PM
 */

#ifndef MILIBRERIA_H
#define MILIBRERIA_H
#include <list>

using namespace std;
std::list<int> Retorna;

std::list<int> Function(int x0,int x1,int y0,int y1) {
	std::list<int>::iterator it;
	
	int DeltaX;
	int DeltaY;
	int p0;

	DeltaX = x1 - x0;
	DeltaY = y1 - y0;
	p0 = (2 * y0) - x0;

	int x = 0;
	int contador = 0;
	while (x < DeltaX) {
		Retorna.push_back(contador);
		it = Retorna.begin();
		if (p0 < 0) {
			x0 = x0 + 1;
			p0 = p0 + (2 * DeltaY);

			Retorna.insert(it,x0);
			contador++;
			Retorna.insert(it, y0);
			contador++;
		}else {
			x0 = x0 + 1;
			y0 = y0 + 1;
			p0 = p0 + (2 * DeltaY) - (2 * DeltaX);
			Retorna.insert(it, x0);
			contador++;
			Retorna.insert(it,y0);
			contador++;
		}
		cout << "k = " << x << "\t";
		cout << "P = " << p0 << "\t";
		cout << "Xk = " << x0 << "\t";
		cout << "Yk = " << y0 << "\t";
		cout << "\n";
		x++;
	}
 
	cout<< "Elementos de la Lista " << Retorna.size();    
        for(int r:Retorna){ 
            cout<<"Elemento: "<<r<<endl;
        }
	return Retorna;
}

#endif /* MILIBRERIA_H */











