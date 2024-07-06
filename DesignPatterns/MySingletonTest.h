#pragma once
#include "Singleton.h"
#include <iostream>

class MySingletonTest : public Singleton<MySingletonTest>
{
    // Allow Singleton<MySingletonTest> to access the private constructor
    friend class Singleton<MySingletonTest>;

protected:
    MySingletonTest(int a)
    {
        count = a;
        std::cout << "MySingletonTest created" << std::endl;
    }
    virtual ~MySingletonTest() override
    {
        std::cout << "MySingletonTest destroyed" << std::endl;
    }

public:
    int count = 10;
};
