#include "WorkerManager.h"
#include "Staff.h"
#include "Manager.h"
#include "Boss.h"

WorkerManager::WorkerManager(){

}

WorkerManager::~WorkerManager(){

}

void WorkerManager::CreateWorker(Worker* p[], int* lenp){
    int option;
    cout << "Please enter your option: " << endl;
    cout << "0 -> Staff " << endl;
    cout << "1 -> Manager " << endl;
    cout << "2 -> Boss " << endl;
    cin >> option;
    cout << "Please enter name: " << endl;
    string name;
    cin >> name;
    cout << "Please enter id: " << endl;
    int id;
    cin >> id;
    cout << "Please enter department id: " << endl;
    int dep;
    cin >> dep;
    switch(option){
        case 0:
            p[*lenp] = new Staff(id ,name, dep);
            *lenp += 1;
            break;
        case 1:
            p[*lenp] = new Manager(id ,name, dep);
            *lenp += 1;
            break;
        case 2:
            p[*lenp] = new Boss(id ,name, dep);
            *lenp += 1;
            break;
        default:
            break;
    }
    cout << "success." << endl;
    system("pause");
}

void WorkerManager::SearchWorker(Worker* p[], int* lenp){
    string name;
    cout << "Please enter Worker name for search: " << endl;
    cin >> name;
    for(int i = 0; i < *lenp; i++){
        if(p[i]->m_name == name){
            p[i]->ShowInfo();
            break;
        }
    }
    cout << "success." << endl;
    system("pause");
}

void WorkerManager::DeleteWorker(Worker* p[], int* lenp){
    string name;
    cout << "Please enter Worker name for delete: " << endl;
    cin >> name;
    for(int i = 0; i < *lenp; i++){
        if(p[i]->m_name == name){
            for(int j = i; j < *lenp - 1; j++){
                p[j] = p[j+1];
            }
            *lenp -= 1;
            break;
        }
    }
    cout << "success." << endl;
    system("pause");
}

void WorkerManager::SortWorker(Worker* p[], int* lenp){
    for(int i = 0; i < *lenp; i++){
        for(int j = *lenp - 1; j > i; j--){
            if(p[j]->m_id < p[j-1]->m_id){
                Worker* temp = p[j-1];
                p[j-1] = p[j];
                p[j] = temp;
            }
        }
    }
    for(int i = 0; i < *lenp; i++){
       p[i]->ShowInfo();
    }
    system("pause");
}

void WorkerManager::Save(){
    
}
