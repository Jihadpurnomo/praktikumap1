#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    float n1 = 83;
    float n2 = 80;
    float n3 = 92;
    
    cout << "Menghitung rata-rata nilai mahasiswa\n";
    cout << "Nilai tugas : " << n1 << endl;
    cout << "nilai UTS : " << n2 << endl;
    cout << "Nilai UAS : " << n3 << endl;
    cout << "Nilai rata-ratanya = " << (n1+n2+n3) / 3 << endl; 

    return 0;
}
