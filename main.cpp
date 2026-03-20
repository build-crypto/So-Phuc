#include "SoPhuc.h"
#include <iostream>
using namespace std;
int main()
{
    SoPhuc A,B;
    cout<<"Nhap So Phuc A:\n";
    A.Nhap();
    cout<<"Nhap So Phuc B:\n";
    B.Nhap();
    cout<<"So Phuc A:\n";
    A.Xuat();
    cout<<"So Phuc B:\n";
    B.Xuat();
    cout<<"Tong Hai So Phuc = ";
    (A.Tong(B)).Xuat();
    cout<<"Hieu Hai So Phuc = ";
    (A.Hieu(B)).Xuat();
    cout<<"Tich Hai So Phuc = ";
    (A.Tich(B)).Xuat();
    cout<<"Thuong Hai So Phuc = ";
    A.Thuong(B);
    return 0;
}
