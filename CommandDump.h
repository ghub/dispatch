#pragma once

#include "Command.h"

class CommandDump : public Command {
public:
    explicit CommandDump();
    virtual ~CommandDump();

    virtual bool understand(const char* command);
    virtual void explain();
    virtual int execute(int argc, char* argv[]);

private:
    CommandDump(const CommandDump&);
    CommandDump& operator=(const CommandDump&);

    const char* const command;
    const char* const alias;
};
