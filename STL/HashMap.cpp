#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <functional> // for std::hash.
#include <optional>
using namespace std;

//  {"s", i};
//   ^   ^   ^
//   |   |   |
// | 1 | 2 | 3 |
template<typename Key, typename Value>
class SimpleHashMap
{
    private:
    static const int DEFAULT_CAPACITY = 10; 
    std::vector<std::list<std::pair<Key, Value>>> buckets;
    int capacity; // the number of buckets in the hashmap. i.e. buckets.size();
    int size;  // the number of key-value pairs currently stored in hashmap.

    size_t hash(const Key& key) const 
    {
        return std::hash<Key>() (key) % capacity;
    }
    // pair is "apple" and 11;
    // if std::hash<Key>{}(key) returns 178934562, % 10 is applied and results in remainder 2.
    // which means the pair "apple" and 11 is stored in index 2 of bucket.

    // pair is "banana" and 12;
    // if std::hash<Key>{}(key) returns 987654321, % 10 is applied and results in remainder 1.
    // which means the pair "banana" and 12 is stored in index 1 of bucket.

    public:
    SimpleHashMap(const int initialCapacity = DEFAULT_CAPACITY):
        capacity(initialCapacity),
        size(0),
        buckets(capacity)
    {}

    void insert(const Key& key, const Value& value)
    {
        size_t index = hash(key);
        for (auto& pair : buckets[index])
        {
            if (pair.first == key)
            {
                pair.second = value; //update the value.
            }
        }
        buckets[index].push_back({key, value});
        size++;
    }

    std::optional<Value> get(const Key& key)
    {
        size_t index = hash(key);
        for (auto& pair : buckets[index])
        {
            if (pair.first == key)
                return pair.value;
        }
        return std::nullopt;
    }

    void remove(const Key& key)
    {
        size_t index = hash(key);
        auto& bucket = buckets[index];
        for (auto it = bucket.begin(); it != bucket.end(); it++)
        {
            if (it->first == key)
            {
                it = bucket.erase(it);
                size--;
                return;        
            }
        }
    }

    int getSize() const
    {
        return size;
    }

    int getCapacity() const
    {
        return capacity;
    }

    void display()
    {
        for (int i = 0; i < capacity; i++) // vector iteration.
        {
            for (auto& pair : buckets[i])  // list iteration.
            {
                cout << "[" << pair.first << " " << pair.second << "]";
            }
            cout << endl;
        }

    }
};

int main()
{
    SimpleHashMap<std::string, int> hashMap(20);

    hashMap.insert("apple", 1);
    hashMap.insert("banana", 2);
    hashMap.insert("pineapple", 3);

    hashMap.display();

    return 0;
}

