#include "Norm.cpp"
#include <iostream>
using namespace std;
template <class T>
class Vector3D : public virtual Norm
{
private:
	T* Coords;
	int dimensions = 3;
public:
	Vector3D()
	{
		Coords = new T[dimensions];
	}
	void setX_value(T x_value)
	{
		Coords[0] = x_value;
	}
	void setY_value(T y_value)
	{
		Coords[1] = y_value;
	}
	void setZ_value(T z_value)
	{
		Coords[2] = z_value;
	}
	/*Vector3D(T x_value, T y_value, T z_value)
	{
		Coords = new T[dimensions];
		Coords[0] = x_value;
		Coords[1] = y_value;
		Coords[2] = z_value;
	}*/
	void norm()
	{
		T result = 0;
		double final_result;
		for (unsigned int iterator = 0; iterator < dimensions; iterator++)
		{
			result += Coords[iterator] * Coords[iterator];
		}
		final_result = sqrt(result);
		cout << "norm of this vector is " << final_result << endl;
	}
	void absolute()
	{
		T result = 0;
		double final_result;
		for (unsigned int iterator = 0; iterator < dimensions; iterator++)
		{
			result += Coords[iterator] * Coords[iterator];
		}
		final_result = sqrt(result);
		cout << "abs of this vector is " << final_result << endl;
	}
	~Vector3D() 
	{

	}
};