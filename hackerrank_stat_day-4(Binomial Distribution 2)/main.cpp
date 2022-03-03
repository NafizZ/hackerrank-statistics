#include <bits/stdc++.h>
using namespace std;

/*
        p = b/b+g;
        q = 1 - p;
        prob = sum(i=3 to i=6)(p^i)(q^(6-i));
*/



int fact(int n)
{
    if(n<2) return 1;
    return n*fact(n-1);
}

double nCr(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double p = 0.0, n = 0.0;  // given // p is probability of success(in percentage), n is total number of trials
    cin >>  p >> n ;

    p = p/100;

    double q = 1 - p; // q is probability of failure

    double prob1 = 0.0;
    double prob2 = 0.0;

    for(int i=0; i<3; i++)
    {
        prob1 += nCr(n, i)*pow(p, i)*pow(q, n-i);
        if(i<2){
            prob2 = prob1;
        }
    }
    cout << fixed << setprecision(3) << prob1 <<endl ;
    cout << fixed << setprecision(3) << 1-prob2 <<endl ;

    return 0;
}
