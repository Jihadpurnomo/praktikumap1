#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x = 56700000;
    float y = 0.06;
    float z; 
    float p;
    float q;
    //i x saldo 3 tahun yang akan datang, y adalah bunga, z periode bunga.
    cout<<"saldo 3 tahun yang akan datang adalah Rp. 56.700.000"<<endl;
    cout<<"menghitung tabungan anda jika bunga anda 6%"<<endl;
    cout<<"pilih periode pembungaan"<<endl;
    cout<<"saldo 3 tahun yang akan datang adalah R.p 56.700.000"<<endl;
    cout<<"pilih 3 untuk pertahun"<<endl;
    cout<<"pilih 6 untuk persemester"<<endl;
    cin>>z;
    q=pow((1+y),z);
    p=x/q;
    cout<<"maka tabungan anda saat ini adalah Rp. ";
    cout<<fixed<<p<<endl;


}
