/* OCP */
#include <iostream>
#include <memory>
using namespace std;

class Notification // closed for modification.
{
    public:
    virtual ~Notification() = default;
    virtual void Notify() = 0;
};

// open for extension
class PushNotification : public Notification
{
    public:
    void Notify()
    {
        cout << "Send push notification" << endl;
    }
};

class SMSNotification : public Notification
{
    public:
    void Notify()
    {
        cout << "Send SMS notification" << endl;
    }
};

class EmailNotification : public Notification
{
    public:
    void Notify()
    {
        cout << "Send email notification" << endl;
    }
};

class NotificationSender
{
    public:
    NotificationSender() = default;
    void SendNotifications(const std::string& message, const std::string receipient,
        const std::shared_ptr<Notification>& notifier_)
    {
        notifier_->Notify();
    }
};


int main()
{
    auto pushNotifier = std::make_shared<PushNotification>();
    auto smsNotifier = std::make_shared<SMSNotification>();
    NotificationSender ns;
    ns.SendNotifications("Mithun Malige", "mithunmalige@gmail.com", pushNotifier);
    ns.SendNotifications("Mithun Malige", "mithunmalige@gmail.com", smsNotifier);

    return 0;
}
