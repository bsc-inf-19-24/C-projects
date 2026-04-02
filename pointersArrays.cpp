#include <iostream>
using namespace std;

int main(){
    int numbersArray[5];
    int * pPointer = nullptr; // Initialize pointer to null

    pPointer = numbersArray; // Assign the address of the first element of the array to the pointer


    *pPointer = 10; 
    pPointer++;

    *pPointer = 20;
    pPointer = &numbersArray[2];
    *pPointer = 30;

    pPointer = numbersArray + 3;
    *pPointer = 40;

    pPointer = numbersArray;
    *(pPointer+4) = 50;

    for (int n = 0;n<5; n++){
        cout<<numbersArray[n]<<",";
    }

    return 0;
}