/* Singleton design pattern - 2024 */

#include <iostream>
using namespace std;

class Singleton
{
    private:
    static Singleton* singletonPtr;

    /* Private constructor is kept because there 
    is no space for creation of object without 
    static method GetInstance */
    Singleton()
    {

    }

    public:
    Singleton(const Singleton&) = delete;
    Singleton& operator = (const Singleton& obj) = delete;

    static Singleton* GetInstance()
    {
        if (singletonPtr == nullptr)
        {
            singletonPtr = new Singleton();
            cout << "The singleton object is instantiated" << endl;
            return singletonPtr;
        }
        cout << "The instance is already created. So one more object cannot be created." << endl;
        return nullptr;
    } 
};

Singleton* Singleton::singletonPtr = nullptr;

int main()
{
    // Singleton s; --> cannot create since there is default constructor.

    Singleton* ptr1 = Singleton::GetInstance();
    // Singleton ptr2(*ptr1); --> wont work because of line 20.
    // Singleton ptr2 = *ptr1; --> wont work because of line 21.

    // Only way to use another pointer is via static functions.
    Singleton* ptr2 = Singleton::GetInstance();

    return 0;
}