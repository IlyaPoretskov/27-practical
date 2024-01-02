#include <elves.h>
#include <random>

#define NUM_TREES 5
using namespace std;

int randRange(const int start, const int end) { return rand() % (end - start + 1) + start; }

int main()
{
    auto* trees = new Branch[NUM_TREES];
    for (int i = 0; i < NUM_TREES; i++) {
        trees[i].AddBranches(randRange(3, 5), randRange(2, 3));
        for (int j = 0; j < trees[i].GetNumBranches(); j++) {
            Branch* br = trees[i].GetBranch(j);
            br->AddBranches(randRange(3, 5), randRange(2, 3));
        }
    }

    string elve;
    cout << "Please, input name of elve to find: " << endl;
    cin >> elve;
    for (int i = 0; i < NUM_TREES; i++) {
        trees[i].FindElveStart(elve);
    }
}
