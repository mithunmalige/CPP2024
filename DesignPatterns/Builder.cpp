/* Builder design pattern */
#include <iostream>
#include <optional>
#include <string>

using namespace std;

// 1. product
class Computer
{
    public:
    std::optional<std::string> cpu;
    std::optional<std::string> ram;

    void Display()
    {
        if(cpu.has_value())
            cout << "CPU:" << cpu.value() << std::endl;

        if(ram.has_value())
            cout << "RAM:" << ram.value() << std::endl;
    }
};

// 2. Builder Interface
class ComputerBuilder
{
    public:
    virtual ~ComputerBuilder() = default;
    virtual ComputerBuilder& SetCPU(const std::string& val) = 0;
    virtual ComputerBuilder& SetRAM(const std::string& ram) = 0;
    virtual Computer& Build() = 0;
};

// 3. concrete builder
class DesktopComputer : public ComputerBuilder
{
    private:
    Computer computer;

    public:
    ComputerBuilder& SetCPU(const std::string& val) override
    {
        computer.cpu = val;
        return *this;
    }

    ComputerBuilder& SetRAM(const std::string& val) override
    {
        computer.ram = val;
        return *this;
    }

    Computer& Build() override
    {
        return computer;
    }
};

// 4. laptop builder
class LaptopComputer : public ComputerBuilder
{
    private:
    Computer computer;

    public:
    ComputerBuilder& SetCPU(const std::string& val) override
    {
        computer.cpu = val;
        return *this;
    }

    ComputerBuilder& SetRAM(const std::string& val) override
    {
        computer.ram = val;
        return *this;
    }

    Computer& Build() override
    {
        return computer;
    }
};

int main()
{
    DesktopComputer desktopBuilder;
    desktopBuilder.SetCPU("Desktop cpu");
    desktopBuilder.SetRAM("Desktop RAM");
    desktopBuilder.Build().Display();

    LaptopComputer laptopBuilder;
    laptopBuilder.SetCPU("Laptop cpu");
    laptopBuilder.SetRAM("Laptop RAM");
    laptopBuilder.Build().Display();
    

    return 0;
}







