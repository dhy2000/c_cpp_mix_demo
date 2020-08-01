#ifndef _INC_LINK_QUEUE_H_
#define _INC_LINK_QUEUE_H_

template <typename T>
struct ListNode
{
    T val;
    struct ListNode *next;
    ListNode();// : next(nullptr) {}
    ListNode(T v);// : val(v), next(nullptr) {}
};

template <typename T>
class LinkedQueue
{
private:
    ListNode<T> *head = nullptr, *tail = nullptr;
    unsigned int nNodes = 0;
public:
    LinkedQueue() ;
    void push(T);
    void pop();
    T front();
    bool empty();
    unsigned int size();
};

#include "linkqueue.hpp"

#endif // _INC_LINK_QUEUE_H_