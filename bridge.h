#ifndef _INC_BRIDGE_H_
#define _INC_BRIDGE_H_

#ifdef __cplusplus
extern "C"
{
#endif

void initRangeTime(int);
int callPing(int);

void pushQ(int t);

void popQ();

int frontQ();

#ifdef __cplusplus
}
#endif

#endif // _INC_BRIDGE_H_