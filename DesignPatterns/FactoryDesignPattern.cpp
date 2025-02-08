/* Factory design pattern - memory check */

#include <iostream>
#include <memory>
using namespace std;

class Product
{
    public:
    virtual void Operation() = 0;
};

class ProductA : public Product
{
    public:
    void Operation()
    {
        cout << "operation of Product A" << endl; 
    }
};

class ProductB : public Product
{
    public:
    void Operation()
    {
        cout << "operation of Product B" << endl;
    }
};

class Factory 
{
    public:
    virtual std::unique_ptr<Product> CreateProduct() = 0;
};

class FactoryA : public Factory
{
    public:
    std::unique_ptr<Product> CreateProduct()
    {
        return std::make_unique<ProductA>();
    }
};

class FactoryB : public Factory
{
    public:
    std::unique_ptr<Product> CreateProduct()
    {
        return std::make_unique<ProductB>();
    }
};

int main()
{
    std::unique_ptr<Factory> fact = std::make_unique<FactoryA>();
    auto product = fact->CreateProduct();
    product->Operation();

    return 0;
}
