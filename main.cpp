#include "iostream"
using namespace std;

int main(){

    int* pAge = new(nothrow) int [0x1ffffffffff];

    if(pAge) {
        delete[] pAge;
    } else {
        cout << "Memory allocation failed. Ending program" << endl;
    }

    return 0;
}