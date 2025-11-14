#include "Staff.h"

Staff::Staff(int id, string name, int dep){
    m_dep = dep;
    m_id = id;
    m_name = name;
}

Staff::~Staff(){
}

void Staff::ShowInfo(){
    cout << "ID: " << m_id << " | " << "NAME: " << m_name << " | " << "Department: " << m_dep << " | " << "Role: " << GetDep() << endl;
}

string Staff::GetDep(){
    return "Staff";
}