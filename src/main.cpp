#include <iostream>
#include "lru_cache.h"
using namespace std;

void container_demo();

int main() {
    cout << "Running KamaCache demo..." << endl;
    // container_demo();
    
    int a = 10;
    int &ref = a; // reference, ref is an alias of 'a'
    int *ptr = &a; //pointer that stores the address of 'a'

    cout << "a = " << a << endl; //print the value of variable 'a'
    cout << "ref = " << ref << endl; //print the value of 'ref' (same as 'a')
    cout << "*ptr = " << *ptr << endl; //print the value pointed to by 'ptr'

    ref = 20; //modify 'a' through the 'ref'
    cout << "After change: a = " << a << endl; //print the updated value of 'a'

    cout << "\n=== Testing LRUCache ===" << endl;
    LRUCache cache(2);
    cache.put(1, 1);
    cache.put(2, 2);
    cout << "get(1): " << cache.get(1) << endl;
    cache.put(3, 3); // 淘汰 key 2
    cout << "get(2): " << cache.get(2) << endl;
    cache.put(4, 4); // 淘汰 key 1
    cout << "get(1): " << cache.get(1) << endl;
    cout << "get(3): " << cache.get(3) << endl;
    cout << "get(4): " << cache.get(4) << endl;
    return 0;
}
