#include <iostream>
#include <ModulesNorov.h>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    cout << "Task 9.1:" << endl;
    float W[] = {0.2, 1.3, 2.5, 4.4, 7.8, 9.7, 12.3, 15.6, 18.8, 23.3, 27.1, 31.7, 32.8};
    float result1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for(int i = 0;i < 12;i++){
        if(Beaufortmark(W[i]) == result1[i]){
            cout << "Status: passed" << endl;
        }
        if(Beaufortmark(W[i]) != result1[i]){
            cout << "Status: failed" << endl;
        }
    }
    cout << "\nTask 9.2:" << endl;
    int length[12]={53,54,55,56,57,58,59,60,61,62,63,51};
    char sizeh[12]={'XS','XS','S','S','M','M','L','L','XL','XL','Wrong size','Wrong size'};
    for(int i = 0;i < 12;i++){
        if(Helmetsize(length[i]) == sizeh[i]){
            cout << "Status: passed" << endl;
        }
        if(Helmetsize(length[i]) != sizeh[i]){
            cout << "Status: failed" << endl;
        }
    }
    cout << "\nTask 9.3:" << endl;
    int N[10]={5236, 332, 4329214, 1000023, 99356, 3243552, 234235, 1111111, 599294, 862837};
    int result3[10]={13, 9, 23, 17, 0, 22, 2, 3, 20, 19};
    for(int i = 0;i < 10;i++){
        if(BinD15(N[i]) == result3[i]){
            cout << "Status: passed" << endl;
        }
        if(BinD15(N[i]) != result3[i]){
            cout << "Status: failed" << endl;
        }
    }
    system("pause");
    return 0;
}
