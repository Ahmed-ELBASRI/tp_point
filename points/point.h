#pragma once
#include <iostream>
using namespace std;
class point
{
public :
	point();
	point(float);
	point(float,float);
	~point();
	void saisie() {
		cout << "entrez x et y" << endl;
		cin >> x >> y;
		nbpts++;
	}
	 inline void afficher() const;
	void translate(const float &, const float &);
	float distance( point);
	static void nombrePoints();
	bool coincide(point);
	point(const point&);
	point& operator+(const point &);
	point& operator-(const point&);
	point& operator*(const point&);
	point& operator=(const point&);
	friend point& operator*(const point&, const float&);

protected :
	static int nbpts;
	float x;
	float y;
};
inline void point::afficher() const {
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
}


