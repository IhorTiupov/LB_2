#pragma once

template<class T, int N>
class List
{
public:
    List() : m_arr(new T[N]), m_sizeArr(N), m_currSize(0)
    {}

    size_t size() const
    {
        return m_currSize;
    }

    const T& operator[](int index) const
    {
        return m_arr[index];
    }

    void operator+=(const T& value)
    {
        if (m_currSize < m_sizeArr)
        {
            m_arr[m_currSize++] = value;
        }
    }

private:
    T*  m_arr;
    int m_sizeArr;
    int m_currSize;
};

