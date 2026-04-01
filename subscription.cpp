#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 10);
    cout << dis(gen) << endl;

    
    if (dis(gen) >=10 ) {
        cout << "you have an active subscription!" << endl;
    } else if (dis(gen) <= 10) {
        cout << "your subscription will expire soon " << endl;
    }else if (dis(gen) <= 5) {
        cout << "your subscription expires in  value and safe 20%" << endl;
    } else if (dis(gen) <= 1) {
        cout << "your subscription expires in a day " << endl;
    }
    
    else 

    {
        cout << "you have no subscription" << endl;
    }

}