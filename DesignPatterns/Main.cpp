#include <iostream>
#include "../DesignPatterns/ObjectFactory.h"
#include "../DesignPatterns//Singleton.h"
#include "../DesignPatterns/MySingletonTest.h"
#include <string>
#include <memory>

class MyObject
{
public:
    int a = 109;
    MyObject()
    {
        std::cout << "MyObject created with default constructor\n";
    }

    MyObject(int value)
    {
        std::cout << "MyObject created with int constructor: " << value << "\n";
    }

    MyObject(int value, const std::string& name)
    {
        std::cout << "MyObject created with int and string constructor: " << value << ", " << name << "\n";
    }

    void DoSomething()
    {
        std::cout << "Doing something\n";
    }
};

struct MyStruct
{
    MyStruct()
    {
        std::cout << "MyStruct created with default constructor\n";
    }
};


int main()
{
    //ObjectFactory factory;
   /* std::shared_ptr<MyObject> object_1 = factory.CreateObject<MyObject>();
    std::shared_ptr<MyObject> object_2 = factory.CreateObject<MyObject>(10);
    std::shared_ptr<MyObject> object_3 = factory.CreateObject<MyObject>(10,"Kirill");

    std::shared_ptr<MyStruct> struct_1 = factory.CreateObject<MyStruct>();*/

    MySingletonTest::Instance(10)->count++;
    MySingletonTest::Instance()->count++;

    std::cout << MySingletonTest::Instance()->count;

	std::cin.get();
}