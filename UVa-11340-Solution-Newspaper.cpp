/******************************************************************************
UVa-Solution 11340-Newspaper
Author - Aditya Rajput


*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int count;
        cin>>count;
        double amount = 0;
        map<char, double> m; 
        map <char, double>::iterator it;
        for(int i =0;i < count; i++){
            char ch;
            double j;
            cin>>ch>>j;
            m[ch] = j;
        }
        int paraCount;
        cin>>paraCount;
        cin.ignore();
        while(paraCount--){
            string str = "";
            getline(cin ,str);
            for(int i = 0 ; i < str.size(); i++){
                it = m.find(str[i]);
				if(it != m.end())
					amount += it->second;
			}			
            }
        
        amount /= 100;
        
		printf("%0.2lf$\n", amount);
        
    }
    return 0;
}
