#include <iostream>
using namespace std;

void container_demo();

int main() {
    cout << "Running KamaCache demo..." << endl;
    container_demo();
    
    int a = 10;
    int &ref = a; // reference, ref is an alias of 'a'
    int *ptr = &a; //pointer that stores the address of 'a'

    cout << "a = " << a << endl; //print the value of variable 'a'
    cout << "ref = " << ref << endl; //print the value of 'ref' (same as 'a')
    cout << "*ptr = " << *ptr << endl; //print the value pointed to by 'ptr'

    ref = 20; //modify 'a' through the 'ref'
    cout << "After change: a = " << a << endl; //print the updated value of 'a'
    return 0;
}
