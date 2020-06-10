/*  Member #1 ALEEM Zulfiqar (15k-2847) Section E
	Member #2 AZEEM Khalid (15K-2882) Section E
	Member #3 Syed Muhammad HUMRAAN (15k-2882) Section E
	Member #4 Syed FAROOQ Ahmed (15k-2166) Section D   */
//Project Name: Examination And Invigilation Management System 
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<fstream>
#include"University.h"
#include"Department.h"
#include"Student.h"
#include"Teacher.h"
#include"Exam_Room.h"
#include"TimeTable.h"
#include<windows.h>
using namespace std;
class University;
class Department;
class Teacher;
class Student;
class CS_Department;
class EE_Department;
class BBA_Department;
class Exam_Room;
class TimeTable;
class Invigilator;

void setDuties(HWND hwnd)
{
	system("COLOR B0");
	::MessageBox (hwnd,"Press Ok To Set Duties of teachers  ","Button was clicked",MB_OK);
	system("cls");
			Invigilator in;
			in.askForTeachers();
			system("cls");
			Exam_Room er;
			er.askForClass_Room();
			system("cls");
			in.setTeachersDuties();
			system("cls");
}
void setCSTimetable(HWND hwnd)
{
    system("COLOR B1");	
	::MessageBox (hwnd,"Press OK To set CS TimeTable  ","Button was clicked",MB_OK);
	system("cls");
	Department d;
	CS_Department cs;
	cs.setExamDates();
	cs.setSubjectsForFreshmen();
	system("cls");
	cs.setSubjectsForSophomore();
	system("cls");
	cs.setSubjectsForJuniors();
	system("cls");
	cs.setSubjectsForSeniors();
	system("cls");
	TimeTable t1;
	system("cls");
			
}
void setEETimetable(HWND hwnd)
{
	system("COLOR F1");
	::MessageBox (hwnd,"Press OK To set EE TimeTable  ","Button was clicked",MB_OK);
	system("cls");
	Department d;
	EE_Department ee;
	ee.setExamDates();
	ee.setSubjectsForFreshmen();
	system("cls");
	ee.setSubjectsForSophomore();
	system("cls");
	ee.setSubjectsForJuniors();
	system("cls");
	ee.setSubjectsForSeniors();
	system("cls");
	TimeTable t1;
	system("cls");
}

void setBBATimetable(HWND hwnd)
{
	system("COLOR F0");
	::MessageBox (hwnd,"Press OK To set BBA TimeTable  ","Button was clicked",MB_OK);
	system("cls");
	Department d;
	BBA_Department bba;
	bba.setExamDates();
	bba.setSubjectsForFreshmen();
	system("cls");
	bba.setSubjectsForSophomore();
	system("cls");
	bba.setSubjectsForJuniors();
	system("cls");
	bba.setSubjectsForSeniors();
	system("cls");
	TimeTable t1;
	system("cls");
}
void setTeachersRecord(HWND hwnd)
{
	system("COLOR B3");
	::MessageBox (hwnd,"Press OK To Add Records of teachers  ","Button was clicked",MB_OK);
	system("cls");
	Teacher t;
	t.teacherRecord();
	system("cls");
}
void setStudentRecord(HWND hwnd)
{
	system("COLOR F2");
	::MessageBox (hwnd,"Press OK To Add Records of Students  ","Button was clicked",MB_OK);
	system("cls");
	Student s;
	s.studentRecord();
	system("cls");
}
void viewTeachersRecord(HWND hwnd)
{
	system("COLOR F4");
	::MessageBox (hwnd,"Press OK To View Records of teachers  ","Button was clicked",MB_OK);
	system("cls");
	char ch;
	Teacher t2;
	t2.viewTeacherRecords();
	cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
	cin>>ch;
	system("cls");
}

void viewStudentRecord(HWND hwnd)
{
	system("COLOR F5");
	::MessageBox (hwnd,"Press OK To View Records of Student  ","Button was clicked",MB_OK);
	system("cls");
	Student s;
	char ch;
	s.viewStudentRecords();
	cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
	cin>>ch; 
	system("cls");
	
}
void viewTeachersDuties(HWND hwnd)
{
	system("COLOR F5");
	::MessageBox (hwnd,"Press OK To View Duties of teachers  ","Button was clicked",MB_OK);
	system("cls");
	char ch;
	Invigilator i;
	i.viewTeacherDuties();
	cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
	cin>>ch;
	system("cls");
}
void viewCSTimetable(HWND hwnd)
{
	system("COLOR F1");
	::MessageBox (hwnd,"Press OK To View CS TimeTable  ","Button was clicked",MB_OK);
	system("cls");
	char ch;
	TimeTable time;
	time.viewCSTimeTable();
	cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
	cin>>ch;
	system("cls");
}
void viewEETimetable(HWND hwnd)
{
	system("COLOR F6");
	::MessageBox (hwnd,"Press OK To View EE TimeTable  ","Button was clicked",MB_OK);
	system("cls");
	char ch;
	TimeTable time;
	time.viewEETimeTable();
	cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
	cin>>ch;
	system("cls");
}
void viewBBATimetable(HWND hwnd)
{
	system("COLOR F3");
	::MessageBox (hwnd,"Press OK To View BBA TimeTable  ","Button was clicked",MB_OK);
	system("cls");
	char ch;
	TimeTable time;
	time.viewBBATimeTable();
	cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
	cin>>ch;
	system("cls");
}
void viewExam_Room(HWND hwnd)
{
	system("COLOR E0");
	::MessageBox (hwnd,"Press OK To View Available Exam Rooms ","Button was clicked",MB_OK);
	system("cls");
	char ch;
	Exam_Room e;
	e.viewExam_Rooms();
	cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
	cin>>ch;
	system("cls");
}
