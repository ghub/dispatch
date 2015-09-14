#include "Command.h"
#include "Commands.h"

Commands::Commands(
    Commands::Storage& storage)
    : storage(storage)
{
}

Commands::~Commands()
{
    for (Storage::reverse_iterator it = storage.rbegin(); it != storage.rend(); ++it) {
        Command* command = *it;
        delete command;
    }
}

void Commands::add(Command* command)
{
    storage.push_back(command);
}

void Commands::enumerate()
{
    for (StorageIt it = storage.begin(); it != storage.end(); ++it) {
        Command* command = *it;
        command->explain();
    }
}

int Commands::dispatch(int argc, char* argv[])
{
    for (StorageIt it = storage.begin(); it != storage.end(); ++it) {
        Command* command = *it;
        if (command->understand(argv[1])) {
            return command->execute(--argc, ++argv);
        }
    }
    return -1;
}
