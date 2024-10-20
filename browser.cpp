#include "browser.h"
#include<iostream>

Browser::Browser()
{
}

std::string Browser::visit(std::string website)
{
    stack.push(website);
    queue.push(website);
    return website;
}

std::string Browser::back()
{
    StackNode* result = stack.pop();
    if (result == nullptr)
        return "";

    return result->website;
}

std::string Browser::getHistory()
{
    std::string history = "";
    Queue temp_queue;

    while (queue.front() != nullptr)
    {
        QueueNode* temp = queue.pop();
        history += temp->website + "\n";

        temp_queue.push(temp->website);
    }

    // push back the nodes into the queue
    while (temp_queue.front() != nullptr)
    {
        QueueNode* temp = temp_queue.pop();
        queue.push(temp->website);
    }

    return history;
}

void Browser::clearSession()
{
    stack.makeEmpty();
    queue.makeEmpty();
}

std::string Browser::getCurrentWebsite()
{
    StackNode* result = stack.top();

    if (result == nullptr)
        return "";;

    return result->website;
}

Browser::~Browser()
{
    queue.makeEmpty();
    stack.makeEmpty();
}