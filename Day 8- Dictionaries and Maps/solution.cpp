#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>//for using all functions of strings like .substr or .find_first_of 
#include <algorithm>
#include <map>

using namespace std;//haven t used it and in the beggining it could not find endl
//otherwise i should be writing std::endl

vector<string> string_split(string);



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string input;
    string query;
    vector <string> add_contact;
    std::map <string,string> phonebook;
    std::map<string,string>::iterator it;
    
    cin>>n;
    
    cin.ignore();  //ignores an end of line character if i did not put it
    //during the for loop if n is 3 it will read only two times because
    // it keeps the end line when we read the integer
    for(int i=0;i<n;i++){
    getline(cin, input);
    add_contact=string_split(input);
    //cout <<  add_contact.front()<<endl;
    //cout <<  add_contact.back()<<endl;
    phonebook.insert(std::pair<string,string>(add_contact.front(),add_contact.back()));
    // typedef pair<const Key, T> value_type; it would be better if 
    //i give the phone number as a key but exercise denabdsthe opposite
    
   
    }//for closes
    
    //making queries
    while(cin>>query){
        it = phonebook.find(query);
        if (it != phonebook.end()){
            cout<<it->first<<"="<<it->second<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }//while loop for queries closes
    
    
    
   return 0;  
}


//doesn t work for one space or one  word
//for one word found+2 restarts the string
//I can make an if to see if there is a second space and if after that there is after
// letter
vector<string>string_split(string input_string){
    
    vector <string> splits;
    std::size_t found = input_string.find_first_of(" ");//finds first space
    std::string name = input_string.substr (0,found);
    std::string phone = input_string.substr(found+1,input_string.size()); 
    
    splits.push_back(name);
    splits.push_back(phone);
    
    return splits;
}
