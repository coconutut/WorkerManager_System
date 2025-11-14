#include "WorkerManager.h"
#include "Worker.h"

int main(){
    WorkerManager w0;
    int option = -1;
    Worker* p[10];//栈区，自动释放
    // Worker** p = new Worker*[10]; //堆区，需手动释放
    int length = 0;
    //初始化
    w0.Init(p, &length);
    while(1){
        w0.ShowMenu();
        cin >> option;
        switch(option){
            //系统退出功能
            case 0:
                cout << "Bye" << endl;
                w0.Save(p, &length);
                exit(0);
            //添加职工功能
            case 1:
                w0.CreateWorker(p, &length);
                break;
            //查找职工功能
            case 2:
                w0.SearchWorker(p, &length);
                break;
            //删除职工功能
            case 3:
                w0.DeleteWorker(p, &length);
                break;
            //排序职工功能
            case 4:
                w0.SortWorker(p, &length);
                break;
            case 5:
                w0.WorkerCount(p, &length);
            default:
                break;
       }
       system("cls");
    }
    //释放内存，防止泄露
    for(int i = 0; i < length; i++) {
        delete p[i];
    }
}