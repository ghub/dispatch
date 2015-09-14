#pragma once

#include <list>

class Command;

class Commands {
public:
    typedef std::list<Command*> Storage;

    explicit Commands(Storage& storage);
    virtual ~Commands();

    void add(Command* command);
    void enumerate();
    int dispatch(int argc, char* argv[]);

private:
    Commands(const Commands&);
    Commands& operator=(const Commands&);

    typedef Storage::iterator StorageIt;
    Storage& storage;
};
