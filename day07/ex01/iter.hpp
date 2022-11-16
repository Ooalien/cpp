#pragma once

# include <iostream>

template<typename T>
void    iter(T *array, size_t l, void (*f)(T))
{
    for (size_t i = 0; i < l ; i++)
    {
        (*f)(array[i]);
    }
}