#include <cstring>
#include <iostream>

#include "CommandHelp.h"
#include "Commands.h"

CommandHelp::CommandHelp(
    Commands& commands)
    : commands(commands)
    , command("help")
{
}

CommandHelp::~CommandHelp()
{
}

bool CommandHelp::understand(const char* /*command*/)
{
    return true;
}

void CommandHelp::explain()
{
    std::cout << command << "  explain help" << std::endl;
}

int CommandHelp::execute(
    int /*argc*/,
    char* /*argv*/ [])
{
    commands.enumerate();
    return 0;
}
