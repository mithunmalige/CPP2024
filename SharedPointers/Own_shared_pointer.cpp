#include <iostream>
using namespace std;

class Counter
{
    public:
    Counter() : m_cnt(0)
    {}

    Counter(const Counter&) = delete;
    Counter& operator = (const Counter&) = delete;

    ~Counter(){}

    void reset()
    {
        m_cnt = 0;
    }

    unsigned int get()
    {
        return m_cnt;
    }

    void operator ++ ()
    {
        m_cnt++;
    }

    void operator ++ (int x)
    {
        ++m_cnt;
    }

    void operator -- ()
    {
        m_cnt--;
    }

    void operator -- (int x)
    {
        --m_cnt;
    }

    friend ostream& operator << (ostream& os, Counter& counter)
    {
        os << "Count = " << counter.m_cnt << endl;
        return os;
    }

    private:
    unsigned int m_cnt;
};

template <typename T>
class Shared_ptr
{
    public:
    Shared_ptr(T* ptr = nullptr)
    {
        m_ptr = ptr;
        cnt = new Counter();
        (*cnt)++;
    }

    Shared_ptr(Shared_ptr<T>& ptr)
    {
        m_ptr = ptr.m_ptr;
        cnt = ptr.cnt;
        (*cnt)++;
    }

    Shared_ptr operator = (Shared_ptr<T>& ptr)
    {
        if(m_ptr != ptr)
        {
            if(m_ptr && cnt->get())
            {
                (*cnt)--;
                if(cnt->get() == 0)
                {
                    delete m_ptr;
                    delete cnt;
                }
            }
        }

        m_ptr = ptr;
        if(m_ptr)
        {
            cnt = ptr.m_cnt;
            (*cnt)++;
        }
    }

    ~Shared_ptr()
    {
        (*cnt)--;
        if (cnt->get() == 0)
        {
            delete m_ptr;
            delete cnt;
        }
    }

    T* get()
    {
        return m_ptr;
    }

    unsigned int use_count()
    {
        return cnt->get();
    }

    T& operator* ()
    {
        return *m_ptr;
    }

    T* operator-> ()
    {
        return m_ptr;
    }

    friend ostream& operator << (ostream& os, Shared_ptr<T>& ptr)
    {
        os << "The shared pointer address : " << ptr.get() << endl;
        os << *(ptr.cnt) << endl;
        return os;
    }

    private:
    Counter* cnt;

    T* m_ptr;
};


int main()
{
    Shared_ptr<int> ptr1(new int(10));
    *ptr1 = 100;
    cout << "The ptr1 shared_ptr" << endl;
    cout << ptr1;

    Shared_ptr<int> ptr2(ptr1);
    cout << "The ptr2 shared_ptr" << endl;
    cout << ptr2;

    Shared_ptr<int> ptr3 = ptr2;
    cout << "The ptr3 shared_ptr" << endl;
    cout << ptr3;

    cout << ptr1.use_count() << endl;
    cout << ptr2.use_count() << endl;
    cout << ptr3.use_count() << endl;

    return 0;
}