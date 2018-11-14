#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int k,i;
    string s;
     string forprint;
    //cout<<"Give k:";
    cin>>k;
    
    std::vector < string > my_strings;
    
    for(i=0;i<k;i++){
        
       
        
        do{
       // cout<<"Give word:";
        cin >>s;
       
        }
        while(s.empty());
         my_strings.push_back(std::move(s));

    }
    
    //reading all the strings
    for (auto it = my_strings.cbegin(); it != my_strings.cend(); it++){
        
         forprint=*it;
    
     //even numbers zuga
        for (string::size_type j = 0; j < forprint.length(); j=j+2)
            {
                cout<<forprint[j];
            }
        cout<<" ";
        //odd numbers mona
         for (string::size_type j = 1; j < forprint.length(); j=j+2)
            {
                cout<<forprint[j];
            }
            cout<<endl;
    }
        
    
    
    
    return 0;
}
