#include "iostream"
using namespace std;

const double Pi = 3.14159;

double Area(double Radius);
double Area(double Radius, double Height);

int main() {

    cout << "Enter z for Cylinder, c for Circle: ";
    char Choice = 'z';
    cin >> Choice;

    cout << "Enter Radius: ";
    double Radius = 0;
    cin >> Radius;

    if (Choice == 'z') {
        cout << "Enter height: ";
        double Height = 0;
        cin >> Height;

        cout << "Area of cylinder is: " << Area(Radius, Height) << endl;
    } else {
        cout << "Area of cylinder is: " << Area(Radius) << endl;
    }

    return 0;
}

double Area(double Radius) {
    return Pi * Radius * Radius;
}
double Area(double Radius, double Height){
    return 2 * Area(Radius) +2 * Pi * Radius * Height;
}
