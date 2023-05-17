#include "point.h"
#include <iostream>
using namespace std;
int point::nbpts = 0;
//void point::saisie() {
//	cout << "entrez x et y" << endl;
//	cin >>x>>y;
//	nbpts++;
//}
//void point::afficher() {
//	cout << "x=" << x << endl;
//	cout << "y=" << y << endl;
//}	

point& point::operator=(const point& p) {
	x = p.x;
	y = p.y;
	cout << "operateur d'affectation" << endl;
	return *this;
}
point& operator*(const point& p, const float &f) {
	static point q;
	q.x = f * p.x;
	q.y = f * p.y;
	return q;
}
point& point::operator+(const point & p) {
	static point q;
	q.x = x + p.x;
	q.y = y + p.y;
	return q;
}
point& point::operator*(const point& p) {
	static point q;
	q.x = x * p.x;
	q.y = y * p.y;
	return q;
}
point& point::operator-(const point& p) {
	static point q;
	q.x = x - p.x;
	q.y = y - p.y;
	return q;
}
point::point(const point& p) {
	x = p.x;
	y = p.y;
	cout << "constructeur de recopie" << endl;
}
bool point::coincide(point p) {
	if (p.x == x && p.y == y) {
		return true;
	}
	return false;
}
void point::nombrePoints() {
	cout <<"nbr points :" << point::nbpts << endl;
}
void point::translate(const float& dx, const float& dy) {
	x += dx;
	y += dy;
}
float point::distance(point a) {
	return (x - a.x) * (x - a.x) + (y - a.y) * (y - a.y);
}
point::point() {
	x = 0.0;
	y = 0.0;
	cout  << "constructeur par default" << endl;
}
point::point(float x_) {
	this->x = x_;
	this->y = x_;
	cout << "constructeur avec 1 parametres" << endl;
}
point::point(float x_,float y_) {
	this->x = x_;
	this->y = y_;
	cout << "constructeur avec 2 parametres" << endl;
}
point::~point() {
	cout <<"descructeur" << endl;
}