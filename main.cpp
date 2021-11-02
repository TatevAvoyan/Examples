#include "iostream"
using namespace std;

int main(){

    int DogsAge = 30;
    cout << "Initialized DogsAge = " << DogsAge << endl;

    int* pAge = &DogsAge;
    cout << "pAge points to Dog'sAge" << endl;
    cout << "Enter an age for your dog: " ;

    cin >> *pAge;

    cout << "Input stored using pAge at Ox" << hex << pAge << endl;
    cout << "Integer DogsAge = " << dec << DogsAge << endl;

    return 0;
}