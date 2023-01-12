class Complex {
private:
double real;
double imag;

public:
Complex(double real = 0, double imag = 0) {
    this->real=real;
    this->imag=imag;
}

double getReal() { return real; }
double getImag() { return imag; }
void setReal(double real) { this->real = real; }
void setImag(double imag) { this->imag = imag; }


Complex& operator=(const Complex& other) {
real = other.real;
imag = other.imag;
return *this;
}


Complex operator+(const Complex& other) {
return Complex(real + other.real, imag + other.imag);
}

Complex operator-(const Complex& other) {
return Complex(real - other.real, imag - other.imag);
}

Complex operator*(const Complex& other) {
return Complex(real * other.real - imag * other.imag,
real * other.imag + imag * other.real);
}

Complex operator/(const Complex& other) {
double denominator = other.real * other.real + other.imag * other.imag;
return Complex((real * other.real + imag * other.imag) / denominator,
(imag * other.real - real * other.imag) / denominator);
}
};
