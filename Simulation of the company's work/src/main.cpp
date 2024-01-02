#include <company.h>

using namespace std;

int main()
{
    int quantity, ID;
    string name;
    cout << "           <<Simulation of the company's work>>" << endl;
    cout << "Please, input the name of the Head of the company: " << endl;
    cin >> name;
    cout << "Please, input the ID: " << endl;
    cin >> ID;
    cout << "Please, input commands quantity: " << endl;
    cin >> quantity;
    assert(quantity > 0);
    vector<Manager*> vec(quantity);
    for (int i = 0; i < quantity; ++i) {
        cout << "Please, input employees quantity: " << endl;
        int EmpQuantity;
        cin >> EmpQuantity;
        vec[i] = new Manager(i, ID, EmpQuantity);
        cout << "Please, input the name of the manager: " << endl;
        cin >> vec[i]->Name;
    }
    bool isAll = true;
    while(isAll)
    {
        isAll = false;
        for (int i = 0; i < quantity; ++i) {
            if (!vec[i]->isAllBusy()) {
                std::cout << vec[i]->Name << " gave to command another task" << std::endl;
                vec[i]->Start();
                isAll = true;
            }
        }
    }
    for (int i = 0; i < quantity; ++i) {
        vec[i]->printWorkers();
        delete vec[i];
    }
    vec.clear();
}