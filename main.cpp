
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien (&A)[],int &n){
cin >> n;
for (int i=0;i<n;i++){
    cin>>A[i].MASV;
    cin.ignore();
   cin.getline(A[i].HoTen,100);
    cin>> A[i].NgaySinh;
    cin>> A[i].GioiTinh;
    cin >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
}
}
void SapXepGiamTheoMASV(SinhVien (&A)[], int &n)
{
    SinhVien temp;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (A[i].MASV>A[j].MASV){
                temp = A[i];
                A[i]=A[j];
                A[j]=temp;

            }
        }
    }
}
void Xuat(SinhVien (&A)[],int n){
    for (int i=0;i<n;i++){
    A[i].DTB = (A[i].DiemToan + A[i].DiemHoa + A[i].DiemLy)/3;
    cout << A[i].MASV << "\t" << A[i].HoTen << '\t' << A[i].NgaySinh <<'\t'<< A[i].GioiTinh <<'\t'<< A[i].DiemToan<<'\t'<<A[i].DiemLy << '\t'<< A[i].DiemHoa<<"\t";
    printf("%.3g\n",A[i].DTB);
    }
}

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
    Xuat(A, n);
    return 0;
}
