#include "testlib.h"
#include <iostream>
 
using namespace std;
 
const int MAX_T = 100;
const int MAX_N = 29;
const long long MAX_A = 1000000000LL;
 
int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);
    int t = rnd.next(MAX_T - 10, MAX_T);
    cout << t << endl;
    for (int i = 0; i < t; ++i)
    {
 
        long long a = rnd.next(MAX_A - 1000, MAX_A);
        int n = rnd.next(MAX_N - 7, MAX_N);
        cout << a << " " << n << endl;
    }
 
    return 0;
}
