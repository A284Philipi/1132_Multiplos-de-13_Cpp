#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int a, b, soma = 0;
    cin >> a;
    cin >> b;
    if (a > b){
        while (b <= a){
            if (b % 13 == 0){

            }else{
                soma = soma + b;
            }
            b++;
        }
    }else{
        while (a <= b){
            if (a % 13 == 0){

            }else{
                soma = soma + a;
            }
            a++;
        }
    }
    cout << soma <<endl;
    return 0;
}
