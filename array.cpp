#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    string arr[8]={"B123","c234","A345","c15","B177","G3003","c235","B179"};


    string target[] = {"B123","B177","B179"};
    int size = 3;

      for (int i = 0; i < size; i++) {
            if (arr[i][0] == 'B') {
                cout <<  arr[i] << endl;
                break; // Exit the loop once the target is found
            }
        cout << arr[i] << endl;

        return 0;

}
}