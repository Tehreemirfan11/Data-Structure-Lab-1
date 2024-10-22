#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    Complex add(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    Complex subtract(Complex c) {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }

    Complex multiply(Complex c) {
        Complex result;
        result.real = (real * c.real) - (imag * c.imag);
        result.imag = (real * c.imag) + (imag * c.real);
        return result;
    }
    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, result;
    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "Enter second complex number:" << endl;
    c2.input();
    result = c1.add(c2);
    cout << "Sum: ";
    result.display();
    
    result = c1.subtract(c2);
    cout << "Difference: ";
    result.display();

    result = c1.multiply(c2);
    cout << "Product: ";
    result.display();

    return 0;
}
