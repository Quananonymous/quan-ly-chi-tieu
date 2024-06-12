#include<iostream>
using namespace std;
#include "khoanchi.h"
#include "mylib.h"
KhoanChi a[1000];
int N = 0;
int main(){
    LoadData(a, N, "chitieu.h");

    int chon;

    do{
        chon = Menu();
        switch (chon){
            case 1:
                NhapDuLieu(a, N);
                break;
            case 2:
                InDuLieu(a, N);
                break;
            case 3:
                cout<< "CAM ON BAN DA SU DUNG CHUONG TRINH";
                break;
        }
    }while(chon != 3);
    SaveData(a, N, "chitieu.dat");
    return 0;
}