#include <iostream>
using namespace std;

class Average {
public:
    void calculateAverage(float num1, float num2, float num3) {
        float avg = (num1 + num2 + num3) / 3;
        cout << "The average of the three numbers is: " << avg << endl;
    }
};

int main() {
    float number1, number2, number3;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Enter third number: ";
    cin >> number3;
    Average Obj;
    Obj.calculateAverage(number1, number2, number3);

    return 0;
}
