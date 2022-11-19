#pragma once

# include <iostream>

template<typename T>
void swap(T &a, T &b)
{
    T s;

    s = a;
    a = b;
    b = s;
}

template <typename T>
const T &max(const T &a, const T &b)
{
    return (a > b) ? a : b;
}

template <typename T>
const T &min(const T &a, const T &b)
{
    return (a < b) ? a : b;
}
