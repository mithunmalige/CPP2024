#include <iostream>
using namespace std;

class Button
{
    public:
    virtual ~Button() = default;
    virtual void Paint() = 0;
};

class WindowsButton : public Button
{
    public:
    void Paint()
    {
        cout << "Windows button painted" << endl;
    }
};

class MacButton : public Button
{
    public:
    void Paint()
    {
        cout << "Mac button painted" << endl;
    }
};

class TextBox
{
    public:
    virtual ~TextBox() = default;
    virtual void Display() = 0;
};

class WindowsTextBox : public TextBox
{
    public:
    void Display()
    {
        cout << "Windows text box displayed" << endl;
    }
};

class MacTextBox : public TextBox
{
    public:
    void Display()
    {
        cout << "Mac text box displayed" << endl;
    }
};

class GUIFactory
{
    public:
    virtual ~GUIFactory() = default;
    // Provides an interface for creating families of related or 
    // dependent objects without specifying their concrete classes.
    virtual Button* CreateButton() = 0;
    virtual TextBox* CreateTextBox() = 0;
};

class WindowsGUIFactory : public GUIFactory
{
    public:
    Button* CreateButton() override
    {
        return new WindowsButton();
    }

    TextBox* CreateTextBox() override
    {
        return new WindowsTextBox();
    }
};

class MacGUIFactory : public GUIFactory
{
    public:
    Button* CreateButton() override
    {
        return new MacButton();
    }

    TextBox* CreateTextBox() override
    {
        return new MacTextBox();
    }   
};

int main()
{
    GUIFactory* gui = new WindowsGUIFactory();
    auto button = gui->CreateButton();
    button->Paint();

    return 0;
}
