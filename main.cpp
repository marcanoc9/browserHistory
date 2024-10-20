#include<iostream>
#include"browser.h"

// implementation for browser
int main()
{
    Browser browser;

    browser.visit("www.example 1.com");
    browser.visit("www.example 2.com");
    browser.visit("www.example 3.com");

    browser.back();
    browser.visit("www.example 4.com");

    std::cout << browser.getHistory() << std::endl;

    browser.clearSession();

    browser.visit("www.example 1.com");
    browser.visit("www.example 2.com");

    std::cout << browser.getHistory() << std::endl;
}