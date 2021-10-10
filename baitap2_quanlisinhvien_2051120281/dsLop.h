#pragma once
#include <vector>
#include "dsLop.h"
#include"Sinhvien.h"
#include <string>
using namespace std;

class dsLop
{
private:
    vector<Sinhvien> dsSinhvien;
public:
    void taolopmoi();
    void themsinhvien();//Nhap cau hoi tu ban phim va them vao danh sach
    void xuat();//in de thi ra man hinh
    bool luuFile(string filename); //tra ve true neu thanh cong
    bool docFile(string filename); //tra ve true neu thanh cong
    //int choThi();//tra ve so cau dung
    //int xoaCautrung();//xoa cac cau hoi trung nhau
};

