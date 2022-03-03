/*

#include <bits/stdc++.h>
using namespace std;

int main() {

    double b, g; //variable for boy girl ratio input
    cin >> b >> g;

    double p = (b/(b+g)); // p is probability of success [for this question which is probability of boy child]

    double q = 1-p; // q is probability of failure [for this question which is probability of girl child]

    int n=6, x=3; // n is total number of trials, x is number of successes [value of n & x is given in the question]

    //permutation of 6P3
    int per = 1;
    for(int i=0, j=n; i<x; i++, j--){
            per = per * j;
    }

    //factorial of 3
    int i=x, f=1;
    while(i>0){
        f = f*i;
        i--;
    }

    // so  Combination of 6C3
    int c = per / f;

    double r1=0, r2=0;

    r1 = pow(p, x); // p^x

    r2 = pow(q, (n-x)); // q^(n-x)

    double result = 0;
    for

    result += (double)c * r1 * r2;

    cout << fixed << setprecision(3) << result <<endl ;

    return 0;
}

*/
//////////////////////////////////////////////////////////////////
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
    double b = 1.09, g = 1;  // given
    cin >>  b >> g ;
    double p = b/(b+g);
    double q = 1 - p;

    double prob = 0.0;

    for(auto i=6; i>=3; i--)
    {
        prob += nCr(6, i)*pow(p, i)*pow(q, 6-i);
    }
    cout << fixed << setprecision(3) << prob <<endl ;

    return 0;
}


