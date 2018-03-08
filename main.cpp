#include <QCoreApplication>
#include <iostream>
#include "golf.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Start program.\n";

    {
        // #0 default constructor test
        std::cout << "...............\n";
        std::cout << "#0 default constructor test\n";
        Golf g1;
        g1.showGolf();

        // #1 Non-interactive input of 1 player
        std::cout << "...............\n";
        std::cout << "#1 Non-interactive input of 1 player\n";
        Golf ann("Ann Birdfree", 24);

        // #2 Interactive input of 1 player
        std::cout << "...............\n";
        std::cout << "#2 Interactive input of 1 player\n";
        Golf andy;
        andy.setGolf();
        andy.showGolf();

        // #3 Interactive input of 2 players
        std::cout << "...............\n";
        std::cout << "#3 Interactive input of 2 players\n";
        const int N = 2;
        Golf players[2];
        for (int i = 0; i < N; ++i) {
            int res = players[i].setGolf();
            players[i].showGolf();
            if(!res)
                break;
        }


    }
    std::cout << "Finish program.\n";

    return a.exec();
}
