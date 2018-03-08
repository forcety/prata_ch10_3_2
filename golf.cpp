#include "golf.h"
#include <iostream>
#include <cstring>

Golf::Golf()
{
    std::cout << "Default constructor called\n";
    strcpy(fullname, "Heyyou");
    handicap = 0;
}

Golf::Golf(const char *name, int hc)
{
    std::cout << "Main constructor called "
              << "with arguments " << name << " and " << hc << "\n";
    strcpy(fullname, name);
    handicap = hc;
}

Golf::~Golf()
{
    std::cout << "Bye, " << fullname << " ! \n";
}

int Golf::setGolf()
{
    char line[Len];
    int hc;
    std::cout << "Enter fullname: ";
    std::cin.getline(line, Len);
    std::cout << "Complete line: " << line << "\n";
    std::cout << "Enter handicap: " ;
    std::cin >> hc;
    std::cin.get();


    if (line[0] == '\0')
    {
        std::cout << "Empty name!\n" ;
        return 0;
    }
    else
    {
        Golf g(line, hc);
        *this = g;
        return 1;
    }

}

Golf::showGolf() const
{
    std::cout << "showGolf called: ";
    std::cout << fullname << " " << handicap << "\n";
}
