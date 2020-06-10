#ifndef Department_H
#define Department_H
#include "Teacher.h"
#include "Student.h"
#include "Exam_Room.h"

using namespace std;
class Department
{
	private:
		Student* STU;
		Teacher* T;
		int noOfDepartment;
		int noOfCSStudents;
		int noOfEEStudents;
		int noOfBBAStudents;
	public:
	    Department()
	    {
	    	
		}
	    Department(int Departments)
	    //setting the total number of Departments in the university
		{
			noOfDepartment=Departments;
		}												
		void setNoOfCSStudents(int CSStudents)										
		{
			//setting the students in CS Department
			noOfCSStudents=CSStudents;
		}
		void setNoOfEEStudents(int EEStudents)
		{
			//setting the students in EE Department
			noOfEEStudents=EEStudents;
		}
		void setNoOfBBAStudents(int BBAStudents)
		{
			//setting the students in BBA Department
			noOfBBAStudents=BBAStudents;
		}
		~Department()
		{
			//destructor
		}			
};

class CS_Department: public Department
{
	private:
		int startdate;
		int startmonth;
		int startyear;
		Exam_Room*ER;
		string * batch16Subjects;											//it holds the subjects of every batch
		string * batch15Subjects;
		string * batch14Subjects;
		string * batch13Subjects;
	protected:	
		int freshmenSubjectCount;
		int sophomoreSubjectCount;
		int juniorSubjectCount;
		int seniorSubjectCount;
	public:
	//	int date_month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
		CS_Department()
		{
			//constructor assigning nothing
		}
		void setExamDates()
		{
			//setting up examdates
			cout<<"Starting date Of Exam (DD-MM-YYYY) : "<<endl;
			cin>>startdate>>startmonth>>startyear;
		}	
		void setSubjectsForFreshmen()
		{
			//getting the subjects of freshmens in CS Department
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				//checking examstartdate
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				//catching the wrong date
				cout<<endl<<"Exception occured"<<endl;
			}
			
			examStartMonth=startmonth;
			examStartYear=startyear;
			cout<<"Enter the Number of Subject of Freshmen : "<<endl;
			cin>>freshmenSubjectCount;
			//number of subjets
			batch16Subjects=new string[freshmenSubjectCount];
			ofstream myfile1;
			string subjectName;
			myfile1.open("SubjectsCSFreshmenDepartment.txt");
		//	myfile1.open("SubjectsCSFreshmenDepartment.txt");
			myfile1<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl;
			//writing in the file 
			for (int i=0;i<freshmenSubjectCount;i++)
			{
				//checking the examdates
				if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				cout<<"Enter the Subject of Batch 16 : "<<endl;
				cin>>subjectName;
				batch16Subjects[i]=subjectName;
				myfile1<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 9:00 A.M 11:00 P.M\t\t "<<subjectName<<endl;
				//writing in the file
				examStartDate++;
			}
		}
		//samething is happening
		void setSubjectsForSophomore()									//getting the subjects of Sophomores in CS Department
		{
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				cout<<endl<<"Exception occured"<<endl;
			}
			examStartMonth=startmonth;
			examStartYear=startyear;
			
			cout<<"Enter the Number of Subject of Sophomore : "<<endl;
			cin>>sophomoreSubjectCount;
			batch15Subjects=new string[sophomoreSubjectCount];
			ofstream myfile2;
			myfile2.open("SubjectsCSSophomoreDepartment.txt");
			myfile2<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl; 
			for (int i=0;i<sophomoreSubjectCount;i++)
			{
				if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				string subjectName;
				cout<<"Enter the Subject of Batch 15 : "<<endl;
				cin>>subjectName;
				batch15Subjects[i]=subjectName;
				myfile2<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 10:00 A.M 12:00 P.M\t\t "<<subjectName<<endl;
				examStartDate++;
			}
		}
		//samething is happening
		void setSubjectsForJuniors()									//getting the subjects of Juniors in CS Department
		{
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				cout<<endl<<"Exception occured"<<endl;
			}
			examStartMonth=startmonth;
			examStartYear=startyear;
			
			cout<<"Enter the Number of Subject of Juniors : "<<endl;
			cin>>juniorSubjectCount;
			batch14Subjects=new string[juniorSubjectCount];
			ofstream myfile3;
			myfile3.open("SubjectsCSJuniorDepartment.txt"); 
			myfile3<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl; 
			for (int i=0;i<juniorSubjectCount;i++)
			{
				if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				string subjectName;
				cout<<"Enter the Subject of Batch 14 : "<<endl;
				cin>>subjectName;
				batch14Subjects[i]=subjectName;
				myfile3<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 12:00 P.M- 03:00 P.M\t\t "<<subjectName<<endl;
				examStartDate++;
			}
		}
		//samething is happening
		void setSubjectsForSeniors()									//getting the subjects of Seniors in CS Department
		{
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				cout<<endl<<"Exception occured"<<endl;
			}
			//examStartDate=startdate;
			examStartMonth=startmonth;
			examStartYear=startyear;
			
			cout<<"Enter the Number of Subject of Seniors : "<<endl;
			cin>>seniorSubjectCount;
			batch13Subjects=new string[seniorSubjectCount];
			ofstream myfile4;
			myfile4.open("SubjectsCSSeniorDepartment.txt"); 
			myfile4<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl; 
			for (int i=0;i<seniorSubjectCount;i++)
			{
				if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				string subjectName;
				cout<<"Enter the Subject of Batch 13 : "<<endl;
				cin>>subjectName;
				batch13Subjects[i]=subjectName;
				myfile4<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 2:00 P.M 4:00 P.M\t\t "<<subjectName<<endl;
				examStartDate++;
			}
		}
		~CS_Department()
		{
			delete [] batch16Subjects;
			delete [] batch15Subjects;
			delete [] batch14Subjects;
			delete [] batch13Subjects;
		}
};

class EE_Department: public Department
{
	private:
		int startdate;
		int startmonth;
		int startyear;
		Exam_Room*ER;
		string * batch16Subjects;											//it holds the subjects of every batch
		string * batch15Subjects;
		string * batch14Subjects;
		string * batch13Subjects;
	protected:	
		int freshmenSubjectCount;
		int sophomoreSubjectCount;
		int juniorSubjectCount;
		int seniorSubjectCount;
	public:
		EE_Department()
		{
			
		}
		void setExamDates()						//setting up examdates
		{
			cout<<"Starting date Of Exam (DD-MM-YYYY) : "<<endl;
			cin>>startdate>>startmonth>>startyear;
		}	
		void setSubjectsForFreshmen()									//getting the subjects of freshmens in CS Department
		{
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				cout<<endl<<"Exception occured"<<endl;
			}
			examStartMonth=startmonth;
			examStartYear=startyear;
			cout<<"Enter the Number of Subject of Freshmen : "<<endl;
			cin>>freshmenSubjectCount;
			batch16Subjects=new string[freshmenSubjectCount];
			ofstream myfile1;
			string subjectName;
			myfile1.open("SubjectsEEFreshmenDepartment.txt");
			myfile1<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl; 
			for (int i=0;i<freshmenSubjectCount;i++)
			{
				if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				cout<<"Enter the Subject of Batch 16 : "<<endl;
				cin>>subjectName;
				batch16Subjects[i]=subjectName;
				myfile1<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 9:00 A.M 11:00 P.M\t\t "<<subjectName<<endl;
				examStartDate++;
			}
		}
		void setSubjectsForSophomore()									//getting the subjects of Sophomores in CS Department
		{
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				cout<<endl<<"Exception occured"<<endl;
			}
			examStartMonth=startmonth;
			examStartYear=startyear;
			cout<<"Enter the Number of Subject of Sophomore : "<<endl;
			cin>>sophomoreSubjectCount;
			batch15Subjects=new string[sophomoreSubjectCount];
			ofstream myfile2;
			myfile2.open("SubjectsEESophomoreDepartment.txt"); 
			myfile2<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl;
			for (int i=0;i<sophomoreSubjectCount;i++)
			{
				if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				string subjectName;
				cout<<"Enter the Subject of Batch 15 : "<<endl;
				cin>>subjectName;
				batch15Subjects[i]=subjectName;
				myfile2<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 10:00 A.M 12:00 P.M\t\t "<<subjectName<<endl;
				examStartDate++;
			}
		}
		void setSubjectsForJuniors()									//getting the subjects of Juniors in CS Department
		{
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				cout<<endl<<"Exception occured"<<endl;
			}
			examStartMonth=startmonth;
			examStartYear=startyear;
			
			cout<<"Enter the Number of Subject of Juniors : "<<endl;
			cin>>juniorSubjectCount;
			batch14Subjects=new string[juniorSubjectCount];
			ofstream myfile3;
			myfile3.open("SubjectsEEJuniorDepartment.txt"); 
			myfile3<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl;
			for (int i=0;i<juniorSubjectCount;i++)
			{
				if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				string subjectName;
				cout<<"Enter the Subject of Batch 14 : "<<endl;
				cin>>subjectName;
				batch14Subjects[i]=subjectName;
				myfile3<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 12:00 P.M 02:00 P.M\t\t\t "<<subjectName<<endl;
				examStartDate++;
			}
		}
		void setSubjectsForSeniors()									//getting the subjects of Seniors in CS Department
		{
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				cout<<endl<<"Exception occured"<<endl;
			}
			examStartMonth=startmonth;
			examStartYear=startyear;
			
			cout<<"Enter the Number of Subject of Seniors : "<<endl;
			cin>>seniorSubjectCount;
			batch13Subjects=new string[seniorSubjectCount];
			ofstream myfile4;
			myfile4.open("SubjectsEESeniorDepartment.txt"); 
			myfile4<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl;
			for (int i=0;i<seniorSubjectCount;i++)
			{
				if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				string subjectName;
				cout<<"Enter the Subject of Batch 13 : "<<endl;
				cin>>subjectName;
				batch13Subjects[i]=subjectName;
				myfile4<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 2:00 P.M 04:00 P.M\t\t "<<subjectName<<endl;
				examStartDate++;
			}
		}
		~EE_Department()
		{
			delete [] batch16Subjects;
			delete [] batch15Subjects;
			delete [] batch14Subjects;
			delete [] batch13Subjects;
		}
};

class BBA_Department: public Department
{
	private:
		int startdate;
		int startmonth;
		int startyear;
		Exam_Room*ER;
		string * batch16Subjects;											//it holds the subjects of every batch
		string * batch15Subjects;
		string * batch14Subjects;
		string * batch13Subjects;
	protected:	
		int freshmenSubjectCount;
		int sophomoreSubjectCount;
		int juniorSubjectCount;
		int seniorSubjectCount;
	public:
		BBA_Department()
		{
			
		}
		void setExamDates()						//setting up examdates
		{
			cout<<"Starting date Of Exam (DD-MM-YYYY) : "<<endl;
			cin>>startdate>>startmonth>>startyear;
		}	
		void setSubjectsForFreshmen()									//getting the subjects of freshmens in CS Department
		{
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				cout<<endl<<"Exception occured"<<endl;
			}
			examStartMonth=startmonth;
			examStartYear=startyear;
			
			cout<<"Enter the Number of Subject of Freshmen : "<<endl;
			cin>>freshmenSubjectCount;
			batch16Subjects=new string[freshmenSubjectCount];
			ofstream myfile1;
			string subjectName;
			myfile1.open("SubjectsBBAFreshmenDepartment.txt"); 
			myfile1<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl;
			for (int i=0;i<freshmenSubjectCount;i++)
			{
				if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				cout<<"Enter the Subject of Batch 16 : "<<endl;
				cin>>subjectName;
				batch16Subjects[i]=subjectName;
				myfile1<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 9:00 A.M 11:00 P.M\t\t "<<subjectName<<endl;
				examStartDate++;
			}
		}
		void setSubjectsForSophomore()									//getting the subjects of Sophomores in CS Department
		{
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				cout<<endl<<"Exception occured"<<endl;
			}
			examStartMonth=startmonth;
			examStartYear=startyear;
			
			cout<<"Enter the Number of Subject of Sophomore : "<<endl;
			cin>>sophomoreSubjectCount;
			batch15Subjects=new string[sophomoreSubjectCount];
			ofstream myfile2;
			myfile2.open("SubjectsBBASophomoreDepartment.txt");
			myfile2<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl; 
			for (int i=0;i<sophomoreSubjectCount;i++)
			{
				if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				string subjectName;
				cout<<"Enter the Subject of Batch 15 : "<<endl;
				cin>>subjectName;
				batch15Subjects[i]=subjectName;
				myfile2<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 10:00 A.M 12:00 P.M\t\t "<<subjectName<<endl;
				examStartDate++;
			}
		}
		void setSubjectsForJuniors()									//getting the subjects of Juniors in CS Department
		{
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				cout<<endl<<"Exception occured"<<endl;
			}
			examStartMonth=startmonth;
			examStartYear=startyear;
			
			cout<<"Enter the Number of Subject of Juniors : "<<endl;
			cin>>juniorSubjectCount;
			batch14Subjects=new string[juniorSubjectCount];
			ofstream myfile3;
			myfile3.open("SubjectsBBAJuniorDepartment.txt");
			myfile3<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl; 
			for (int i=0;i<juniorSubjectCount;i++)
			{
				if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				string subjectName;
				cout<<"Enter the Subject of Batch 14 : "<<endl;
				cin>>subjectName;
				batch14Subjects[i]=subjectName;
				myfile3<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 12-30 P.M- 03:30 P.M\t\t "<<subjectName<<endl;
				examStartDate++;
			}
		}
		void setSubjectsForSeniors()									//getting the subjects of Seniors in CS Department
		{
			int examStartDate;
			int examStartMonth;
			int examStartYear;
			try
			{
				if(examStartDate<0)
				{
					throw(examStartDate);
				}
				else
				{
					examStartDate=startdate;
				}
			}
			catch(int val)
			{
				cout<<endl<<"Exception occured"<<endl;
			}
			examStartMonth=startmonth;
			examStartYear=startyear;
			
			cout<<"Enter the Number of Subject of Seniors : "<<endl;
			cin>>seniorSubjectCount;
			batch13Subjects=new string[seniorSubjectCount];
			ofstream myfile4;
			myfile4.open("SubjectsBBASeniorDepartment.txt"); 
			myfile4<<"DATE\t\tTIME\t\t\t\tCOURSE"<<endl;
			for (int i=0;i<seniorSubjectCount;i++)
			{if(examStartDate==32&&examStartMonth==1)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==29&&examStartMonth==2)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==3)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==4)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==5)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==6)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==7)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==8)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==9)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==10)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==31&&examStartMonth==11)
				{
					examStartDate=1;
					examStartMonth++;
				}
				else if(examStartDate==32&&examStartMonth==12)
				{
					examStartDate=1;
					examStartMonth=1;
					examStartYear++;
				}
				system("cls");
				string subjectName;
				cout<<"Enter the Subject of Batch 13 : "<<endl;
				cin>>subjectName;
				batch13Subjects[i]=subjectName;
				myfile4<<examStartDate<<"-"<<examStartMonth<<"-"<<examStartYear<<"\t 2:00 P.M 4:00 P.M\t\t "<<subjectName<<endl;
				examStartDate++;
			}
		}
		~BBA_Department()
		{
			delete [] batch16Subjects;
			delete [] batch15Subjects;
			delete [] batch14Subjects;
			delete [] batch13Subjects;
		}	
};

#endif
