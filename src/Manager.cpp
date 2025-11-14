#include "Manager.h"

Manager::Manager(int id, string name, int dep){
    m_id = id;
    m_name = name;
    m_dep = dep;
}

Manager::~Manager(){  
}

string Manager::GetDep(){
    return "Manager";
}

void Manager::ShowInfo(){
    cout << "ID: " << m_id << " | " << "NAME: " << m_name << " | " << "Department: " << m_dep << " | " << "Role: " << GetDep() << endl;
}