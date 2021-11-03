#include "iostream"
using namespace std;

int main(){

    int* pTemperature;

    cout << "Is it sunny (y/n)?" << endl;
    char UserInput = 'y';
    cin >> UserInput;

    if (UserInput == 'y'){
        int* pTemperature = new int;
        *pTemperature = 30;
        cout << "Temperature is: " << *pTemperature;
        delete pTemperature;
    }


    return 0;
}