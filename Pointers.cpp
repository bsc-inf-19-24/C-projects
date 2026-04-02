#include <iostream>
using namespace std;

int main() {
    int firsrvalue;
    int secondvalue;


    int * pPointer = nullptr; 
    // Initialize pointer to null

    pPointer = &firsrvalue;
    *pPointer = 10;

    pPointer = &secondvalue;
    *pPointer = 20;

    cout << "First value: " << firsrvalue << '\n';
    cout << "Second value: " << secondvalue << '\n';
    return 0;
}