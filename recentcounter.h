#ifndef _INC_RECENT_COUNTER_H_
#define _INC_RECENT_COUNTER_H_

#include "linkqueue.h"

class RecentCounter {
private:
    LinkedQueue<int> q;
    int range = 3000;
public:
    RecentCounter() ;
    RecentCounter(int) ;
    int ping(int) ;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

#endif // _INC_RECENT_COUNTER_H_