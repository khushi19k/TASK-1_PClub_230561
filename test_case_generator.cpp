#include <bits/stdc++.h>
using namespace std;

const int MAX_T = 1e6;
const long long MAX_A = 1e9;
const long long MAX_N = 1e6;

int main(int argc, char* argv[]) {
    if (argc < 9) {
        cerr << "Usage: " << argv[0] << " -test-count <T> -sum-n <N> -min-a <minA> -max-a <maxA> -min-n <minN> -max-n <maxN>" << endl;
        return 1;
    }

    int testCount = 0, sumN = 0, minA = 0, maxA = 0, minN = 0, maxN = 0;

    for (int i = 1; i < argc; i += 2) {
        string arg = argv[i];
        if (arg == "-test-count") testCount = atoi(argv[i + 1]);
        else if (arg == "-sum-n") sumN = atoi(argv[i + 1]);
        else if (arg == "-min-a") minA = atoi(argv[i + 1]);
        else if (arg == "-max-a") maxA = atoi(argv[i + 1]);
        else if (arg == "-min-n") minN = atoi(argv[i + 1]);
        else if (arg == "-max-n") maxN = atoi(argv[i + 1]);
        else {
            cerr << "Unknown argument: " << arg << endl;
            return 1;
        }
    }

    srand(time(0));

    int t = testCount;
    cout << t << endl;

    while (t--) {
        long long n = rand() % (maxN - minN + 1) + minN;
        if (sumN > 0 && sumN < n) {
            n = sumN;
        }
        sumN -= n;

        long long a = rand() % (maxA - minA + 1) + minA;

        cout << a << " " << n << endl;
    }

    return 0;
}
