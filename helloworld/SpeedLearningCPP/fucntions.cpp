#include <iostream>

using namespace std;

void hello(int n = 5){
    for (int i = 0; i < n; i++){
        cout << "Hello!\n";
    }
}

int addNums(int x, int y) {
    return x+y;
}

int main(){
    int num1;
    int num2;
    cout << "Please enter your first number: ";
    cin >> num1;
    cout << "Please enter you second number: ";
    cin >> num2;
    cout << addNums(num1, num2);
    return 0;
}