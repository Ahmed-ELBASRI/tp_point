#include "point.h"
#include "point3.h"
#include <iostream>
using namespace std;
point3& point3::operator=(const point3& v) {
	x = v.x;
	y = v.y;
	z = v.z;
	cout << "operateur d'affectation fille" << endl;
	return *this;
}
point3::point3(const point3& v) :point(v)
{
	z = v.z;
	cout << "constructeur de recopie fille" << endl;
}
point3::~point3() {
	cout << "destructeur fille" << endl;
}
point3::point3() {
	z = 0.0;
	cout << "contructeur par defaut fille" << endl;
}
point3::point3(float a, float b, float c) :point(a,b) {
	this->z = c;
	cout << "constructeur avec paramateres fille" << endl;
}

