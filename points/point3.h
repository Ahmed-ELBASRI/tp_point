#pragma once
#include <iostream>
using namespace std;
#include "point.h"
class point3 : public point
{
public:
	point3();
	~point3();
	point3(float, float, float);
	point3(const point3&);
	inline void afficher() const;
	point3& operator=(const point3&);
private:
	float z;
protected:
};
inline void point3::afficher() const {
	point::afficher();
	cout << "z=" << z << endl;
}


