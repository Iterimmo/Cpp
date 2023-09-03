#include <iostream>
#include <unordered_map>
#include <stdexcept>

template<class Key, class Value>
class dictionary
{
public:
    virtual ~dictionary() = default;

    virtual const Value& get(const Key& key) const = 0;
    virtual void set(const Key& key, const Value& value) = 0;
    virtual bool is_set(const Key& key) const = 0;
};

template<class Key, class Value>
class my_dictionary : public dictionary<Key, Value>
{
private:
    std::unordered_map<Key, Value> data;

public:
    const Value& get(const Key& key) const override
    {
        auto it = data.find(key);
        if (it == data.end())
        {
            throw not_found_exception<Key>(key);
        }
        return it->second;
    }

    void set(const Key& key, const Value& value) override
    {
        data[key] = value;
    }

    bool is_set(const Key& key) const override
    {
        return data.find(key) != data.end();
    }
};

template<class Key>
class not_found_exception : public std::exception
{
private:
    Key key;

public:
    not_found_exception(const Key& key) : key(key) {}

    const Key& get_key() const noexcept
    {
        return key;
    }

    const char* what() const noexcept override
    {
        return "Key not found in dictionary";
    }
};

int main()
{
    my_dictionary<std::string, int> dict;

    try
    {
        dict.set("one", 1);
        dict.set("two", 2);

        std::cout << dict.get("one") << std::endl;
        std::cout << dict.get("three") << std::endl;  // This should throw not_found_exception
    }
    catch (const not_found_exception<std::string>& ex)
    {
        std::cerr << "Key not found: " << ex.get_key() << std::endl;
    }

    return 0;
}
