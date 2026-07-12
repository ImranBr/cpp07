#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T>
void iter(const T *array, std::size_t length, void(*f)(const T &))
{
    if (!array || !f)
        return;
    for (size_t i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void iter(T *array, std::size_t length, void(*f)(T &))
{
    if (!array || !f)
        return;
    for (size_t i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void print(T &x)
{
    std::cout << x << std::endl;
}

template <typename T>
void printConst(const T &x)
{
    std::cout << x << std::endl;
}

template <typename T>
void increment(T &x)
{
    x++;
}

#endif