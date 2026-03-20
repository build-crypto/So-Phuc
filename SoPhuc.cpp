#include "SoPhuc.h"
#include <iostream>
using namespace std;
void SoPhuc::Nhap()
{
   cout<<"Nhap phan Thuc:";
   cin>>iThuc;
   cout<<"Nhap phan Ao:";
   cin>>iAo;
}
void SoPhuc::Xuat()
{   if (iThuc == 0 && iAo==0)
    {
        cout<<0<<endl;
        return;
    }
    if (iThuc!=0) cout<<iThuc;
    if (iAo>0&&iThuc!=0) cout<<"+"<<iAo<<"i";
    else if (iAo!=0) cout<<iAo<<"i";
    cout<<endl;
}
SoPhuc SoPhuc::Tong(SoPhuc a)
{
    SoPhuc C;
    C.iThuc= iThuc+a.iThuc;
    C.iAo= iAo+a.iAo;
    return C;

}
SoPhuc SoPhuc::Hieu(SoPhuc a)
{
    SoPhuc C;
    C.iThuc= iThuc-a.iThuc;
    C.iAo= iAo-a.iAo;
    return C;
}
SoPhuc SoPhuc::Tich(SoPhuc a)
{
    SoPhuc C;
    C.iThuc= iThuc*a.iThuc-iAo*a.iAo;
    C.iAo= iThuc*a.iAo+iAo*a.iThuc;
    return C;
}
void SoPhuc::Thuong(SoPhuc a)
{
    if (a.iThuc==0&&a.iAo==0)
    {
        cout<<"INVALID";
        return;
    }
   int tuThuc,tuAo,Mau;
   tuThuc = iThuc*a.iThuc+iAo*a.iAo;
   tuAo = iAo*a.iThuc-iThuc*a.iAo;
   Mau = a.iAo*a.iAo+a.iThuc*a.iThuc;
   if (Mau<0)
   {
       tuThuc=-tuThuc;
       tuAo=-tuAo;
       Mau=-Mau;
   }
   int uoc_Thuc = UOC(tuThuc,Mau),uoc_Ao= UOC(tuAo,Mau);

   if (tuThuc==0&&tuAo==0)
   {
       cout<<0<<endl;
       return;
   }
   if (tuThuc!=0)
   {
       cout<<tuThuc/uoc_Thuc;
       if (!((Mau/uoc_Thuc)==1)) cout<<"/"<<Mau/uoc_Thuc;
   }
   if (tuThuc!=0&&tuAo>0)
   {
       cout<<"+"<<tuAo/uoc_Ao;
       if (!((Mau/uoc_Ao)==1)) cout<<"/"<<Mau/uoc_Ao;
       cout<<"i";
   } else if (tuAo!=0)
   {
       cout<<tuAo/uoc_Ao;
        if (!((Mau/uoc_Ao)==1)) cout<<"/"<<Mau/uoc_Ao;
        cout<<"i";
   }
   cout<<endl;
}
int SoPhuc::UOC (int a,int b)
{
    a=abs(a);
    b=abs(b);
    if (b==0) return a;
    return UOC (b,a%b);
}
