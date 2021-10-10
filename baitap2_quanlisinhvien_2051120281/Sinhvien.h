#pragma once
#include<iostream>
using namespace std;

class Sinhvien
{
private:
	string MSSV;
	string hoten;
	int sobuoivang;
	float DiemTH;
	float DiemGK;
public: 
	//nhap sinh vien
	void nhap();
	//xuat sinh vien
	void xuat();
	//ghi file chua ds sinh vien
	void ghifile(ofstream& fo);
	//doc file chua ds sinh vien
	void docfile(ifstream& fi);
	// tinh diem qua trinh
	double DiemQT();

};

