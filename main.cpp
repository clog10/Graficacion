/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Clog_10
 *
 * Created on 22 de septiembre de 2019, 12:53 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int x1,x0; 
    int y1,y0;
    
    cout<<"Inserta el valor de x0\n";
    cin>>x0; 
    cout<<"Inserta el valor de x1\n";
    cin>>x1;
    cout<<"Inserta el valor de y0\n";
    cin>>y0;
    cout<<"Inserta el valor de y1\n";
    cin>>y1;
    
int DeltaX; 
	int DeltaY;
	int p0;

	DeltaX = x1 - x0;
	DeltaY = y1 - y0;
	p0 = (2 * y0) - x0;

	int x = 0;
        
	while (x < DeltaX) {
		if (p0 < 0) {
			x0 = x0 + 1;
			p0 = p0 + (2 * DeltaY);
		}else {
			x0 = x0 + 1;
			y0 = y0 + 1;
			p0 = p0 + (2 * DeltaY) - (2 * DeltaX);
		}
		cout << "k = " << x << "\t";
		cout << "P = " << p0 << "\t";
		cout << "Xk = " << x0 << "\t";
		cout << "Yk = " << y0 << "\t";
		cout << "\n";
		x++;
	}

    return 0;
}










