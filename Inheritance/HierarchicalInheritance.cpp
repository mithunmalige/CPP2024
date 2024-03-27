/* Hierarchical Inheritace 2024 */
#include <iostream>
using namespace std;

class Animal
{
    public:
    void Show()
    {
        cout << "I am an animal" << endl;
    }
};

class Dog : public Animal
{
    public:
    void Bark()
    {
        cout << "Bow Bow Woof !!!" << endl;
    }
};

class Cat : public Animal
{
    public:
    void Meow()
    {
        cout << "Meow Meow !!!" << endl; 
    }
};

int main()
{
    Dog d;
    d.Show();
    d.Bark();

    Cat c;
    c.Show();
    c.Meow(); 

    return 0;
}