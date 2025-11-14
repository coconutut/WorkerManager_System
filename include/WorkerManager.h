#pragma once
#include <iostream>
#include "Worker.h"
#include <fstream>
using namespace std;

#define Filename "File.txt"

class WorkerManager{
public:

    WorkerManager();
    //菜单显示
    void ShowMenu();
    //添加职工
    void CreateWorker(Worker* p[], int* lenp);
    //查找职工
    void SearchWorker(Worker* p[], int* lenp);
    //删除职工
    void DeleteWorker(Worker* p[], int* lenp);
    //排序职工
    void SortWorker(Worker* p[], int* lenp);
    //保存数据
    void Save();
    ~WorkerManager();

};