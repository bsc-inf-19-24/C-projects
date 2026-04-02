#include <iostream>
using namespace std;

int main() {
    int* pPointer = nullptr; // Initialize pointer to null


    int integerVAr = 5;
    pPointer = &integerVAr; // Assign the address of integerVAr to the


    cout<<"integerVAr: "<<integerVAr<<endl;

    cout<<"Address of integerVAr: "<<&integerVAr<<endl;
    
    cout<<"pPointer:"<<pPointer<<endl;

    cout << "Address of pPointer: " << &pPointer << endl;
    return 0;

 }