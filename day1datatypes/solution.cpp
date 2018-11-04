#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    
     // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;



    int sum1;
    double sum2;
    string str;


    
    // Read and save an integer, double, and String to your variables.

    std::cin>>i2;
    cin>>d2;
    
    cin.ignore();  //ignores an end of line character 

    getline(cin, s2);


     sum1=i+i2;
     sum2=d+d2;
     str=s+s2;

    // Print the sum of both integer variables on a new line.
    std::cout<<sum1<<endl;
    // Print the sum of the double variables on a new line.
    std::cout<<fixed<<setprecision(1)<<sum2<<endl; 
    // Concatenate and print the String variables on a new line
    std::cout<<str;
    
    return 0;
}
    
    
