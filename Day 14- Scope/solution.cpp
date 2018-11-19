#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int> elements){

        this->elements=elements;
    }


void computeDifference(){
        this->maximumDifference=0;
        int temp;
        int flag;
        int k=0;//in order to run untill the half of our vector
        int l=0;

/*Concept is to run not the whole array as after the middle the substraction have been done and nothing will change. So we keep 
variable k to keep track until we reach and middle of the vector and then break the iteration.
We could also order the vector which for big vectors it would be cost less.
*/


     //Carefull because writing elements.size()/2 is a division double/int and as a result 3/2=1 
     //but if we write elements.size()/2.00 it will give 1,5
     
     
            for (std::vector<int>::iterator it = elements.begin() ; it != elements.end(); ++it){
           //  cout<<"element="<<*it<<endl;
                if(k>(ceil(elements.size()/2.00)+1)){
                    break;
                }
                for(std::vector<int>::iterator j = it ; j != elements.end(); ++j){
                    
                    if(maximumDifference< abs(*j-*it)){
                    maximumDifference=abs(*j-*it);
                  //   cout <<"for  first iteration "<< l<<"maximumDifference= "<<maximumDifference<<endl;
                      }
               // cout <<"for second iteration "<< k<<"maximumDifference= "<<maximumDifference<<endl;
                l++;
                }//ends the second iteration
                
                l=0;
                k++;
            }//end of iteration
    
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
