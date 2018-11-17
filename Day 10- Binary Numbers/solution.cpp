#include <bits/stdc++.h>
#include <sstream>
#include <iostream>
using namespace std;

long long convertDecimalToBinary(int);
int numberOf1(string);

int main()
{
    int n;
    long long binarynumber;
    string binarystring;
    int result;

    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    binarynumber=convertDecimalToBinary(n);
    //cout<<binarynumber;
    binarystring=to_string(binarynumber);
    
    result=numberOf1(binarystring);
    
    cout<<result<<endl;
    return 0;
}
//function found https://www.programiz.com/cpp-programming/examples/binary-decimal-convert
long long convertDecimalToBinary(int n)
{
    std::stringstream ss;
    long long result;
    // array to store binary number 
    int binaryNum[1000]; 

    // counter for binary array 
    int i = 0; 
    while (n > 0) { 

        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 

    for (int j = i - 1; j >= 0; j--){ 
        ss << binaryNum[j]; 
    } 
    
    ss >> result;
    return result;
}


int numberOf1(string input){
    int count=0;
    int flagFirst=0; //flag for first iteration if done
    int max=0;
    int maxtemp=0;
   
    for ( unsigned i=0; i<input.length(); ++i){
       
       if(flagFirst==0){//first time running
           if(input[i]='1'){
               count++;
               max=count;
               flagFirst++;
           }
       }//finishes first iteration
       else{
           if(input[i]=='1'){
               count++;
           }
           else{
               count=0;
           }
       }
       
        if(max<count){
            max=count;
        }
    }
    return max;
    
    
    

   
    }
    
