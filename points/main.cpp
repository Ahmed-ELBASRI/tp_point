// points.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "point.h"
#include "math.h"
#include "point3.h"
using namespace std;
int main()
{
	point* a;
	a = new point(1,2);
	a->afficher();
	delete a;
	point3* b;
	b = new point3(5, 7, 3);
	b->afficher();
	delete b;
	point* c;
	c = new point3(1, 2, 7);
	c->afficher();
	delete c;
	//point3 v,w(1.5,2.1,1);
	//w.afficher();
	//point p = w;
	//v = w;
	/*point a, b(1.2, 1.5), c = b;*/ //<=> c(b), initialisation a la declaration (constructeur de recopie);
	//a.afficher();
	//b.afficher();
	//if (a.coincide(b) == true) {
	//	cout << "objet egaux" << endl;
	//}
	//else {
	//	cout << "objets differents" << endl;
	//}
	//c = a;une affectation
	//c = a+b;
	//c = a - b;
	//c = operator*(b,3);
	//c.afficher();
	//p.saisie();
	//q = new point();
	//q->saisie();
	//q->afficher();
	////point::nombrePoints();	
	//p.translate(1,2);
	//p.afficher();
	//float r = sqrt(q->distance(p));
	//cout << "distance = " << r << endl;
	//delete q;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
