#ifndef University_H
#define University_H
#include "Department.h"
#include "Teacher.h"
#include "Student.h"
#include<iostream>

using namespace std;

class University
{
	private:
		Department Dep;
		Student *Stu;
		Teacher *Teac;
		char* uniName;
		char* examStartDate;
		int totalStudents;
	protected:
		int noOfStudent;
	public:
		University()
		{
			//default constructor setting nothing
		}
        University(char* uniNam)
		{
			//giving the name to the university
			uniName=uniNam;
		}	
		void setNoOfStudent(int students)
		{
			//setting the total number of students in university
			totalStudents=students;
		}										
		void setExamDates(char* startDate)
		{
			//set the exam dates for the university
			//it just takes the starting date... And the ending date is calculated according to the total numbers of subjects in the batch
			try
			{
				if(startDate<0)
				{
					//it sees if you have write the date less than 0 if it happens throw the date
					throw(startDate);
				}
				else
				{
					//if your date is correct its assign its value to the examStartDate
					examStartDate=startDate;
				}
			}
			catch(int val)
			{
				//catching the startDate which have been thrown
				cout<<endl<<"Exception occured"<<endl;
			}
		}
		~University()
		{
			//destructor
			delete uniName;
			delete examStartDate;
		}
};

#endif
