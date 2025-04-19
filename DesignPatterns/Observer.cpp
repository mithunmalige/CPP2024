#include <iostream>
#include <vector>
using namespace std;

class Observer
{
    public:
    virtual ~Observer() = default;
    virtual void Update() = 0 ;
};

class DisplayUnit : public Observer
{
    public:
    DisplayUnit() = default;
    void Update()
    {
        cout << "The Display unit " <<  endl;
    }
};

class DataLogger : public Observer
{
    public:
    DataLogger() = default;
    void Update()
    {
        cout << "The data logger " << endl;
    }
};

class WeatherStation
{
    private:
    std::vector<Observer*> observable_;
    std::string data;

    public:
    WeatherStation() = default;
    void Attach(Observer* obs)
    {
        observable_.push_back(obs);
    }

    void Detach(Observer* obs)
    {
        for (auto it = observable_.begin(); it != observable_.end(); ++it) {
            if (*it == obs) {
                observable_.erase(it);
                break;
            }
        }
    }

    void SetWeatherData(const std::string& data_)
    {
        data = data_;
        cout << data << endl;
        Notify();
    }

    void Notify()
    {
        for (auto& o : observable_)
        {
            o->Update();
        }
    }
};

int main()
{
    WeatherStation weatherStation;

    /* Observers created */
    DisplayUnit display1;
    DisplayUnit display2;
    DataLogger dLogger;

    weatherStation.Attach(&display1);
    weatherStation.Attach(&display2);
    weatherStation.Attach(&dLogger);

    weatherStation.SetWeatherData("Temperature is 28 degree celsius");

    weatherStation.Detach(&display2);
    weatherStation.SetWeatherData("Temperature is 32 degree celsius");

    return 0;
}
