

#include"Sinhvien.h"
#include <iostream>
#include <fstream>

void dsLop::taolopmoi()
{
    dsSinhvien.clear();
    std::cout << "Da xoa cac sinh vien trong danh sach!\n";
}

void dsLop::themsinhvien()
{
    Sinhvien* ptr = new Sinhvien();//khai bao con tro ptr, tao moi mot doi tuong
    ptr->nhap();
    dsSinhvien.push_back(*ptr);
    std::cout << "Da them thanh cong. So sinh vien hien tai la " << dsSinhvien.size() << ".";
}


void dsLop::xuat()
{
    std::cout << "De thi co " << dsSinhvien.size() << " cau: \n";
    for (int i = 0; i < dsSinhvien.size(); i++) {
        std::cout << "Cau " << i + 1 << ". ";
        dsSinhvien[i].xuat();//goi xuat cua doi tuong CauhoiTN
    }
}

bool dsLop::luuFile(string filename)
{
    //Mo file de ghi
    std::ofstream fo(filename);
    if (!fo.is_open())
        return false;
    //Ghi vao so cau hoi o dong dau tien
    fo << dsSinhvien.size() << endl;
    //Ghi lan luot cac cau hoi vao file
    for (int i = 0; i < dsSinhvien.size(); i++)
        dsSinhvien[i].ghifile(fo);
    fo.close();
    return true;
}

bool dsLop::docFile(string filename)
{
    //Mo file de doc chỗ này cần kh
    std::ifstream fi(filename);
    if (!fi.is_open())
        return false;
    int socauhoi;
    fi >> socauhoi;//van con ky tu xuong dong 
    string tmp;
    std::getline(fi, tmp);//bo qua ky tu xuong dong dau tien
    //Doc lan luot cac cau hoi
    for (int i = 0; i < socauhoi; i++)
    {
        Sinhvien* ptr = new Sinhvien();
        ptr->docfile(fi);
        dsSinhvien.push_back(*ptr);
    }
    fi.close();
    return true;
}
/*
int dsLop::choThi()
{
    return 0;
}

int Dethi::xoaCautrung()
{




    //cach 1: GIAI THUAT KHO HON
    //Sinh vien tu viet!!!!
    //Duyet tung cau hoi qua chi so i (0--->so cau =1)
    //voi moi cau hoi i duyet tiep cac cau hoi j (i+1 ----> cau hoi)
    //so sanh cau i va cau j 
    //neu trung thi xao cau j
    int i = 0;
    while (i < dsCauhoi.size()) {
        CauhoiTN caui = dsCauhoi[i];

        // xem thu sau cau hoi thu i co cau nao trung khong
        int j = i + 1;
        while (j < dsCauhoi.size()) {
            CauhoiTN cauj = dsCauhoi[j];
            if (giongnhau(caui, cauj))
                //xoa cau j
                dsCauhoi.
        }
        i++;
    }


    //cach 2: 
    //dung mangtam de chua cac cau hoi trung hoacw khong trung
    //mangtam=[]
    //duyet cau hoi i
    //neu cau hoi i ma chua nam trong mang tam thi them vao
    //thsay danh sach cau hoi bang mang trong mang tam


    return 0;
}
*/