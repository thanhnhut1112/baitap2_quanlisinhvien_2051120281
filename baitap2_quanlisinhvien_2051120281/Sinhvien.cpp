#include<iostream>
#include <fstream>
#include"Sinhvien.h"
using namespace std;

void Sinhvien::nhap()
{
	cout << "\n---------------------Nhap thong tin sinh vien----------------------\n";
	cout << "Nhap MS Sinh Vien: ";
	getline(cin, MSSV);
	cout << "Nhap ho ten SV: ";
	getline(cin, hoten);
	cout << "Nhap so buoi vang: ";
	cin >> sobuoivang;
	cout << "Nhap diem thuc hanh: ";
	cin >> DiemTH;
	cout << "Nhap diem giua ki: ";
	cin >> DiemGK;
}

void Sinhvien::xuat()
{
	cout << "MSSV: "<< MSSV << endl;
	cout << "Ho ten sinh vien: "<<hoten << endl;
	cout << "So buoi vang cua sinh vien: "<<sobuoivang << endl;
	cout <<"Diem thuc hanh la: "<< DiemTH << endl;
	cout << "Diem qua trinh la: "<< DiemGK<< endl;
}


void Sinhvien::docfile(ifstream& fi)
{
	getline(fi, MSSV);
	getline(fi, hoten);
	cin >> sobuoivang;
	cin >> DiemTH;
	cin >> DiemGK;
	
}
void Sinhvien::ghifile(ofstream& fo)
{
	fo << MSSV << endl;
	fo << hoten << endl;
	fo << sobuoivang << endl;
	fo << DiemTH << endl;
	fo << DiemGK << endl;
}

// tra ve gia tri
/*
double Sinhvien::DiemQT()
{
	float diem= (10 - sobuoivang * 2) * 0.2 + DiemTH * 0.3 + DiemGK * 0.5;
	if (sobuoivang <= 5) {
		cout << "diem qua trinh la: " << diem;
		
	}
	else
		cout << 0;
	return diem;
}

*/
