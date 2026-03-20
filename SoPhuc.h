#ifndef SOPHUC_H
#define SOPHUC_H


class SoPhuc
{
    public:
        void Nhap();
        void Xuat();
        SoPhuc Tong(SoPhuc);
        SoPhuc Hieu(SoPhuc);
        SoPhuc Tich(SoPhuc);
        void Thuong(SoPhuc);
        int UOC (int,int);
    private:
        int iThuc, iAo;
};

#endif // SOPHUC_H
