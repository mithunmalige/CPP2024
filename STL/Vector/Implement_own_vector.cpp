#include <iostream>
#include <stdexcept>
using namespace std;
template <typename T>
class MyVector
{
    private:
    T* data;
    unsigned int size;
    unsigned int capacity;

    public:
    MyVector(unsigned int initialCapacity = 10):
    size(0),
    capacity(initialCapacity)
    {
        data = new T[capacity];
    }

    ~MyVector()
    {
        delete []data;
    }

    MyVector(const MyVector& other)
    {
        this->size = other.size;
        this->capacity = other.capacity;
        this->data = new T[capacity];

        for (int i = 0; i < size; i++)
        {
            this->data[i] = other.data[i];
        }
    }

    MyVector& operator = (const MyVector& other)
    {
        if (this != &other)
        {
            delete []data;
            this->size = other.size;
            this->capacity = other.capacity;
            this->data = new T[capacity];

            for (int i = 0; i < size; i++)
            {
                this->data[i] = other.data[i];
            }
        }
        return *this;
    }

    MyVector(MyVector&& other) noexcept
    {
        this->data = other.data;
        this->size = other.size;
        this->capacity = other.capacity;

        other.data = nullptr;
        other.size = 0;
        other.capacity = 0;
    }

    MyVector& operator = (MyVector&& other) noexcept
    {
        if (this != other)
        {
            delete []data;
            this->data = other.data;
            this->size = other.size;
            this->capacity = other.capacity;

            other.data = nullptr;
            other.size = 0;
            other.capacity = 0;
        }
        return *this;
    }

    unsigned int getSize() const
    {
        return size;
    }

    unsigned int getCapacity() const
    {
        return capacity;
    }

    bool empty() const
    {
        return size == 0;
    }

    void push_back(const T& value) 
    {
        cout << "copy push_back" << endl;
        if (size == capacity)
        {
            capacity = (capacity == 0) ? 1 : capacity * 2;
            this->data = new T[capacity];

            T* newData = new T[capacity];
            for (int i = 0; i < size; i++)
            {
                newData[i] = data[i];
            }

            delete []data;
            data = newData; 
        }
        data[size++] = value;
    }

    void push_back(T&& value)
    {
        cout << "move push_back" << endl;
        if (size == capacity)
        {
            capacity = (capacity == 0) ? 1 : capacity * 2;
            this->data = new T[capacity];

            T* newData = new T[capacity];
            for (int i = 0; i < size; i++)
            {
                newData[i] = std::move(data[i]);
            }

            delete []data;
            data = newData; 
        }
        data[size++] = std::move(value);
    }

    T& operator [](int index)
    {
        return this->data[index];
    }

    const T& operator [](int index) const
    {
        return this->data[index];
    }

    T& at(unsigned int index)
    {
        if (index > size)
        {
            throw std::out_of_range("index is out of range");
        }
        return data[index];
    }

    const T& at(unsigned int index) const
    {
        if (index > size)
        {
            throw std::out_of_range("index is out of range");
        }
        return data[index];
    }

    void insert(unsigned int position, T value)
    {
        if (size == capacity)
        {
            capacity = (capacity == 0) ? 1 : capacity * 2;
            T* newData = new T[capacity];

            for (int i = 0; i < size; i++)
            {
                newData[i] = data[i];
            }

            delete []data;
            data = newData;
        }

        for (int i = size; i > position; i--)
        {
            data[i] = data[i-1];
        }

        data[position] = value;
        ++size;
    }

    void erase(unsigned int position)
    {
        for (int i = position; i < size; i++)
        {
            data[i] = data[i+1];
        }
        size--;
    }
};

int main()
{
    MyVector<int> vec;
    vec.push_back(1);
    vec.push_back(2);

    auto print = [&]()
    {
        for (int i = 0; i < vec.getSize(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    };

    print();

    vec.push_back(3);
    print();

    int x = 9;
    vec.push_back(x);
    print();

    vec.insert(2, 10);
    print();

    vec.erase(2);
    print();

    return 0;
}