#include "Worker.h"

class Boss:public Worker{
public:
    Boss(int id, string name, int dep);
    ~Boss();
    virtual void ShowInfo();
    virtual string GetDep();
};