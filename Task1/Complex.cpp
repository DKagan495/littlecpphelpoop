#include "Norm.cpp"
#include <iostream>
using namespace std;
template <class T>
class Complex : public virtual Norm
{
private:
	T imagine, real;
public:
	void setImagine(T imagine)
	{
		this->imagine = imagine;
	}
	void setReal(T real)
	{
		this->real = real;
	}
	T getImagine()
	{
		return imagine;
	}
	T getReal()
	{
		return real;
	}
	//override
	void absolute()
	{
		T result = sqrt(getReal() * getReal() + getImagine()*getImagine());
		cout << result << endl;
	}
	void norm()
	{
		T result = sqrt(getReal() * getReal() + getImagine() * getImagine());
		cout << result << endl;
	}
};