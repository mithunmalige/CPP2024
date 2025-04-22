/* violates the OCP */
#include <iostream>
using namespace std;

class Notification
{
    public:
    void SendNotification(const std::string& message, const std::string& receipient,
        const std::string& type)
    { // open for extension ? NO, Modifies the core class.
      // closed for modification ? NO, with new type, we can modify based on type by using if else if else.  
        if (type == "push")
        {
            SendPushNotification("Push notification", "mithunmalige@gmail.com");
        }
        else if (type == "sms")
        {
            SendSMSNotification("SMS notification", "mithunmalige@gmail.com");
        }
        else if (type == "email")
        {
            SendEmailNotification("SMS notification", "mithunmalige@gmail.com");
        }
    }

    private:
    void SendPushNotification(const std::string& message, const std::string& receipient)
    {
        cout << "Sent push notification" << endl;
    }

    void SendSMSNotification(const std::string& message, const std::string& receipient)
    {
        cout << "Sent sms notification" << endl;
    }

    void SendEmailNotification(const std::string& message, const std::string& receipient)
    {
        cout << "Sent email notification" << endl;
    } 

    std::string message_;
    std::string sender_;
};

int main()
{
    Notification notificationSender;
    notificationSender.SendNotification("Mithun Malige", "mithunmalige@gmail.com", "push");
    notificationSender.SendNotification("Mithun Malige", "mithunmalige@gmail.com", "email");
    return 0;
}

