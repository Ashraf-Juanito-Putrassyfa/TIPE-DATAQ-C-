
#include <iostream>

using namespace std;

int main()
{
    string var1 = "kuyyy belajarr C++";
    string* var2 = &var1;  //ini mengakses alamat memori yaitu var1 kedalam var2

    cout << var1 << endl;
    cout << var2 << endl;

    return 0;
}
