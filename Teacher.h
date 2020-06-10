#ifndef Teacher_H
#define Teacher_H
#include "Exam_Room.h"
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Teacher
{
	private:
		Exam_Room* ER;
		string teacherName;
		string teacherID;
		string teacherDepartment;
	public:
		Teacher()
		{
			//default constructor setting nothing	
		}
		void setTeacherName(char* tName)
		{
			teacherName=tName;
			//setting the teachername
		}
		void setTeacherID(char* tId)
		{
			//setting the teacher id
			teacherID=tId;
		}
		void setTeacherDepartment(char* tDepartment)
		{
			//setting the teacher department
			teacherDepartment=tDepartment;
		}
		string getTeacherName()
		{
			//returns teacher name
			return teacherName;
		}
		string getTeacherID()
		{
			//returns teacher id
			return teacherID;
		}
		string getTeacherDepartment()
		{
			//returns teacher department
			return teacherDepartment;
		}
		void teacherRecord()
		{
			//add the teachers record
			ofstream myfile4;
			myfile4.open("Teachers Record.txt",ios::app);
			//opening the file
			string name;
			string id;
			char ch;
			string department;
		//	myfile4<<"Name\t\t\ID\t\t\DEPARTMENT "<<endl;
			do
			{
				//asking the whole biodata of the teacher
				cout<<"Enter your Name: ";
				cin>>name;
				cout<<"Enter your ID: ";
				cin>>id;
				cout<<"Enter your Department: ";
				cin>>department;
				cout<<"Do you want to add another record (Y/N)? ";
				cin>>ch;
				myfile4<<name<<"\t\t"<<id<<"\t\t"<<department<<endl;
				//writing the whole biodata in the file
			}while(ch=='y' || ch=='Y');
		}
		void viewTeacherRecords()
		{
			//viewing the records of teachers
			string name;
			ifstream infile2;
			infile2.open("Teachers Record.txt");
			//opening the record containing file of teachers
			cout<<"Name\t\tID\t\tDEPARTMENT "<<endl;
			while(infile2)
			{
				//getting the every line of the file
				getline(infile2,name);
				//printing the every line of the file
				cout<<name<<endl;
			}
		}
		~Teacher()
		{
			//destructor
		}
};

class Invigilator: public Teacher
{
	//publicly inherited
	private:
		string *teachers_Available;
		int countofTeachers;
	public:
		Invigilator()
		{
			//default constructor setting nothing
		}
		void askForTeachers()						
		{
			//getting the names of teachers who are available on examday
			ofstream myfile;
			myfile.open("Teachers.txt");
			//creating the file to add the names of invigilators
			string teachername;
			string teacherid;
			cout<<endl;
			cout<<"How many teachers are available: ";
			//asking for how many teachers on available on examday
			cin>>countofTeachers;
			try
			{
				//if your count is negative
				if(countofTeachers<0)
				{
					//throwing your count to prevent error
					throw(countofTeachers);
				}
				else
				{
					
						system("cls");
						teachers_Available=new string[countofTeachers];
						//making the array to save the names of teachers
						for(int i=0;i<countofTeachers;i++)
						{
							//asking the names of teachers
							system("cls");
							cout<<endl;
							cout<<"Enter the teacher Name "<<i+1<<": ";
							cin>>teachername;
							teachers_Available[i]=teachername;
							myfile<<teachername<<endl;
							//writing the names in the file
						}
				}
			}
			catch(int val)
			{
				//catching the wrong count of teachers
				cout<<endl<<"Exception occured"<<endl;
			}
		}											
		void setTeachersDuties()
		{
			ifstream infile;
			ifstream infile2;
			ofstream myfile2;
			myfile2.open("TeachersDuties.txt");
			//file opened to write the duties of teachers
			infile2.open("ClassRooms.txt");
			//file opened to view the classrooms available in examday
			infile.open("Teachers.txt");
			//file opened to view the names of teachers who are available on examday
			if(infile.fail())
			{
				//checking for file
				//it is write mode so if you donot write it so not a problem
				cout<<"No file found"<<endl;
			}
			myfile2<<"Teacher\t\tClass Room "<<endl;
			string name;
			string classes;
			int count=0;
			while(infile2.eof()==0)
			{
				//getting everyline of the file
				getline(infile,name);
				infile2>>classes;
				myfile2<<name<<"\t\tCR: "<<classes<<endl;
				//after reading the files it is writing lines in the file
				//allocating examroom to the teachers for invigilation
			}
		}
		void viewTeacherDuties()
		{
			ifstream myfile3;
			string name;
			int classes;
			myfile3.open("TeachersDuties.txt");
			//viewing the duties of teachers
			//the above file contains the duties of teachers
			while(myfile3)
			{
				//reading the file till end of file
				cout<<endl;
				getline(myfile3,name);
				cout<<name<<endl;
				//printing everyline of the file
				//teachers can view thier duties
			}
		}
		~Invigilator()
		{
			//destructor
			delete teachers_Available;
		}
		void viewteachersAvailable()
		{
			//viewing the names of teachers who are available on examday
			cout<<"Teachers Available for Exam"<<endl;
			for(int i=0;i<countofTeachers;i++)
			{
				//printing the names
				cout<<teachers_Available[i]<<endl;
			}
		}
};

#endif
