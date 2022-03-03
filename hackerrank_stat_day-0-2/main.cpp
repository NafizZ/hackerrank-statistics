#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <iomanip>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    int X[N], W[N], w=0;
    double sum = 0;
    for(int i=0; i<N; i++){
        cin >> X[i];
    }
    for(int i=0; i<N; i++){
        cin >> W[i];
        sum += (X[i] * W[i]);

        w += W[i];

    }
    //cout << sum << endl << w << endl;
    double mean = sum/(double)w;

    cout << fixed << setprecision(1) << mean <<endl ;

    return 0;
}
