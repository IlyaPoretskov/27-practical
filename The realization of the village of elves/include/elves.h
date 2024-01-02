#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Branch;

class Home {
    Branch* parent;
public:
    string elve;
    Home(): parent(nullptr) {}

    friend class Branch;
};



class Branch
{
    Branch* parent;
    vector<Branch> branches;
    vector<Home> homes;
public:
    Branch(): parent(nullptr) {}

    Branch* getTopBranch()
    {
        //Если это дерево
        if (parent == nullptr) return this;
        //Если это средняя ветка
        if (parent->parent == nullptr) return parent;
        //Если это маленькая ветка
        return parent->getTopBranch();
    }
    Branch* getBranchFirst() const
    {
        //Если это дерево
        if (parent == nullptr) return nullptr;
        //Если это средняя ветка
        if (parent->parent == nullptr) return parent;
        //Если это маленькая ветка
        return parent->getBranchFirst();
    }
    void AddHomes(const int num) {
        homes.resize(num);
        for (int i = 0; i < num; i++) {
            homes[i].parent = this;
            cout << "Please, input name of elve: " << endl;
            cin >> homes[i].elve;
        }
    }

    void AddBranches(const int num, const int numHomes) {
        branches.resize(num);
        for (int i = 0; i < num; i++) {
            branches[i].parent = this;
            branches[i].AddHomes(numHomes);
        }
    }

    void GetNumNeighbors(int& num) const {
        for (int i = 0; i < homes.size(); i++) {
            if (homes[i].elve != "None") {
                cout << "Name: " << homes[i].elve << endl;
                num++;
            }
        }
        for (int i = 0; i < GetNumBranches(); i++) {
            branches[i].GetNumNeighbors(num);
        }
    }
    int GetNumBranches() const { return branches.size(); }
    Branch* GetBranch(const int i) { return &branches[i]; }

    bool FindElve(string& name) const {
        for (int i = 0; i < homes.size(); i++) {
            if (name == homes[i].elve) {
                Branch* b1 = getBranchFirst();
                int numNeighbors = 0;
                b1->GetNumNeighbors(numNeighbors);
                cout << "Number of Neighbors: " << numNeighbors << endl;
                return true;
            }
        }
        for (int i = 0; i < GetNumBranches(); i++) {
            if (branches[i].FindElve(name))
                return true;
        }
        return false;
    }
    bool FindElveStart(string& name) {
        Branch* tree = getTopBranch();
        return tree->FindElve(name);
    }
};

