/******************************************************************************
UVa-Solution 146-ID Codes
Author - Aditya Rajput


*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    
    while(str != "#"){
        cin>>str; 
        bool val = next_permutation(str.begin(), str.end()); 
        if(str != "#"){
            if(!val) 
                cout<<"No Successor"<< endl; 
            else
                cout<< str << endl;
        }
    }
    
    return 0;
    
}
