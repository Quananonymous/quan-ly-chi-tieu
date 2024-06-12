#ifndef mylib_h
#define mylib_h
#include<iostream>
#include<fstream>
using namespace std;
#include "khoanchi.h"
void SaveData(KhoanChi a[],int N, const char *fileName){
    ofstream fout(fileName);
    fout<<N<< endl;
    for (int i = 0; i < N; i++){
        fout<< a[i].day<<endl;
        fout<< a[i].day<<endl;
        fout<< a[i].day<<endl;
        fout<< a[i].day<<endl;
        fout<< a[i].day<<endl;
    }
    fout.close();    
}
void NhapDuLieu(KhoanChi a[], int &N){
    cout<< "Nhap ngay:";
    cin>> a[N].day;
    cout<< "Nhap thang:";
    cin>> a[N].month;
    cout<< "Nhap nam:";
    cin>> a[N].year;

    cout<< "Nhap ten:";
    cin.ignore();
    getline(cin, a[N].name);

    cout<< "Nhap so tien:";
    cin>> a[N].amount;
    N++;
}
void InDuLieu(KhoanChi a[], int N){
    for(int i = 0; i < N; i++){
        cout<<a[i].day <<"-"<<a[i].month <<"-"<<a[i].year <<"\t"<<a[i].name <<"\t"<< a[i].amount;
    }
}; 
int Menu() {
    cout<< "CHUONG TRINH QUAN LY CHI TIEU \n";
    cout<< "1. Them moi \n";
    cout<< "2. In\n";
    cout<< "Moi nhap chuc nang: ";
    int c;
    cin>> c;
    return c;
}
void LoadData(KhoanChi a[], int &N, const char *fileName){
    ifstream fin(fileName);
    fin>>N;
    for(int i = 0; i< N; i++){
        fin>> a[i].day;
        fin>> a[i].month;
        fin>> a[i].year;
        string t;
        getline (fin, t);
        getline (fin, a[i].name);
        fin>> a[i].name;
        fin>> a[i].amount;
    }
    fin.close();
}

    

#endif