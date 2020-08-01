#include "linkqueue.h"

template <typename T>
ListNode<T>::ListNode(): next(nullptr) {}

template <typename T>
ListNode<T>::ListNode(T v) : val(v), next(nullptr) {}

template <typename T>
LinkedQueue<T>::LinkedQueue(): head(nullptr), tail(nullptr) {}

template <typename T>
void LinkedQueue<T>::push(T v) {
    if (head == nullptr || tail == nullptr) {
        head = tail = new ListNode<T>(v);
    }
    else {
        tail->next = new ListNode<T>(v);
        tail = tail->next;
    }
    nNodes++;
}

template <typename T>
void LinkedQueue<T>::pop() {
    if (head == nullptr)return;
    else {
        ListNode<T> *del = head;
        head = head->next;
        if (head == nullptr) tail = nullptr;
        delete del;
        nNodes--;
    }
}

template <typename T>
T LinkedQueue<T>::front() {
    return head->val;
}

template <typename T>
bool LinkedQueue<T>::empty() {
    return head == nullptr;
}

template <typename T>
unsigned int LinkedQueue<T>::size() {
    return nNodes;
}
