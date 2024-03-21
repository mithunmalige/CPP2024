#include <iostream>
using namespace std;

class Father
{ 
  protected: // If it is common across base and childs, keep it in protected mode.
  int fatherCode;
  
  public:
  void EnterFatherCode()
  {
    cin >> fatherCode;
  }
};

class Mother
{
  protected:
  int motherCode;

  public:
  void EnterMotherCode()
  {
    cin >> motherCode;
  }
  
};

class Kid : public Father, public Mother
{
  private:
  int childCode;

  public:
  int GetChildCode()
  {
    // chilcCode is product of fatherCode and motherCode
    childCode = fatherCode * motherCode;
    return childCode;
  } 
};

int main() 
{
    Kid kid;
    kid.EnterFatherCode();
    kid.EnterMotherCode();

    cout << "The child code = " << kid.GetChildCode() << endl;
    return 0;
}