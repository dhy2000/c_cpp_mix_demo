#include "bridge.h"
#include "recentcounter.h"

RecentCounter *p_rc;

void initRangeTime(int t) {
    p_rc = new RecentCounter(t);
}

int callPing(int t) {
    return p_rc->ping(t);
}

void pushQ(int t) {
    q_pings.push(t);
}

void popQ() {
    q_pings.pop();
}

int frontQ() {
    return q_pings.front();
}
