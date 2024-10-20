#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>

struct QueueNode
{
    QueueNode(std::string site);
    std::string website;
    QueueNode* next;
    QueueNode* prev;
};


class Queue
{
private:
    int size;
    QueueNode* head, * tail;

public:
    Queue();
    QueueNode* push(std::string site);
    QueueNode* pop();
    QueueNode* front();
    int getSize();
    void makeEmpty();
    ~Queue();
};
#endif