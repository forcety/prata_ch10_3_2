#ifndef GOLF_H
#define GOLF_H


class Golf
{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;
public:
    Golf(); // # default constructor
    Golf(const char * name, int hc);
    ~Golf();
    int setGolf();
    showGolf() const;

};

#endif // GOLF_H
