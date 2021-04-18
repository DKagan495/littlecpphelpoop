#include <iostream>
#include "Complex.cpp"
#include "Vector.cpp"
using namespace std;
int main()
{
	Complex<int> complex;
	complex.setReal(3);
	complex.setImagine(4);
	complex.absolute();
	complex.norm();
	Vector3D<int> vector3D;
	vector3D.setX_value(2);
	vector3D.setY_value(3);
	vector3D.setZ_value(4);
	vector3D.norm();
	vector3D.absolute();
	system("pause");
	return 0;
}