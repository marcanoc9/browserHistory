#ifndef STACK_H
#define STACK_H
#include<iostream>

struct StackNode
{
    StackNode(std::string site);
    std::string website;
    StackNode* next;
};

class Stack
{
private:
    StackNode* head;
    int size;
public:

    Stack();

    StackNode* push(std::string site);
    StackNode* pop();
    StackNode* top();
    int getSize();
    void makeEmpty();
    ~Stack();
};
#endif