#include <iostream>
using namespace std;

class STUDENT 
{       
    public:            
    string name ;  
    int id ;        
    int age ;        
    string grade ;  
    void print_info(); // printing info function

STUDENT() //default constructor
{
    name="new student";
    age=0;
    id=0;
    grade="no info";

}
STUDENT(int x,int y) // para constructor
{
id=x;
age=y;
}

};

void  STUDENT::print_info()
{
cout << "Student's Name: " << name <<endl;
cout << "Student's ID: " << id <<endl;
cout << "Student's Age: " << age <<endl;
cout << "Student's Grade: " << grade <<endl;

}

int main()
{
STUDENT st1(11,19); //(id,age)
st1.name="youssef";
st1.grade="1st";
st1.print_info();
cout <<"====================="<<endl;
STUDENT st2;
st2.print_info();
return 0;
}