#pragma once

template<class A, class B>
class Pair
{
public:
    Pair() {}
    Pair(const A& key, const B& value) : m_key(key), m_value(value) {}

    const A& getKey() const { return m_key; }
    const B& getValue() const { return m_value; }

private:
    A m_key;
    B m_value;
};

