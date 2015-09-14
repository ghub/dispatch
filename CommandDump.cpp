#include <cstring>
#include <iostream>

#include "CommandDump.h"

CommandDump::CommandDump()
    : command("dump")
    , alias("alias")
{
}

CommandDump::~CommandDump()
{
}

bool CommandDump::understand(const char* command)
{
    return (strcmp(command, this->command) == 0) ||
        (strcmp(command, alias) == 0);
}

void CommandDump::explain()
{
    std::cout << command << "  explain dump" << std::endl;
}

int CommandDump::execute(
    int argc,
    char* argv[])
{
    std::cout << command;
    for (int i = 1; i < argc; ++i) {
        std::cout << " " << argv[i];
    }
    std::cout << std::endl;
    return 0;
}
