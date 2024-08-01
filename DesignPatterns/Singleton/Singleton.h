#pragma once
#include <iostream>
#include <memory>

template<class T>
class Singleton
{
public:
    // Static method to get the singleton instance
    template<typename... Args>
    static void InitInstace(Args&&... args)
    {
        if (instance == nullptr)
        {
            instance = new T(std::forward<Args>(args)...);
        }
    }

    static T* Instance()
    {
        if (instance == nullptr)
        {
            return nullptr;
        }

        return instance;
    }

    // Static method to clean up the singleton instance
    static void Clean()
    {
        delete instance;
        instance = nullptr;
    }

    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton(Singleton&&) noexcept = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton& operator=(Singleton&&) noexcept = delete;

protected:
    // Protected constructor to prevent instantiation from outside
    Singleton() = default;
    virtual ~Singleton() = default;
   

private:
    static T* instance;
};

// Define the static member
template<class T>
T* Singleton<T>::instance = nullptr;
