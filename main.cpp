#include "iostream"
using namespace std;

int main() {

    cout << "This program will help you multiply two numbers" << endl;

    cout << "Enter the first number: ";
    int FirstNumber = 0;
    cin >> FirstNumber;

    cout << "Enter the second number: ";
    int SecondNumber = 0;
    cin >> SecondNumber;

    int MultiplicationResult = FirstNumber * SecondNumber;

    cout << FirstNumber << " x " << SecondNumber;
    cout << " = " << MultiplicationResult << endl;

    return 0;
}