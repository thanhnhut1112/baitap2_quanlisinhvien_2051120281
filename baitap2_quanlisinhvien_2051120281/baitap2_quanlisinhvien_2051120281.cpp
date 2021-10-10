// baitap2_quanlisinhvien_2051120281.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include"Menu.h"
#include"Sinhvien.h"
#include<string>
#include"dsLop.h"
#include "dsLop.cpp"
using namespace std;



int main()
{
    cout << "\n__________BAI TAP 2: QUAN LI DIEM QUA TRINH SINH VIEN__________";
    cout << "\n___________MSSV: 2051120281______Ho Ten: PHAM THANH NHUT_________";

    string filename = "test.TTN";
    Sinhvien sv;//CauhoiTN cau1


    dsLop clas;
    //ghi tieu de trong cai ngoac moi dung
    Menu m("_________________QUAN LI DANH SACH SINH VIEN TRONG LOP HOC PHAN_________________");
    m.themLuachon("Thoat chuong trinh");// tuong ung voi chon 0
    m.themLuachon("Them sinh vien");//tuong ung voi chon 1
    m.themLuachon("In danh sach sinh vien");//tuong ung voi chon3
    m.themLuachon("Ghi vao file");//tuong ung voi chon 4
    m.themLuachon("Doc danh sach sinh vien tu file");//tuong ung voi chon 5
    m.themLuachon("Xuat ra cac sinh vien du dieu kien du thi");//tuong ung voi chon 6
    m.themLuachon("Xuat ra danh sach sinh vien co ho la nguyen");
    m.themLuachon("Xuat danh sach sinh vien co cung ten voi sinh vien khac");
    //m.themLuachon("Xoa cac cau hoi trung");


    Menu m2("Xac nhan truoc khi thoat");
    m2.themLuachon("Luu du lieu vao file roi thoat");
    m2.themLuachon("Khong luu du lieu va thoat");
    m2.themLuachon("Quay lai");
    while (true) {
        switch (m.chon()) {
        case 0:
            switch (m2.chon()) {
            case 0:
                clas.luuFile(filename);
                return 0;
            case 1:
                return 0;
            case 2:
                break;
            }
        case 1:
            clas.taolopmoi();
            break;
        case 2:
            clas.themsinhvien();
            break;
        case 3:
            clas.xuat();
            break;
        case 4:
            cout << "Nhap ten file: ";
            getline(cin, filename);
            if (clas.luuFile(filename))
                cout << "Luu file thanh cong!!!";
            else
                cout << "Co loi, vui long kiem tra lai!!!";
            break;
        case 5:
            cout << "Nhap ten file: ";
            getline(cin, filename);
            if (clas.docFile(filename))
                cout << "Doc thanh cong!";
            else
                cout << "Co loi, vui long kiem tra lai!!!";
            break;
        case 6:

            break;
        case 7:
            break;
        }
    }









}