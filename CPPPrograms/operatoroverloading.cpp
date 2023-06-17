//program to overload the + operator into adding the objects of the complex class
#include <iostream>
using namespace std;

class Complex {
    // the real and imaginary parts are declared
    private:
	    int real, imag;

    public:
    // constructor is used to load the values of real and imaginary part of the number when an object is created
	    Complex(int r = 0, int i = 0)
	        {
    		real = r;
    		imag = i;
	        }
    // the + operator is being overloaded to add the objects of the class complex and return them to the object that the values are being assigned to 
	Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    // function to print the output
	void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
	Complex c1(9, 9), c2(8, 8);
	Complex c3 = c1 + c2;
	c3.print();
}
