#include <bits/stdc++.h>
#include <iostream> 
#include <vector> // for 2D vector 



using namespace std;

int maxHourGlass(vector<vector<int>>);

int main()
{
    int result;
    
        
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    result=maxHourGlass(arr);
    cout<<result;
    
    return 0;
}
//check https://www.geeksforgeeks.org/2d-vector-in-cpp-with-user-defined-size/
//solution works for every 2D vector whatever given dimension 
int maxHourGlass(vector<vector<int>> myvector){
        int iteration=0;
        int curHourGlass=0;
        int max=0;
        int firstflag=0;

     // Displaying the 2D vector 
    for (int i = 0; i < myvector.size()-2; i++) { 
        for (int j = 0; j < myvector[i].size()-2; j++){ 
           curHourGlass=myvector[i][j]+myvector[i][j+1]+myvector[i][j+2]+myvector[i+1][j+1]+myvector[i+2][j]+myvector[i+2][j+1]+myvector[i+2][j+2];
        iteration++;
           // cout<<"for iteration:"<<iteration<<" curHourGlass="<<curHourGlass<<endl;
            
            if(firstflag==0){
             max=curHourGlass;
             firstflag=1;
        }
         if(max<curHourGlass){
              max=curHourGlass;
              // cout<<"for iteration:"<<iteration<<" max="<<max<<endl;
             } 
         
         }  
    }
   return max;
}//closes function
