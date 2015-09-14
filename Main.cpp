#include "CommandDump.h"
#include "CommandHelp.h"
#include "Commands.h"

int main(int argc, char* argv[])
{
    Commands::Storage storage;
    Commands commands(storage);
    commands.add(new CommandDump);
    commands.add(new CommandHelp(commands));
    return commands.dispatch(argc, argv);
}
