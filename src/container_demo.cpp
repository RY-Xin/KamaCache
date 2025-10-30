#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

void container_demo() {
    unordered_map<int, string> mp; //Create an unordered_map
    //Insert key-value pairs
    mp[1] = "apple";
    mp[2] = "banana";
    mp[3] = "cherry";
    mp.erase(2);
    mp[4] = "pear";

    cout << "unoredered_map contains:" << endl;
    for (auto &p : mp) {
        cout << p.first << " -> " << p.second << endl; //Iterate and print all key-value pairs
    }

    list<int> lst = {1, 2, 3}; //Create a doubly linked list
    lst.push_front(0); //Insert at the front
    lst.push_back(4); //Insert at the back

    cout << "\nlist contains:" << endl;
    for (int x : lst) cout << x << " "; //Traverse and print list elements

    cout << endl;
    return;
}