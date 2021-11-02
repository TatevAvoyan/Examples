#include "iostream"
using namespace std;

int main(){

    int Age = 30;
    int DogsAge = 9;

    cout << "Integer Age = " << Age << endl;
    cout << "Integer DogAge = " << DogsAge << endl;

    int *pInteger = &Age;
    cout << "pInteger points to Age" << endl;

    cout << "pInteger = " << hex << pInteger << endl;

    cout << "*pInteger = " << dec << *pInteger << endl;

    pInteger = &DogsAge;
    cout << "pInteger points to DogsAge now" << endl;

    cout << "pInteger = " << hex << pInteger << endl;
    cout << "*pInteger = " << dec << *pInteger << endl;

    return 0;
}