#include"queue.h"
#include<iostream>

QueueNode::QueueNode(std::string site)
{
    website = site;
    next = prev = nullptr;
}


Queue::Queue()
{
    head = tail = nullptr;
    size = 0;
}

QueueNode* Queue::push(std::string site)
{
    QueueNode* temp = new QueueNode(site);

    if (head == nullptr)
    {
        head = tail = temp;
        size++;
        return temp;
    }

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    size++;

    return temp;
}

QueueNode* Queue::pop()
{
    if (head == nullptr)
    {
        return nullptr;
    }

    QueueNode* temp = head;
    head = head->next;

    if (head != nullptr)
        head->prev = nullptr;

    size--;

    return temp;
}


QueueNode* Queue::front()
{
    if (head == nullptr)
    {
        return nullptr;
    }

    return head;
}

int Queue::getSize()
{
    return size;
}

void Queue::makeEmpty()
{
    QueueNode* temp, * prev;
    temp = head;

    while (temp != nullptr)
    {
        prev = temp;
        temp = temp->next;
        delete prev;
    }

    head = tail = nullptr;
    size = 0;
}


Queue::~Queue()
{
    makeEmpty();
}