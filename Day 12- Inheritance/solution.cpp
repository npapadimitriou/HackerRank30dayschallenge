#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
    private:
        vector<int> testScores;  
    public:
        /*    
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        
Student(string firstName,string lastname,int id,vector<int> testScores):Person(firstName,lastname,id){
            this->testScores=testScores;
            //cout<<"constructor made";
        }//end of constructor
       /*
        Student(){
            
            cout<<"I hate twice this world";
        }    
    */
    
        /*    
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
    
    char calculate(){
        int sum=0;
        long average;
        for (std::vector<int>::iterator it = testScores.begin() ; it != testScores.end(); ++it){
            sum=sum+(*it);
        }
        //cout<<"sum is:"<<sum<<endl;
        average=sum/testScores.size();
        //cout<<"sum is:"<<sum<<endl;

    
    
    if(average <40) 
    return 'T';
    else if(average<55) 
    return 'D';
    else if (average<70) 
    return  'P';
    else if (average<80) 
    return 'A';
    else if (average<90)  
    return 'E';
    else
    return 'O';

    
        
    }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}

