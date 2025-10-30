#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class LRUCache {
public:
    int cap;
    list<pair<int, int>> cache;
    unordered_map<int, list<pair<int, int>>::iterator> mp;

    LRUCache(int capacity) : cap(capacity) {}

    int get(int key) {
        if (!mp.count(key)) return -1;
        auto it = mp[key];
        int val = it -> second;
        cache.erase(it);
        cache.push_front({key, val});
        mp[key] = cache.begin();
        return val;
    }

    void put(int key, int value) {
        if (mp.count(key)) cache.erase(mp[key]);
        else if (cache.size() == cap) {
            auto last = cache.back();
            mp.erase(last.first);
            cache.pop_back();
        }
        cache.push_front({key, value});
        mp[key] = cache.begin();
    }
};

int main() {
    LRUCache lru(2);
    lru.put(1, 1);
    lru.put(2, 2);
    cout << lru.get(1) << endl;
    lru.put(3, 3);
    cout << lru.get(2) << endl;
    lru.put(4, 4);
    cout << lru.get(1) << endl;
    cout << lru.get(3) << endl;
    cout << lru.get(4) << endl;
    return 0;
}