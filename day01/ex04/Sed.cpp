#include "Sed.hpp"

void	Sed::replacee( Sed *a )
{
    int i;
    a->index = a->line.find(a->find);
    if (a->index == -1)
    {    
        // a->writef << a->line << std::endl;
        return ;
    }
    a->line.erase(a->index, a->find.length());
    i = a->index;
    replacee(a);
    a->line.insert(i, a->repl);
}