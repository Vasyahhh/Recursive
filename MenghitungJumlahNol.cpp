//Revaldo Relinsyah
//G1A021060

#include<iostream>

using namespace std;
int CariNol(int angka)
{
static int hitung=0;
    if(angka>0)
    {

        if(angka%10==0)
        hitung++;

        CariNol(angka/10);
    }
    return hitung;
}
int main()
{
    int n;
    cout<<"Input Angka :";
    cin>>n;
    cout<<"Jumlah Nol : "<<CariNol(n);
}
