#include <iostream>
#include <string>
using namespace std;

typedef long long long_t;

class Complex {
public:
    long_t real;
    long_t imag;
    Complex *mult(Complex *x);
    Complex *pow(int n);
    string toString();
};

Complex *Complex::mult(Complex *x){
    long_t a; long_t b;
    a= this->real * x->real - this->imag * x->imag;
    b= this->real * x->imag + this->imag * x->real;
    this->real = a;
    this->imag = b;
    return this;
}

Complex *Complex::pow(int n){
    for(int i = 1; i < n; i++){
        this->mult(this);
    }
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
    Complex a;
    cin >> a.real >> a.imag;
    int n;
    cin >> n;
    a.pow(n);
    cout << a.toString() << endl;
}