# pragma once

# include <iostream>

template<typename T>
typename T::iterator    easyfind(T &x, int tofind)
{
    typename T::iterator res;
    res = find(x.begin(), x.end(), tofind);
    if (res != x.end())
        return res;
    else
        throw std::exception();
}
