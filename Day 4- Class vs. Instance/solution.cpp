/*There are two ways to define function of classes 
either inside the class either outside using the scope ::
OUTSIDE the comment section the functions our declared inside but defined inside 
INSIDE the comment section we define and declare out functions

class Person{
    public:
        int age;
       // Person(int initialAge);
        //void amIOld();
        //void yearPasses();
        
        
           Person(int initialAge){
        // Add some more code to run some checks on initialAge
        age=initialAge;
        if (age<0){
            age=0;
            cout<<"Age is not valid, setting age to 0."<<endl;
        }
     
        
    }

    void amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if (age<13){
            cout<<"You are young."<<endl;
        }
        else if (age<18){
            cout<<"You are a teenager."<<endl;
        }
        else
        {
            cout<<"You are old."<<endl;
        } //closes if statement for age
       
    }

    void yearPasses(){
        // Increment the age of the person in here
        age++;
    }
       
    };



*/






class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };



    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        age=initialAge;
        if (age<0){
            age=0;
            cout<<"Age is not valid, setting age to 0."<<endl;
        }
      
        
        
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if (age<13){
            cout<<"You are young."<<endl;
        }
        else if (age<18){
            cout<<"You are a teenager."<<endl;
        }
        else
        {
            cout<<"You are old."<<endl;
        } //closes if statement for age
        
        
        
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;
    }
