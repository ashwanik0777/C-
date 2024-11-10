#include <iostream>
using namespace std;
class Complex
{
private:
    double real;
    double imag;

public:
    Complex (double real = 0, double imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }
    void display()
    {
        cout << "Complex Number : " << real << " + " << imag << "i" << endl;
    }
    Complex add(const Complex & other)
    {
        Complex result;
        result.real = this->real + other.real;
        result.imag = this->imag + other.imag;
        return result;
    }
    Complex multiply(const Complex & other)
    {
        Complex result;
        result.real = this->real * other.real - this->imag * other.imag;
        result.imag = this->real * other.imag + this->imag * other.real;
        return result;
    }
    Complex operator++()
    {
        real++;
        imag++;
        return *this;
    }
};

int main()
{
    Complex num1(2.5, -3.2);
    Complex num2(4.1, 1.8);
    Complex sum = num1.add(num2);
    sum.display();
    Complex product = num1.multiply(num2);
    product.display();

    ++num1;
    num1.display();

    ++num2;
    num2.display();

    return 0;
}