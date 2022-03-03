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

    int a[n], b[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }



    int l=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<b[i]; j++){
            x.push_back(a[i]);
            l++;
        }

    }



    sort(x.begin(), x.end());


    if(l%2){

        for(int i=0; i<(l/2); i++){
            y.push_back(x[i]) ;

        }
        q1 = (double)median(y);

        for(int i=(l/2)+1, j=0; i<l; i++,j++){
            z.push_back(x[i]) ;
        }
        q3 = (double)median(z);
    }
    else{
        for(int i=0; i<(l/2); i++){
            y.push_back(x[i]) ;
        }
        q1 = (double)median(y);



        for(int i=(l/2), j=0; i<l; i++, j++){
            z.push_back(x[i]) ;
        }
        q3 = (double)median(z);
    }

    //cout <<fixed<<setprecision(1)<< q1 << endl;

    //cout <<fixed<<setprecision(1)<< q3 << endl;

    cout <<fixed<<setprecision(1)<< q3-q1 << endl;


    return 0;
}

