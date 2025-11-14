#include "WorkerManager.h"
#include "Worker.h"

int main(){
    WorkerManager w0;
    int option = -1;
    Worker** p = new Worker*[5];
    int length = 0;
    while(1){
        w0.ShowMenu();
        cin >> option;
        switch(option){
            //系统退出功能
            case 0:
                cout << "Bye" << endl;
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
            default:
                break;
       }
       system("cls");
    }
}