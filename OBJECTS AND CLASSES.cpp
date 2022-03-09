#include<iostream>
#include<string.h>


using namespace std;

class Student{
	public:
        string Name;
        string CourseName;
        int RegNo;
        int Age;

        void StudentDetails(){
            std::cout <<"Name;" << Name <<endl;
            std::cout <<"CourseName :" << CourseName << endl;
            std::cout << "RegNo :"<< RegNo <<endl;
            std::cout <<"Age :" << Age <<endl;

        }

	//This is the constructor of the Student class.

    Student(string name ,string courseName,int regNo, int age){
        Name= name;
        CourseName= courseName;
        Age = age;
        RegNo= regNo;

    };
};
    int main()
    {
        Student student1 ("Dennis Lynol","Computer Science",2345,20);
        student1.StudentDetails();
        Student student2 ("Nijel", "Computer Security",2345,29);
        student2.StudentDetails();

        return 0;
    }
