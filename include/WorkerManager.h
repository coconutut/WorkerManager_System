#pragma once
#include <iostream>
#include "Worker.h"
#include <fstream>

using namespace std;
#define Filename "Database.txt"

class WorkerManager{
public:
    bool FileisEmpty;

    WorkerManager();
    //初始化（读取文件数据）
    void Init(Worker* p[], int* lenp);
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
    void Save(Worker* p[], int* lenp);
    //统计系统总人数
    void WorkerCount(Worker* p[], int* lenp);
    ~WorkerManager();

};