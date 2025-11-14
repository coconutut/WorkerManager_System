#pragma once
#include <iostream>
using namespace std;

class Worker{
public:
    virtual void ShowInfo() = 0;
    virtual string GetDep() = 0;

    int m_id;
    string m_name;
    int m_dep;
};