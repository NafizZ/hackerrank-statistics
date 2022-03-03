#include<bits/stdc++.h>

using namespace std;

double mean(const vector<int> &num){

    int sum = 0;
    for( int i = 0 ; i < num.size() ; i ++ )
        sum += num[i];

    return (double)sum/num.size();
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int N;
    cin>>N;

    vector<int> num;
    int X;
    for( int i = 0 ; i < N ; i ++ ){
        cin>>X;
        num.push_back(X);
    }


    // Mean
    double m = mean(num);


    double s=0;
    for( int i = 0 ; i < N ; i ++ ){
        double t=0;
        t = (double)num[i] - m;
        t = t*t;
        s += t;

    }

    double v = s/N;

    double sd = sqrt(v);

    cout << fixed << setprecision(1) << sd << endl;



    return 0;
}
