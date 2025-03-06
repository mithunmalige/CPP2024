#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
    private:
        char* data;
        unsigned int length;

    public:
        MyString():
        data(nullptr),
        length(0){}

        MyString(const char* str)
        {
            if (str == nullptr)
            {
                data = nullptr;
                length = 0;
                return;
            }
            length = strlen(str);
            data = new char[length + 1];
            strcpy(data, str);
        }

        MyString(const MyString& other)
        {
            length = other.length;
            if (length == 0)
            {
                data = nullptr;
                return;
            }
            strcpy(data, other.data);
        }

        MyString& operator = (const MyString& other)
        {
            length = other.length;
            if (length == 0)
            {
                data = nullptr;
            }
            strcpy(data, other.data);
            return *this;
        }

        MyString(MyString&& other)
        {
            length = other.length;
            strcpy(data, other.data);
            other.length = 0;
            other.data = nullptr;
        }

        MyString& operator = (MyString&& other)
        {
            length = other.length;
            strcpy(data, other.data);
            other.length = 0;
            other.data = nullptr;
            return *this;
        }

        ~MyString()
        {
            delete [] data;
        }

        char& operator [](int index)
        {
            if(index > strlen(data))
            {
                throw std::out_of_range("range exceeds");
            }
            return data[index];
        }

        const char& operator [](int index) const
        {
            if(index > strlen(data))
            {
                throw std::out_of_range("range exceeds");
            }
            return data[index];
        }

        const char* c_str() const
        {
            return data;
        }

        size_t size() const
        {
            return length;
        }

        void append(char c)
        {
            char* newData = new char[length + 2];
            strcpy(newData, data);
            newData[length + 1] = c;
            newData[length + 2] = '\0';
            delete[] data;

            length = length + 2;
            data = new char[length];
            strcpy(data, newData);
        }
};
