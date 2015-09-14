#pragma once

#include "Command.h"
class Commands;

class CommandHelp : public Command {
public:
    explicit CommandHelp(
        Commands& commands);
    virtual ~CommandHelp();

    virtual bool understand(const char* command);
    virtual void explain();
    virtual int execute(int argc, char* argv[]);

private:
    CommandHelp(const CommandHelp&);
    CommandHelp& operator=(const CommandHelp&);

    Commands& commands;
    const char* const command;
};
