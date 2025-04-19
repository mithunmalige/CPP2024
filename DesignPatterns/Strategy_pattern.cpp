#include <iostream>
using namespace std;

class PaymentProcessing
{
    public:
    virtual ~PaymentProcessing() = default;
    virtual void ProcessPayment(int amount) = 0;
};

class CreditCardPayment : public PaymentProcessing
{
    private:
    int cardNo;
    int cvv;
    std::string nameOnCard;

    public:
    CreditCardPayment() = default;
    CreditCardPayment(int cardNo_, int cvv_, const std::string& nameOnCard_):
    cardNo(cardNo_),
    cvv(cvv_),
    nameOnCard(nameOnCard_)
    {}

    void ProcessPayment(int amount)
    {
        cout << "The amount transaction done for amount " << amount 
        << " via credit card" << endl;
        cout << "Card No : " << cardNo << endl;
        cout << "cvv : " << cvv << endl;
        cout << "nameOnCard : " << nameOnCard << endl;
    }
};

class PayPalPayment : PaymentProcessing
{
    private:
    std::string emailId;

    public:
    PayPalPayment() = default;
    PayPalPayment(const std::string& emailId_):
        emailId(emailId_)
    {}

    void ProcessPayment(int amount)
    {
        cout << "The amount transaction done for amount " << amount 
        << " via PayPal payment method" << endl;
        cout << "email id : " << emailId << endl;
    }
};

class Order
{
    private:
    int amount;
    PaymentProcessing* processing;

    public:
    Order(int amount_): 
    amount(amount_)
    {}

    void SetPaymentStrategy(PaymentProcessing* processing_)
    {
        processing = processing_;
    }

    void CheckOut()
    {
        cout << "Payment processed" << endl;
        processing->ProcessPayment(amount);
    }
};


int main()
{
    Order order(100);

    CreditCardPayment card(1234, 948, "Mithun Malige");
    PayPalPayment payPal("mithunmalige@gmail.com");

    order.SetPaymentStrategy(&card);
    order.CheckOut();

    return 0;
}
