// 482 permutation arrays
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--){
        getchar();
        vector<pair<int, string>> vect;
        string line;
        getline(cin, line);
        stringstream str1;
        str1 << line;
        stringstream str2;
        getline(cin, line);
        str2 << line;
        int temp;
        int count = 0;
        while(str1 >> temp){
            string strTemp;
            str2 >> strTemp;
            vect.push_back(make_pair(temp, strTemp));
            count++;
        }
        sort(vect.begin(), vect.end());
        for(int i = 0 ; i < count;i++){
            cout<<vect[i].second<<"\n";
        }
        if(t){
            puts("");
        }
    }
    return 0;
}
