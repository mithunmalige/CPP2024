#include <iostream>
using namespace std;

class Parent
{
  private:
  int age;
  string name;
  
  protected: // If it is common across base and childs, keep it in protected mode.
  string location;
  
  public:
  void SetLocation(string location_)
  {
    location = location_;
  }
  
  void DisplayParentDetails()
  {
    cout << "The parents details are below" << endl;
    cout << "name = " << name << endl;
    cout << "age = " << age << endl;
    cout << "location = " << location << endl;
  }

  void EnterParentData()
  {
    cin >> name;
    cin >> age;
  }
};

class Child : public Parent
{
  private:
  int age;
  string name;

  public:
  void DisplayChildDetails()
  {
    cout << "The child's details are below" << endl; 
    cout << "name = " << name << endl;
    cout << "age = " << age << endl;
    cout << "location = " << location << endl;
  }

  void EnterChildData()
  {
    cin >> name;
    cin >> age;
  }
  
};

class GrandChild : public Child
{
  private:
  int age;
  string name;

  public:
  void DisplayGrandChildDetails()
  {
    cout << "The grand child's details are below" << endl; 
    cout << "name = " << name << endl;
    cout << "age = " << age << endl;
    cout << "location = " << location << endl;
  }

  void EnterGrandChildData()
  {
    cin >> name;
    cin >> age;
  }
};

int main() 
{
    GrandChild gChild;
    gChild.SetLocation("Chitradurga"); //Sets the location for both parent and child.

    gChild.EnterGrandChildData(); // gChild 
    gChild.EnterChildData(); // gChild can access child.
    gChild.EnterParentData(); // gChild can access parent.

    gChild.DisplayGrandChildDetails(); 
    gChild.DisplayChildDetails();
    gChild.DisplayParentDetails();

    return 0;
}