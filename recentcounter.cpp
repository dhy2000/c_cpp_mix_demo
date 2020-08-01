#include "recentcounter.h"

RecentCounter::RecentCounter() {}
RecentCounter::RecentCounter(int t): range(t) {}
int RecentCounter::ping(int t) {
    q.push(t);
    while (!q.empty()) {
        int f = q.front();
        if (t - f > range) 
            q.pop();
        else break;
    }
    return q.size();
}

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */