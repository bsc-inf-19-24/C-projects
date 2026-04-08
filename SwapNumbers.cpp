
// This program demonstrates how to swap  using passing by value two numbers using a function in C++.

#include <iostream>
using namespace std;  
int SwapNumbers(int num1, int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
    return num1; // Return the swapped values
     return num2;
}


int main(){
     int VarA = 25;
     int VArB = 100;

     cout << "VarA before swap: " << VarA<< VArB << endl;
     cout << "VarB before swap: " << VArB << VarA << endl;

     SwapNumbers(VarA, VArB);
        cout << "VarA after swap: " << VarA<< VArB << endl; 
        cout << "VarB after swap: " << VArB << VarA << endl;
    return 0;

}