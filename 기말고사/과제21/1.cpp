#include <iostream>
#include <string>
using namespace std;

typedef long long long_t;

class Complex {
public:
    long_t real;
    long_t imag;
    Complex *mult(Complex *x);
    string toString();
};

Complex *Complex::mult(Complex *x){
    int a; int b;
    a= this->real * x->real - this->imag * x->imag;
    b= this->real * x->imag + this->imag * x->real;
    this->real = a;
    this->imag = b;
    return this;
}

string Complex::toString() {
    string s = "(";
    s += to_string(this->real);
    s += ") + (";
    s += to_string(this->imag);
    s += ")i";
    return s;
}

int main() {
    Complex a, b;
    cin >> a.real >> a.imag;
    cin >> b.real >> b.imag;
    a.mult(&b);
    cout << a.toString() << endl;
}