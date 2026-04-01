#include <iostream> 
using namespace std;


#include <iostream>
using namespace std;

int main(){
    int count;
    
    cout << "Enter an integer between 5 and 10: ";
    cin >> count;
    
    while (count < 5 || count > 10) {
        cout << "Sorry, you entered an invalid number. Please try again: ";
        cin >> count;
    }
    
    cout << "Your input has been accepted: " << count << endl;
    
    return 0;
}