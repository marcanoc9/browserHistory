#include"stack.h"
#include<iostream>

StackNode::StackNode(std::string site)
{
    website = site;
    next = nullptr;
}

Stack::Stack()
{
    head = nullptr;
    size = 0;
}

StackNode* Stack::push(std::string site)
{
    StackNode* temp = new StackNode(site);

    temp->next = head;
    head = temp;

    size++;

    return temp;
}


StackNode* Stack::pop()
{
    if (head == nullptr)
        return nullptr;

    StackNode* temp = head;
    head = head->next;
    size--;
    return temp;
}

StackNode* Stack::top()
{
    if (head == nullptr)
        return nullptr;

    return head;
}

int Stack::getSize()
{
    return size;
}

void Stack::makeEmpty()
{
    StackNode* temp = head, * prev;

    while (temp != nullptr)
    {
        prev = temp;
        temp = temp->next;

        delete prev;
    }

    head = nullptr;
    size = 0;
}


Stack::~Stack()
{
    makeEmpty();
}





