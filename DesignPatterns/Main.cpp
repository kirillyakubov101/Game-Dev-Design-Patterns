#include <iostream>
#include <string>
#include <memory>
#include "Factory/ObjectFactory.h"
#include "Singleton/MySingletonTest.h"
#include "Component/HealthComponent.h"
#include "Component/Player.h"
#include "ObserverPattern/Observer.h"
#include "ObserverPattern/Subject.h"

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
    /*ObjectFactory factory;*/
   /* std::shared_ptr<MyObject> object_1 = factory.CreateObject<MyObject>();
    std::shared_ptr<MyObject> object_2 = factory.CreateObject<MyObject>(10);
    std::shared_ptr<MyObject> object_3 = factory.CreateObject<MyObject>(10,"Kirill");

    std::shared_ptr<MyStruct> struct_1 = factory.CreateObject<MyStruct>();*/

    /*MySingletonTest::InitInstace(10);*/
    //MySingletonTest* Singleton = MySingletonTest::Instance();
    //MySingletonTest* Singleton2 = MySingletonTest::Instance();

    {
       /* Player player;

        player.AttachComponent<HealthComponent>();
        HealthComponent* health1 =  player.GetComponent<HealthComponent>();

        if (health1)
        {
            std::cout << "found!\n";
            health1->PrintName();
        }
        else
        {
            std::cout << "NOT found!\n";
        }*/


       /* auto observer1 = std::make_shared<Observer>();
        auto observer2 = std::make_shared<Observer>();

        observer1->TryToSub();
        observer2->TryToSub();

        Subject::Notify();*/
    }
   
   

	std::cin.get();
}