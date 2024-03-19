#include <iostream>
using namespace std;

class Parent
{
  private:
  int age;
  string name;
  
  protected:
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

int main() 
{
    Child child;
    child.SetLocation("Chitradurga"); //Sets the location for both parent and child.

    child.EnterChildData(); // child can access members and functions.
    child.EnterParentData(); // child can access functions and members are not accessible.

    child.DisplayChildDetails();
    child.DisplayParentDetails();

    return 0;
}