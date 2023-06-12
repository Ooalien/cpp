#include "PmergeMe.hpp"

template <typename T>
void printList(const std::list<T> &lst)
{
    typename std::list<T>::const_iterator it;
    for (it = lst.begin(); it != lst.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void printDeque(const std::deque<T> &dq)
{
    typename std::deque<T>::const_iterator it;
    for (it = dq.begin(); it != dq.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::print(double list, double dq)
{
    std::cout << "Time to process a range of " << this->list.size() << " elements with std::list : " << list << " us" << std::endl;
    std::cout << "Time to process a range of " << this->list.size() << " elements with std::deque : " << dq << " us" << std::endl;
}

template <typename T>
void merge(T &lst, typename T::iterator left, typename T::iterator mid, typename T::iterator right)
{
    T leftDeque(left, mid);
    T rightDeque(mid, right);

    (void)lst;
    typename T::iterator it = left;
    typename T::iterator leftIt = leftDeque.begin();
    typename T::iterator rightIt = rightDeque.begin();

    while (leftIt != leftDeque.end() && rightIt != rightDeque.end())
    {
        if (*leftIt <= *rightIt)
        {
            *it = *leftIt;
            ++leftIt;
        }
        else
        {
            *it = *rightIt;
            ++rightIt;
        }
        ++it;
    }

    while (leftIt != leftDeque.end())
    {
        *it = *leftIt;
        ++leftIt;
        ++it;
    }

    while (rightIt != rightDeque.end())
    {
        *it = *rightIt;
        ++rightIt;
        ++it;
    }
}

// Merge-insertion sort for list
template <typename T>
void mergeInsertionSort(T &lst)
{
    int size = lst.size();
    if (size < 2)
        return;

    int step = 1;
    while (step < size)
    {
        typename T::iterator it = lst.begin();
        for (int i = 0; i < step; ++i)
            ++it;

        while (it != lst.end())
        {
            typename T::iterator first1 = lst.begin();
            typename T::iterator last1 = it;
            typename T::iterator first2 = it;
            typename T::iterator last2 = it;
            for (int i = 0; i < step && last2 != lst.end(); ++i)
            {
                ++last2;
                ++it;
            }

            merge(lst, first1, last1, last2);

            while (first1 != last2)
            {
                ++first1;
                ++first2;
            }
        }

        step *= 2;
    }
}

PmergeMe::PmergeMe(char **av)
{
    parser(av);
    (void)av;
    std::cout << "Before: ";
    printList<int>(list);
    clock_t startTime = clock();

    mergeInsertionSort<std::list<int> >(list);
    clock_t endTime = clock();

    float listtime = static_cast<float>(endTime - startTime) / CLOCKS_PER_SEC * 10000000.0;

    clock_t startTime2 = clock();

    mergeInsertionSort<std::deque<int> >(deque);
    clock_t endTime2 = clock();
    float dqtime = static_cast<float>(endTime2 - startTime2) / CLOCKS_PER_SEC * 10000000.0;

    std::cout << "After: ";
    printList<int>(list);
    print(listtime, dqtime);
}

bool is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

void PmergeMe::parser(char **av)
{
    for (int i = 0; av[i]; i++)
    {
        std::string tmp(av[i]);
        if (is_digits(tmp))
        {
            if (stol(tmp) <= INT_MAX)
            {
                try
                {
                    list.push_back(stoi(tmp));
                    deque.push_back(stoi(tmp));
                }
                catch (std::exception &e)
                {
                    std::cout << e.what() << std::endl;
                }
            }
            else
            {
                std::cout << "Error." << std::endl;
                exit(0);
            }
        }
        else
        {
            std::cout << "Error." << std::endl;
            exit(0);
        }
    }
}

PmergeMe &PmergeMe::operator=(PmergeMe &o)
{
    list = o.getlist();
    deque = o.getdeque();
    return (*this);
}

std::list<int> PmergeMe::getlist()
{
    return list;
}

std::deque<int> PmergeMe::getdeque()
{
    return deque;
}
