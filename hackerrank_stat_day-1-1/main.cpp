///*
#include<bits/stdc++.h>

using namespace std;


double median(vector<int> num){

    if( num.size()%2 )
        return num[num.size()/2];
    else
        return (double)(num[num.size()/2] + num[num.size()/2-1])/2.0;
}


int main() {
   // Enter your code here. Read input from STDIN. Print output to STDOUT
    int n;
    double q1, q2, q3;
    cin >> n;
    vector <int> x, y, z;

    int a=0;


    for(int i=0; i<n; i++){
        cin >> a;
        x.push_back(a);
    }

    sort(x.begin(), x.end());


    if(n%2){

        for(int i=0; i<(n/2); i++){
            y.push_back(x[i]) ;

        }
        q1 = (double)median(y);
        q2 = (double)x[n/2];

        for(int i=(n/2)+1, j=0; i<n; i++,j++){
            z.push_back(x[i]) ;
        }
        q3 = (double)median(z);
    }
    else{
        for(int i=0; i<(n/2); i++){
            y.push_back(x[i]) ;
        }
        q1 = (double)median(y);

        q2 = (double)median(x);

        for(int i=(n/2), j=0; i<n; i++, j++){
            z.push_back(x[i]) ;
        }
        q3 = (double)median(z);
    }

    cout <<fixed<<setprecision(0)<< q1 << endl;
    cout <<fixed<<setprecision(0)<< q2 << endl;
    cout <<fixed<<setprecision(0)<< q3 << endl;

    return 0;
}
/*

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

double medianForSortedVector(const vector<int> &nums){

    if( nums.size()%2 )
        return nums[nums.size()/2];
    else
        return (double)(nums[nums.size()/2] + nums[nums.size()/2-1])/2.0;
}

vector<double> quartiles(vector<int> nums){

    sort(nums.begin(), nums.end());

    double q[3];
    if( nums.size() % 2 ){
        int mid = nums.size()/2;
        q[1] = nums[mid];
        q[0] = medianForSortedVector(
                vector<int>( nums.begin(), nums.begin() + mid ) );
        q[2] = medianForSortedVector(
                vector<int>( nums.begin() + mid + 1 , nums.end() ) );
    }
    else{
        int midL = nums.size()/2 - 1;
        q[1] = (double)(nums[midL] + nums[midL+1])/2.0;
        q[0] = medianForSortedVector(
                vector<int>( nums.begin(), nums.begin() + midL + 1));
        q[2] = medianForSortedVector(
                vector<int>( nums.begin() + midL + 1, nums.end() ) );
    }

    return vector<double>( q , q + sizeof(q)/sizeof(double) );
}

int main() {

    int N;
    cin>>N;

    vector<int> nums;
    int x;
    for( int i = 0 ; i < N ; i ++ ){
        cin>>x;
        nums.push_back( x );
    }

    vector<double> res = quartiles( nums );
    cout<<fixed<<setprecision(0);
    for( int i = 0 ; i < 3 ;  i ++ )
        cout<<res[i]<<endl;

    return 0;
}

*/
