#include <iostream>
using namespace std;

class Singleton
{
    private:
    Singleton() = default;

    Singleton(Singleton& other) = delete;
    Singleton& operator = (Singleton& other) = delete;

    int x;

    public:
    static Singleton& GetInstance() // thread-safe
    {
        static Singleton instance;
        return instance;
    }

    int GetValue() { return x; }
    void SetValue(int x_) { x = x_; }
};

int main()
{
    Singleton& ins1 = Singleton::GetInstance();
    ins1.SetValue(1001);

    Singleton& ins2 = Singleton::GetInstance();
    int value = ins2.GetValue();
    cout << value << endl;

    cout << "Singleton executed" << endl;

    return 0;
}
