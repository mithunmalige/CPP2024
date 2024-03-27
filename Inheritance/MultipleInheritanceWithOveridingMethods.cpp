#include <iostream>
using namespace std;

class Father
{ 
  protected: // If it is common across base and childs, keep it in protected mode.
  int fatherCode;
  
  public:
  void EnterCode()
  {
    cin >> fatherCode;
  }
};

class Mother
{
  protected:
  int motherCode;

  public:
  void EnterCode()
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
    kid.Father::EnterCode(); 
    // EnterCode(&kid) --> EnterCode(Kid const* this) 
    // virtually hidden due to public function
    // Father::EnterCode(Kid const* k)
    // {
    //     cin >> k->fatherCode;
    // }
    kid.Mother::EnterCode();

    cout << "The child code = " << kid.GetChildCode() << endl;
    return 0;
}
