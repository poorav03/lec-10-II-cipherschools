// Lecture 10 II - Functions Pt 6

#include <iostream>
using namespace std;

// void swap(int a, int b){ // passing by value
//     int c = a;
//     a = b;
//     b = c;
//     cout << "Pass by value function. The value of a and b after swap (INSIDE FUNCTION): "<< a << " "<< b<<  endl;
// }

void swap(int &a, int &b){ // passing by reference
    int c = a;
    a = b;
    b = c;
    cout << "Pass by reference function. The value of a and b after swap (INSIDE FUNCTION): "<< a << " "<< b<<  endl;
}

void func(int &a, int b){
    a = 99999;
    b = 99999;
    cout << "The values of a and b inside the function are : " << a << " " << b << endl;
}

int main(){
    int a, b;
    cout << "Enter 2 number : ";
    cin >> a >> b;
    swap(a, b);
    cout << "The value of a and b after swap (OUTSIDE FUCNTION): "<< a << " "<< b<<  endl;
    cout << endl;
    cout << "The values of a and b before passing into the function are : " << a << " " << b << endl;
    func(a, b);
    cout << "The values of a and b after passing into the function are : " << a << " " << b << endl;
    return 0; 
}