/* Single responsibility principle(SRP) */

#include <iostream>
using namespace std;

class User
{
    /* Violates the SRP becuase it contains the user data and 
     saves it to database and sends the email as well */
    public:
    void SaveToDataBase()
    {

    }

    void SaveEmail()
    {

    }

    private:
    std::string username_;
    std::string email_;
};

class UserData
{
    public:
    std::string GetUserName() const
    {
        return username_;
    }

    std::string GetEmailService() const 
    {
        return email_;
    }

    private:
    std::string username_;
    std::string email_;
};

class UserEmail
{
    public:
    void Save(UserData& ud) const
    {

    }
};

class UserDataBase
{
    public:
    void SendEmail(UserData& ud, const std::string& ref_) const
    {

    }
};

int main()
{
    UserData ud;

    UserEmail ue;
    ue.Save(ud);

    UserDataBase ub;
    ub.SendEmail(ud, "Mithun");

    return 0;
}
