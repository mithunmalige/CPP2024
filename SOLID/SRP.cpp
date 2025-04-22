#include <iostream>
using namespace std;

class UserData
{
    public:
    UserData(const std::string& name_, const std::string& email_):
        userName_(name_),
        userEmail_(email_)
    {}

    std::string GetUserName() const
    {
        return userName_;
    }

    std::string GetEmail() const
    {
        return userEmail_;
    }

    std::string userName_;
    std::string userEmail_;
};

/* Single responsibility */
class SaveToDataBase
{
    public:
    void SaveTheData(UserData& ud)
    {
        cout << "Saved to user data to Database for the user name : "
        << ud.GetUserName() << endl;
    }
};

/* Single responsibility */
class SendEmail
{
    public:
    void SendTheEmail(UserData& ud)
    {
        cout << "Sent an email to " << ud.GetEmail() << endl;
    }
};

int main()
{
    UserData ud("Mithun Malige", "mithunmalige@gmail.com");
    
    SaveToDataBase sDB;
    sDB.SaveTheData(ud);

    SendEmail sEmail;
    sEmail.SendTheEmail(ud);

    return 0;
}

