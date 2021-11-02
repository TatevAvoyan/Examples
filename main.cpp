#include "iostream"
#include "cstring"
using namespace std;

int main(){

    cout << "Enter your name: ";
    string Name;
    cin >> Name;

    int CharsToAllocate = Name.length() + 1;

    char* CopyOfName = new char [CharsToAllocate];

    strcpy(CopyOfName, Name.c_str());

    cout << "Dynamically allocated buffer contains: " << CopyOfName << endl;

    delete[] CopyOfName;

    return 0;
}