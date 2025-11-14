#include "Worker.h"

class Staff:public Worker{
public:
    Staff(int id, string name, int dep);
    ~Staff();
    virtual void ShowInfo();
    virtual string GetDep();
};