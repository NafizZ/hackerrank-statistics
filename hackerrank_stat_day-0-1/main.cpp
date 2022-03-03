#include<bits/stdc++.h>

using namespace std;

double mean(const vector<int> &num){

    int sum = 0;
    for( int i = 0 ; i < num.size() ; i ++ )
        sum += num[i];

    return (double)sum/num.size();
}

double median(vector<int> num){

    sort( num.begin(), num.end() );

    if( num.size()%2 )
        return num[num.size()/2];
    else
        return (double)(num[num.size()/2] + num[num.size()/2-1])/2.0;
}

int mode(const vector<int> &num){

    map<int,int> freq;
    for( int i = 0 ; i < num.size() ; i ++ )
        freq[num[i]] += 1; //(key <num[i]>)

    int res = -1;
    int bestFreq = 0;
    for( map<int,int>::iterator iter = freq.begin() ; iter != freq.end() ; iter ++ )
        if( iter->second > bestFreq ){
            bestFreq = iter->second;
            res = iter->first;
        }

    return res;
}

int main() {

    int N;
    cin>>N;

    vector<int> num;
    int X;
    for( int i = 0 ; i < N ; i ++ ){
        cin>>X;
        num.push_back(X);
    }

    // Mean
    cout<<fixed<<setprecision(1)<<mean(num)<<endl;

    // Median
    cout<<fixed<<setprecision(1)<<median(num)<<endl;

    // Mode
    cout<<mode(num)<<endl;

    return 0;
}
