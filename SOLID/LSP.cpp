/* LSP violation */
#include <iostream>
using namespace std;

class Bird
{
    public:
    virtual ~Bird() = default;
    virtual void MakeSound()
    {

    }
};

class FlyingBird : public Bird
{
    public:
    virtual void fly() = 0;
};

class Sparrow : public FlyingBird
{
    public:
    void fly() override
    {
        cout << "I am sparrow and I am flying" << endl;
    }
};

class Eagle : public FlyingBird
{
    public:
    void fly() override
    {
        cout << "I am eagle and I am flying" << endl;
    }
};

class Swan : public Bird
{
    public:
    void MakeSound() override
    {
        cout << "I am swan and I am making sound" << endl;
    }
};

class BirdsFlying
{
    public:
    BirdsFlying() = default;
    void FlyTheBirds(FlyingBird& bird)
    {
        bird.fly();
    }
};

class BirdsSounding
{
    public:
    BirdsSounding() = default;
    void Sound(Bird& bird)
    {
        bird.MakeSound();
    }
};

int main()
{
    Eagle eagle;
    Sparrow sparrow;
    Swan swan;

    BirdsFlying fbirds;
    fbirds.FlyTheBirds(eagle);
    fbirds.FlyTheBirds(sparrow);

    BirdsSounding bird;
    bird.Sound(swan); // Correct LSP

    return 0;
}
