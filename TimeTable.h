#ifndef TimeTable_H
#define TimeTable_H
#include<iostream>
#include<fstream>

using namespace std;

class TimeTable
{
	private:
		int examStartDate;
	public:
		TimeTable()
		{
			//default constructor setting nothing
		}		
		void viewCSTimeTable()
		{
			Label:
			int chi;
			cout<<"Enter Your Choice : "<<endl;
			cout<<"1-FRESHMAN TIMETABLE: "<<endl;
			cout<<"2-SOPHOMORE TIMETABLE: "<<endl;
			cout<<"3-JUNIOR TIMETABLE: "<<endl;
			cout<<"4-SENIOR TIMETABLE: "<<endl;
			cout<<"5-ALL TIMETABLE : "<<endl;
			cout<<"6-EXIT : "<<endl;
			cin>>chi;
			//asking your choice of your batch
			switch (chi)
			{
				case 1:
				{
					//opening the freshmen timetable only
					system("cls");
					ifstream myfile3;
					string name;
					cout<<"FRESHMAN TIMETABLE: "<<endl;
					myfile3.open("SubjectsCSFreshmenDepartment.txt");
					//opening and then reading the file by the name SubjectsCSFreshmenDepartment
					while(myfile3)
					{
						getline(myfile3,name);
						//getting every line of the file
						cout<<name<<endl;
						//printing the lines of the file
					}
					char ch;
					cout<<"Thankyou !!! Press any key to exit : "<<endl;
					cin>>ch;
					system("cls");
					goto Label;
					break;
				}
				case 2:
				{
					system("cls");
					//opening the sophomore timetable only
					ifstream myfile4;
					string name2;
					cout<<"Sophomore TIMETABLE: "<<endl;
					myfile4.open("SubjectsCSSophomoreDepartment.txt");
					//opening and then reading the file by the name SubjectsCSSophomoreDepartment
					while(myfile4)
					{
						getline(myfile4,name2);
						//getting everyline of the file
						cout<<name2<<endl;
						//printing the lines of the file
					}
					char ch;
					cout<<"Thankyou !!! Press any key to exit : "<<endl;
					cin>>ch;
					system("cls");
					goto Label;
					break;
				}
				case 3:
				{
					system("cls");
					//opening the junior timetable only
					ifstream myfile5;
						string name3;
						cout<<"JUNIOR TIMETABLE: "<<endl;
						myfile5.open("SubjectsCSJuniorDepartment.txt");
						//opening and then reading the file by the name SubjectsCSJuniorDepartment
						while(myfile5)
						{
							getline(myfile5,name3);
							//getting everyline of the file
							cout<<name3<<endl;
							//printing the lines of the file
						}
						char ch;
						cout<<"Thankyou !!! Press any key to exit : "<<endl;
						cin>>ch;
						system("cls");
						goto Label;
						break;
				}
				case 4:
				{
					system("cls");
					//opening the senior timetable only
					ifstream myfile6;
					string name4;
					cout<<"SENIOR TIMETABLE: "<<endl;
					myfile6.open("SubjectsCSSeniorDepartment.txt");
					//opening and then reading the file by the name SubjectsCSSeniorDepartment
					while(myfile6)
					{
						getline(myfile6,name4);
						//getting everyline of the file
						cout<<name4<<endl;
						//printing the lines of the file
					}
					char ch;
					cout<<"Thankyou !!! Press any key to exit : "<<endl;
					cin>>ch;
					system("cls");
					goto Label;
					break;
				}
				
				case 5:
				{		system("cls");
						//opening the timetable of every batch
						ifstream myfile3;
						string name;
						cout<<"FRESHMAN TIMETABLE: "<<endl;
						myfile3.open("SubjectsCSFreshmenDepartment.txt");
						while(myfile3)
						{
							//getting and printing the freshman timetable
							getline(myfile3,name);
							cout<<name<<endl;
						}
						ifstream myfile4;
						string name2;
						cout<<"Sophomore TIMETABLE: "<<endl;
						myfile4.open("SubjectsCSSophomoreDepartment.txt");
						while(myfile4)
						{
							//getting and printing the Sophomore timetable
							getline(myfile4,name2);
							cout<<name2<<endl;
						}
						ifstream myfile5;
						string name3;
						cout<<"JUNIOR TIMETABLE: "<<endl;
						myfile5.open("SubjectsCSJuniorDepartment.txt");
						while(myfile5)
						{
							//getting and printing the Junior timetable
							getline(myfile5,name3);
							cout<<name3<<endl;
						}
						ifstream myfile6;
						string name4;
						cout<<"SENIOR TIMETABLE: "<<endl;
						myfile6.open("SubjectsCSSeniorDepartment.txt");
						while(myfile6)
						{
							//getting and printing the Senior timetable
							getline(myfile6,name4);
							cout<<name4<<endl;
						}
						char ch;
						cout<<"Thankyou !!! Press any key to exit : "<<endl;
						cin>>ch;
						system("cls");
						goto Label;
						
						break;
				}
				case 6:
				{
					system("cls");
					exit(1);
					break;
				}
				default:
				{
					system("cls");
					cout<<"Wrong Choice : "<<endl;
					break;
				}
			}
		}
		void viewEETimeTable()											//view the timetable for any batch
		{
			Label:
			int chi;
			cout<<"Enter Your Choice : "<<endl;
			cout<<"1-FRESHMAN TIMETABLE: "<<endl;
			cout<<"2-SOPHOMORE TIMETABLE: "<<endl;
			cout<<"3-JUNIOR TIMETABLE: "<<endl;
			cout<<"4-SENIOR TIMETABLE: "<<endl;
			cout<<"5-ALL TIMETABLE : "<<endl;
			cout<<"6-EXIT : "<<endl;
			cin>>chi;
			//asking your choice to view the timetable
			switch (chi)
			{
				case 1:
				{
					system("cls");
					ifstream myfile3;
					string name;
					cout<<"FRESHMAN TIMETABLE: "<<endl;
					myfile3.open("SubjectsEEFreshmenDepartment.txt");
					while(myfile3)
					{
						//getting and printing the freshman timetable
						getline(myfile3,name);
						cout<<name<<endl;
					}
					char ch;
					cout<<"Thankyou !!! Press any key to exit : "<<endl;
					cin>>ch;
					system("cls");
					goto Label;
					break;
				}
				case 2:
				{
					system("cls");
					ifstream myfile4;
					string name2;
					cout<<"Sophomore TIMETABLE: "<<endl;
					myfile4.open("SubjectsEESophomoreDepartment.txt");
					while(myfile4)
					{
						//getting and printing the sophomore timetable
						getline(myfile4,name2);
						cout<<name2<<endl;
					}
					char ch;
					cout<<"Thankyou !!! Press any key to exit : "<<endl;
					cin>>ch;
					system("cls");
					goto Label;
					break;
				}
				case 3:
				{
					system("cls");
					ifstream myfile5;
						string name3;
						cout<<"JUNIOR TIMETABLE: "<<endl;
						myfile5.open("SubjectsEEJuniorDepartment.txt");
						while(myfile5)
						{
							//getting and printing the junior timetable
							getline(myfile5,name3);
							cout<<name3<<endl;
						}
						char ch;
						cout<<"Thankyou !!! Press any key to exit : "<<endl;
						cin>>ch;
						system("cls");
						goto Label;
						break;
				}
				case 4:
				{
					system("cls");
					ifstream myfile6;
					string name4;
					cout<<"SENIOR TIMETABLE: "<<endl;
					myfile6.open("SubjectsEESeniorDepartment.txt");
					while(myfile6)
					{
						//getting and printing the senior timetable
						getline(myfile6,name4);
						cout<<name4<<endl;
					}
					char ch;
					cout<<"Thankyou !!! Press any key to exit : "<<endl;
					cin>>ch;
					system("cls");
					goto Label;
					break;
				}
				
				case 5:
				{		
						system("cls");
						ifstream myfile3;
						string name;
						cout<<"FRESHMAN TIMETABLE: "<<endl;
						myfile3.open("SubjectsEEFreshmenDepartment.txt");
						while(myfile3)
						{
							//getting and printing the freshman timetable
							getline(myfile3,name);
							cout<<name<<endl;
						}
						ifstream myfile4;
						string name2;
						cout<<"Sophomore TIMETABLE: "<<endl;
						myfile4.open("SubjectsEESophomoreDepartment.txt");
						while(myfile4)
						{
							//getting and printing the sophomore timetable
							getline(myfile4,name2);
							cout<<name2<<endl;
						}
						ifstream myfile5;
						string name3;
						cout<<"JUNIOR TIMETABLE: "<<endl;
						myfile5.open("SubjectsEEJuniorDepartment.txt");
						while(myfile5)
						{
							//getting and printing the junior timetable
							getline(myfile5,name3);
							cout<<name3<<endl;
						}
						ifstream myfile6;
						string name4;
						cout<<"SENIOR TIMETABLE: "<<endl;
						myfile6.open("SubjectsEESeniorDepartment.txt");
						while(myfile6)
						{
							//getting and printing the senior timetable
							getline(myfile6,name4);
							cout<<name4<<endl;
						}
						break;
				}
				case 6:
				{
					system("cls");
					exit(1);
					break;
				}
				default:
				{
					//if the enter the wrong choice
					system("cls");
					cout<<"Wrong Choice : "<<endl;
					break;
				}
			}
		}
		void viewBBATimeTable()											//view the timetable for any batch
		{
			Label:
			int chi;
			cout<<"Enter Your Choice : "<<endl;
			cout<<"1-FRESHMAN TIMETABLE: "<<endl;
			cout<<"2-SOPHOMORE TIMETABLE: "<<endl;
			cout<<"3-JUNIOR TIMETABLE: "<<endl;
			cout<<"4-SENIOR TIMETABLE: "<<endl;
			cout<<"5-ALL TIMETABLE : "<<endl;
			cout<<"6-EXIT : "<<endl;
			cin>>chi;
			//asking for your choice to view the timetable
			switch (chi)
			{
				case 1:
				{
					system("cls");
					ifstream myfile3;
					string name;
					cout<<"FRESHMAN TIMETABLE: "<<endl;
					myfile3.open("SubjectsBBAFreshmenDepartment.txt");
					while(myfile3)
					{
						//getting and printing the freshman timetable
						getline(myfile3,name);
						cout<<name<<endl;
					}
					char ch;
					cout<<"Thankyou !!! Press any key to exit : "<<endl;
					cin>>ch;
					system("cls");
					goto Label;
					break;
				}
				case 2:
				{
					system("cls");
					ifstream myfile4;
					string name2;
					cout<<"Sophomore TIMETABLE: "<<endl;
					myfile4.open("SubjectsBBASophomoreDepartment.txt");
					while(myfile4)
					{
						//getting and printing the sophomore timetable
						getline(myfile4,name2);
						cout<<name2<<endl;
					}
					char ch;
					cout<<"Thankyou !!! Press any key to exit : "<<endl;
					cin>>ch;
					system("cls");
					goto Label;
					break;
				}
				case 3:
				{
					system("cls");
					ifstream myfile5;
						string name3;
						cout<<"JUNIOR TIMETABLE: "<<endl;
						myfile5.open("SubjectsBBAJuniorDepartment.txt");
						while(myfile5)
						{
							//getting and printing the junior timetable
							getline(myfile5,name3);
							cout<<name3<<endl;
						}
						char ch;
						cout<<"Thankyou !!! Press any key to exit : "<<endl;
						cin>>ch;
						system("cls");
						goto Label;
						break;
				}
				case 4:
				{
					system("cls");
					ifstream myfile6;
					string name4;
					cout<<"SENIOR TIMETABLE: "<<endl;
					myfile6.open("SubjectsBBASeniorDepartment.txt");
					while(myfile6)
					{
						//getting and printing the senior timetable
						getline(myfile6,name4);
						cout<<name4<<endl;
					}
					char ch;
					cout<<"Thankyou !!! Press any key to exit : "<<endl;
					cin>>ch;
					system("cls");
					goto Label;
					break;
				}
				
				case 5:
				{		system("cls");
						ifstream myfile3;
						string name;
						cout<<"FRESHMAN TIMETABLE: "<<endl;
						myfile3.open("SubjectsBBAFreshmenDepartment.txt");
						while(myfile3)
						{
							//getting and printing the freshman timetable
							getline(myfile3,name);
							cout<<name<<endl;
						}
						ifstream myfile4;
						string name2;
						cout<<"Sophomore TIMETABLE: "<<endl;
						myfile4.open("SubjectsBBASophomoreDepartment.txt");
						while(myfile4)
						{
							//getting and printing the sophomore timetable
							getline(myfile4,name2);
							cout<<name2<<endl;
						}
						ifstream myfile5;
						string name3;
						cout<<"JUNIOR TIMETABLE: "<<endl;
						myfile5.open("SubjectsBBAJuniorDepartment.txt");
						while(myfile5)
						{
							//getting and printing the junior timetable
							getline(myfile5,name3);
							cout<<name3<<endl;
						}
						ifstream myfile6;
						string name4;
						cout<<"SENIOR TIMETABLE: "<<endl;
						myfile6.open("SubjectsBBASeniorDepartment.txt");
						while(myfile6)
						{
							//getting and printing the senior timetable
							getline(myfile6,name4);
							cout<<name4<<endl;
						}
						char ch;
						cout<<"Thankyou !!! Press any key to exit : "<<endl;
						cin>>ch;
						system("cls");
						goto Label;
						break;
				}
				case 6:
				{
					
					system("cls");
					exit(1);
					break;
				}
				default:
				{
					//when you enter wrong choice
					system("cls");
					cout<<"Wrong Choice : "<<endl;
					break;
				}
			}
		}
};
#endif
