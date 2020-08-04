#include <iostream>
using namespace std;
int fatorial (int x){
    if (x == 1) return x;
    else return x*fatorial(x-1);
    return 0;
}
int main (){
    int n;
    cout << "Digite um numero:" << endl;
    cin >> n;
    cout << "O fatorial de " << n << " e igual a:" << fatorial(n);
    return 0;
}