#include "Worker.h"

class Manager:public Worker{
public:
    Manager(int id, string name, int dep);
    ~Manager();
    virtual void ShowInfo();
    virtual string GetDep();
};