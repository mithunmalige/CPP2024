// this capture clause for lambda //

#include <iostream>
#include <algorithm>

using namespace std;

class Counter
{
    private:
    int count;

    public:
    Counter() : count(0)
    {}

    void Increment()
    {
        auto incrementLambda = [*this]() mutable{
            count++;
        };

        incrementLambda();
    }

    int GetCount()
    {
        cout << count << endl;
        return count;
    }
};

int main()
{
    Counter cnt;
    cnt.Increment();
    cnt.Increment();

    cnt.GetCount();
    return 0;
}