# pragma once

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
    public :
        MutantStack<T>() {return ;}
        MutantStack<T>(const MutantStack<T> &x) {  *this = x;  }
        ~MutantStack<T>() {return ;}

        MutantStack<T> &operator=(MutantStack<T> &x) {(void) x; return *this;}

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};
