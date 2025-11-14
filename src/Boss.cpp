#include "Boss.h"

Boss::Boss(int id, string name, int dep){
    m_id = id;
    m_name = name;
    m_dep = dep;
}

Boss::~Boss(){
}

void Boss::ShowInfo(){
    cout << "ID: " << m_id << " | " << "NAME: " << m_name << " | " << "Department: " << m_dep << " | " << "Role: " << GetDep() << endl;
}

string Boss::GetDep(){
    return "Boss";
}