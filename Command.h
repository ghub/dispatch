#pragma once

class Command {
public:
    virtual ~Command() = 0;

    virtual bool understand(const char* command) = 0;
    virtual void explain() = 0;
    virtual int execute(int argc, char* argv[]) = 0;
};
