#include "iostream"
using namespace std;

int main() {

    const int MAX_ROWS = 3;
    const int MAX_COLS = 4;

    int MyInts[MAX_ROWS][MAX_COLS] = { {34, -1, 879, 22},
                                       {24, 365, -101, -1},
                                       {-20, 40, 90, 97} };
    
    for (int Row = 0; Row < MAX_ROWS; ++Row) {
        for (int Column = 0; Column < MAX_COLS; ++Column){
            cout << "Integer[" << Row << "][" << Column \
                 << "] = " << MyInts[Row][Column] << endl;
        }
    }

    return 0;
}