#ifndef BROWSER_H
#define BROWSER_H

#include<iostream>
#include "queue.h"
#include "stack.h"


class Browser
{
private:
    Stack stack;
    Queue queue;

public:

    Browser();
    std::string visit(std::string website);

    std::string back();

    std::string getHistory();

    void clearSession();

    std::string getCurrentWebsite();

    ~Browser();
};
#endif
