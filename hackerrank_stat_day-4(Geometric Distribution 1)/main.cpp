#include <bits/stdc++.h>
using namespace std;

/*

    Geometric Distribution

    g(n,p) = q^(n-1) * p


*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double a, b;  // given

    cin >>  a >> b ;
    double p = a/b;

    double q = 1-p;

    int n;
    cin >> n;

    double g = 0.0;

    g = (pow(q, (n-1))) * p;


    cout << fixed << setprecision(3) << g <<endl ;

    return 0;
}
