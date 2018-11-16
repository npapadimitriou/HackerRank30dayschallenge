#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {

    int result;
    
    if(n<=1){
        return 1;
    }
    
    
    result=n*factorial(n-1);
    return result;
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
//Searches the environment list provided by the host environment (the OS), for a string that matches the C string pointed to by env_var and returns a pointer to the C string that is associated with the matched environment list member. 
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
