/* Interface segregation principle */

#include <iostream>
using namespace std;

class Worker
{
    public:
    virtual void Work() = 0;
    virtual void Eat() = 0;
    virtual void Rest() = 0;
};

class HumanWorker : public Worker
{
    public:
    void Work()
    {
        cout << "I am human and I can work" << endl;
    }

    void Eat()
    {
        cout << "I am human and I can eat" << endl;
    }

    void Rest()
    {
        cout << "I am human and I can rest" << endl;
    }
};

class RobotWorker : public Worker
{
    public:
    void Work()
    {
        cout << "I am Robot and I can work" << endl;
    }

    void Eat() // makes no sense
    {
        cout << "I am Robot and I can eat" << endl;
    }

    void Rest()
    {
        cout << "I am Robot and I can rest" << endl;
    }
};


// with ISP.
class IWork
{
    public:
    virtual void Work() = 0;
};

class IEat
{
    public:
    virtual void Eat() = 0;
};

class IRest
{
    public:
    virtual void Rest() = 0;
};

class Human : public IWork, public IEat, public IRest
{
    public:
    void Work() override
    {

    }

    void Eat() override
    {

    }

    void Rest() override
    {

    }
};

class Robot : public IWork, public IRest
{
    public:
    void Work() override
    {

    }

    void Rest() override
    {

    }
};

int main()
{
    Robot rob;
    rob.Work();
    rob.Rest();

    //rob.Eat() --> avoided.

    return 0;
}
