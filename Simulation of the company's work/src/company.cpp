#include <company.h>
char Worker::getType() const { return '@' + type; }

int randRange(const int end) { return (std::rand() % end) + 1; }


Manager::Manager(const int inOrderNumber, const int inID, const int inEmpQuantity): OrderNumber(inOrderNumber),
                                                                                    Seed(inOrderNumber + inID)
{
    assert(OrderNumber >= 0);
    assert(inID >= 0);
    assert(inEmpQuantity > 0);
    Command.resize(inEmpQuantity);
    std::srand(Seed);
    for (int i = 0; i < inEmpQuantity; i++) {
        std::cout << "Please, enter the worker name: " << std::endl;
        std::cin >> Command[i].Name;
    }
    Start();
}

void Manager::Start()
{
    int numTasks = randRange(Command.size());
    for (int i = 0, j = 0; i < Command.size() && j < numTasks; i++) {
        if (Command[i].type == 0) {
            Command[i].type = randRange(3);
            j++;
        }
    }
}

bool Manager::isAllBusy() {
    for (auto &i: Command)
        if (i.type == 0) return false;
    return true;
}

void Manager::printWorkers() {
    for (auto &i: Command)
        if (i.type == 0)
            std::cout << i.Name << " isn't busy" << std::endl;
        else
            std::cout << i.Name << " is busy with task type of " << i.getType() << std::endl;
}