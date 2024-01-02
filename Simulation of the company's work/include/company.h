#pragma once
#include <iostream>
#include <cassert>
#include <random>
#include <vector>
int randRange(const int end);
class Employee
{
public:
    std::string Name;
};
class Worker: public Employee
{
private:
    int type = 0;
    friend class Manager;
public:
    char getType() const;
};
class Manager: public Employee
{
private:
    int OrderNumber, Seed;
    std::vector<Worker> Command;
public:
    Manager(const int inOrderNumber, const int inID, const int inEmpQuantity);
    void Start();
    bool isAllBusy();
    void printWorkers();
};