#include <iostream>
#include <random>
using namespace std;    


int main(){

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 10);
    cout << dis(gen) << endl;

    int bee = dis(gen);
    switch (bee) {
        case 10:
            cout << "you have an active subscription!" << endl;
            break;
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
            cout << "your subscription will expire soon " << endl;
            break;
        case 4:
        case 3:
        case 2:
        case 1:
            cout << "your subscription expires in value and safe 20%" << endl;
            break;
        case 0:
            cout << "your subscription expires in a day " << endl;
            break;
        default:
            cout << "you have no subscription" << endl;
    }

}