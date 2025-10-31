#include "lru_cache.h"

LRUCache::LRUCache(int cap) : capacity(cap) {}

int LRUCache::get(int key) {
    if(!map.count(key)) return -1;
    auto it = map[key];
    int val = it -> second;
    cache.erase(it);
    cache.push_front({key, val});
    map[key] = cache.begin();
    return val;
}

void LRUCache::put(int key, int value) {
    if (map.count(key)) cache.erase(map[key]);
    else if (cache.size() == capacity) {
        auto last = cache.back();
        map.erase(last.first);
        cache.pop_back();
    }
    cache.push_front({key, value});
    map[key] = cache.begin();
}