#include "iostream"
using namespace std;

int main(){

    try {
        int* pAge = new int [536875670911];

        delete[] pAge;
    }
    catch (bad_alloc) {
        cout << "Memory allocation failed. Ending program" << endl;
    }

    return 0;
}