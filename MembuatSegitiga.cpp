//Revaldo Relinsyah
//G1A021060

#include <iostream>

using namespace std;

void cetak(int jumlah)
{
    if (jumlah == 0)
        return;
    cout << "* ";
    cetak(jumlah - 1);
}
 
void segitiga(int n, int i){
    if (n == 0)
        return;
    cetak(i);
    cout << endl;
    segitiga(n - 1, i + 1);
}
int main()
{
    int n;
    printf("Input Tinggi Segitiga : ");
    cin>>n;
    segitiga(n, 1);
    return 0;
}
