#ifndef Student_H
#define Student_H
#include "Exam_Room.h"

using namespace std;

class Student
{
	private:
		Exam_Room* ER;
		char* studentName;								
		char* studentID;
		char* studentDepartment;
		char studentSection;
	public:
		int studentscount;
		Student()
		{
			//default constructor setting nothing
		}                								
		void setStudentName(char* sName)
		{
			//setting the student Name
			studentName=sName;
		}
		void setStudentID(char* sId)
		{
			//setting the student ID
			studentID=sId;
		}
		void setStudentDepartment(char* sDepartment)
		{
			//setting the student Department
			studentDepartment=sDepartment;
		}
		void setStudentSection(char sSection)
		{
			//setting the student section
			studentSection=sSection;
		}
		char* getStudentName()
		{
			//getting the student Name
			return studentName;
		}
		char* getStudentID()
		{
			//getting the student ID
			return studentID;
		}
		char* getStudentDepartment()
		{
			//Getting the student department
			return studentDepartment; 
		}
		char getStudentSection()
		{
			//getting the student section
			return studentSection;
		}	
		void studentRecord()
		{
			//adding the record of students
			ofstream myfile;
			myfile.open("Students Record.txt",ios::app);
			string name;
			string id;
			char ch;
			string department;
//			if(myfile==NULL)
//			{
//				myfile<<"Name\t\t\ID\t\t\DEPARTMENT"<<endl;
//			}
			//writing in the file
			do
			{
				//asking the biodata to add the record
				cout<<"Enter your Name: ";
				cin>>name;
				cout<<"Enter your ID: ";
				cin>>id;
				cout<<"Enter your Department: ";
				cin>>department;
				cout<<"Do you want to add another record (Y/N)? ";
				cin>>ch;
				//writing the whole biodata in the file
				myfile<<name<<"\t\t"<<id<<"\t\t"<<department<<endl;
			}while(ch=='y' || ch=='Y');
		}
		void viewStudentRecords()
		{
			//viewing the students record
			string name;
			ifstream infile2;
			infile2.open("Students Record.txt");
			cout<<"Name\t\t\ID\t\tDEPARTMENT"<<endl;
			while(infile2)
			{
				//reading the file till EOF
				getline(infile2,name);
				//getting every line
				cout<<name<<endl;
				//printing everline
			}
		}
		~Student()
		{
			//destructor
		}
};

#endif
