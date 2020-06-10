#ifndef Exam_Room_H
#define Exam_Room_H
#include<iostream>
#include<fstream>
using namespace std;

class Exam_Room
{
	private: 
        int *classRoom_Available;
    	int *extensionRoom_Available;
    public:
    	int roomAvailable;
    	int extensionAvailable;
    	Exam_Room()
    	{
    		//constructor assigning nothing
		}
    	void askForClass_Room()																//getting the free classrooms for examination
		{
			//asking for the classrooms available on examday
			ofstream myfile;
			myfile.open("ClassRooms.txt");
			cout<<endl;
			cout<<"Enter how many classrooms are available for examination: "<<endl;
			cin>>roomAvailable;
			//total number of classrooms available
			classRoom_Available=new int[roomAvailable];
			for(int i=0;i<roomAvailable;i++)
			{	
				//asking the number of classroom
				int number;			
				system("cls");
				cout<<endl;
				cout<<"Enter only the number of classRoom: "<<endl;
				cin>>number;
				if(number>=1 && number<30)
				{
					//conditions
					classRoom_Available[i]=number;
					if(i!=roomAvailable-1)
					{
						//writing in the file
						myfile<<classRoom_Available[i]<<endl;
				    }
				    else
				    {
				    	//writing in the file
				    	myfile<<classRoom_Available[i];
					}
				}  
				else
				{
					cout<<"ClassRoom not available"<<endl;
					i--;
				}
			}
		}														
	    
		void viewExam_Rooms()														
		{
			//allocating examroom to the students
			int chd;
			int count;
			Label:
			cout<<"How many Exam rooms are Available : "<<endl;
			cin>>count;
			classRoom_Available=new int[count];
			system("cls");
			cout<<"Enter Your Choice : "<<endl;
			cout<<"1) Freshmen Student "<<endl;
			cout<<"2) Sophomore Student "<<endl;
			cout<<"3) Junior Student "<<endl;
			cout<<"4) Senior Student "<<endl;
			cout<<"5)Exit "<<endl;
			cin>>chd;
			system("cls");
			switch(chd)
			{
				case 1:
				{
					for(int i=0;i<count;i++)
					{
						cout<<"Enter the vacant Room "<<i+1<<endl;
						cin>>classRoom_Available[i];
						system("cls");
					}
					int j,start,end;
					cout<<"Enter the Staring ID : "<<endl;
					cin>>start;
					system("cls");
					cout<<"Enter the Ending ID : "<<endl;
					cin>>end;
					system("cls");
					cout<<"Roll No \t\t Exam Room"<<endl;
					j=0;
					classRoom_Available[j];
					int a=start;
					for(int i=a;i<=end;i++)
					{
						classRoom_Available[j];
						if(i==a+10)
						{
							a=i;
							j++;
							
						}
						if(j==count)
						{
							cout<<"No Rooms Available For rest of the students : "<<endl;
							char ch;
							cout<<"Thankyou !!! Press any key to exit : "<<endl;
							cin>>ch;
							system("cls");
							goto Label;
							break;
							
						}
						cout<<"15k-"<<i<<"\t\t"<<"CR:"<<classRoom_Available[j]<<endl;
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
					for(int i=0;i<count;i++)
					{
						cout<<"Enter the vacant Room "<<i+1<<endl;
						cin>>classRoom_Available[i];
						system("cls");
					}
					int j,start,end;
					cout<<"Enter the Staring ID : "<<endl;
					cin>>start;
					system("cls");
					cout<<"Enter the Ending ID : "<<endl;
					cin>>end;
					system("cls");
					cout<<"Roll No \t\t Exam Room"<<endl;
					j=0;
					classRoom_Available[j];
					int a=start;
					for(int i=a;i<=end;i++)
					{
						classRoom_Available[j];
						if(i==a+10)
						{
							a=i;
							j++;
							
						}
						if(j==count)
						{
							cout<<"No Rooms Available For rest of the students : "<<endl;
							char ch;
							cout<<"Thankyou !!! Press any key to exit : "<<endl;
							cin>>ch;
							system("cls");
							goto Label;
							break;
						}
						cout<<"14k-"<<i<<"\t\t"<<"CR:"<<classRoom_Available[j]<<endl;
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
					for(int i=0;i<count;i++)
					{
						cout<<"Enter the vacant Room "<<i+1<<endl;
						cin>>classRoom_Available[i];
						system("cls");
					}
					int j,start,end;
					cout<<"Enter the Staring ID : "<<endl;
					cin>>start;
					system("cls");
					cout<<"Enter the Ending ID : "<<endl;
					cin>>end;
					system("cls");
					cout<<"Roll No \t\t Exam Room"<<endl;
					j=0;
					classRoom_Available[j];
					int a=start;
					for(int i=a;i<=end;i++)
					{
						classRoom_Available[j];
						if(i==a+10)
						{
							a=i;
							j++;
							
						}
						if(j==count)
						{
							cout<<"No Rooms Available For rest of the students : "<<endl;
							char ch;
							cout<<"Thankyou !!! Press any key to exit : "<<endl;
							cin>>ch;
							system("cls");
							goto Label;
							break;
						}
						cout<<"13k-"<<i<<"\t\t"<<"CR:"<<classRoom_Available[j]<<endl;
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
					for(int i=0;i<count;i++)
					{
						cout<<"Enter the vacant Room  "<<i+1<<endl;
						cin>>classRoom_Available[i];
						system("cls");
					}
					int j,start,end;
					cout<<"Enter the Staring ID : "<<endl;
					cin>>start;
					system("cls");
					cout<<"Enter the Ending ID : "<<endl;
					cin>>end;
					system("cls");
					cout<<"Roll No \t\t Exam Room"<<endl;
					j=0;
					classRoom_Available[j];
					int a=start;
					for(int i=a;i<=end;i++)
					{
						classRoom_Available[j];
						if(i==a+10)
						{
							a=i;
							j++;
							
						}
						if(j==count)
						{
							cout<<"No Rooms Available For rest of the students : "<<endl;
							char ch;
							cout<<"Thankyou !!! Press any key to exit : "<<endl;
							cin>>ch;
							system("cls");
							goto Label;
							break;
						}
						cout<<"12k-"<<i<<"\t\t"<<"CR:"<<classRoom_Available[j]<<endl;
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
					exit(1);
					system("cls");
					break;
				}
				
				default :
				{
					cout<<"Wrong Choice :"<<endl;
					break;
				}
			}
		}								//students can view their examroom
	    ~Exam_Room()
	    {
	    	delete classRoom_Available;
		}
};

#endif
