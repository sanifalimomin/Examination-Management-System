#include<windows.h>

#include"CP_Project_Skeleton.cpp"
/* This is where all the input to the window goes to */
HWND button1,button2,button3,button4,button5,button6,button7,button8,button9,button10,button11,button12,button13,buttonClose;
HWND textBox;
HWND textField0,textField1,textField2,textField3,textField4,textField5,textField6,textField7,textField8;
HWND textField9,textField10,textField11,textField12,textField13,textField14,textField15;

LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		case WM_CREATE:{
			
			textField0 = CreateWindow("STATIC",
										"    Welcome To FAST-NUCES",
										WS_VISIBLE | WS_CHILD | WS_BORDER ,
										115,20,200,20,
										hwnd,
										NULL,NULL,NULL);
								
			textField1 = CreateWindow("STATIC",
									" Examination Management System",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									100,50,230,20,
									hwnd,
									NULL,NULL,NULL);
			
			textField2 = CreateWindow("STATIC",
									"Set Duties of Teachers",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,100,250,20,
									hwnd,
									NULL,NULL,NULL);
			button1 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,100,80,20,
									hwnd,
									(HMENU) 1,NULL,NULL);
				
			textField3 = CreateWindow("STATIC",
									"Set Time Table of CS Department",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,130,250,20,
									hwnd,
									NULL,NULL,NULL);
			button2 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,130,80,20,
									hwnd,
									(HMENU) 2,NULL,NULL);
			
			textField4 = CreateWindow("STATIC",
									"Set Time Table of EE Department",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,160,250,20,
									hwnd,
									NULL,NULL,NULL);
			button3 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,160,80,20,
									hwnd,
									(HMENU) 3,NULL,NULL);
									
			textField5 = CreateWindow("STATIC",
									"Set Time Table of BBA Department",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,190,250,20,
									hwnd,
									NULL,NULL,NULL);
			button4 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,190,80,20,
									hwnd,
									(HMENU) 4,NULL,NULL);
		
			textField6 = CreateWindow("STATIC",
									"Add new record of Teacher",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,220,250,20,
									hwnd,
									NULL,NULL,NULL);
			button5 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,220,80,20,
									hwnd,
									(HMENU) 5,NULL,NULL);
		
			textField7 = CreateWindow("STATIC",
									"Add new record of Student",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,250,250,20,
									hwnd,
									NULL,NULL,NULL);
			button6 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,250,80,20,
									hwnd,
									(HMENU) 6,NULL,NULL);
		
			textField8 = CreateWindow("STATIC",
									"View record of Teachers",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,280,250,20,
									hwnd,
									NULL,NULL,NULL);
			button7 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,280,80,20,
									hwnd,
									(HMENU) 7,NULL,NULL);
		
			textField9 = CreateWindow("STATIC",
									"View record of Students",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,310,250,20,
									hwnd,
									NULL,NULL,NULL);
			button8 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,310,80,20,
									hwnd,
									(HMENU) 8,NULL,NULL);
		
			textField10 = CreateWindow("STATIC",
									"View duties of Teachers",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,340,250,20,
									hwnd,
									NULL,NULL,NULL);
			button9 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,340,80,20,
									hwnd,
									(HMENU) 9,NULL,NULL);
			
			textField11 = CreateWindow("STATIC",
									"View CS Department Time Table",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,370,250,20,
									hwnd,
									NULL,NULL,NULL);
			button10 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,370,80,20,
									hwnd,
									(HMENU) 10,NULL,NULL);
		
			textField12 = CreateWindow("STATIC",
									"View EE Department Time Table",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,400,250,20,
									hwnd,
									NULL,NULL,NULL);
			button11 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,400,80,20,
									hwnd,
									(HMENU) 11,NULL,NULL);
		
			textField13 = CreateWindow("STATIC",
									"View BBA Department Time Table",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,430,250,20,
									hwnd,
									NULL,NULL,NULL);
			button12 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,430,80,20,
									hwnd,
									(HMENU) 12,NULL,NULL);
			textField14 = CreateWindow("STATIC",
									"View Student Exam Room",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									30,460,250,20,
									hwnd,
									NULL,NULL,NULL);
			button13 = CreateWindow("BUTTON",
									"Click Here",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									300,460,80,20,
									hwnd,
									(HMENU) 13,NULL,NULL);
			
			buttonClose = CreateWindow("BUTTON",
									"Close",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									180,500,80,20,
									hwnd,
									(HMENU) 14,NULL,NULL);
									
			textField15 = CreateWindow("STATIC",
									"          Project Prepared By:\n\n          Sanif Ali Momin (K16-3966)\n",
									WS_VISIBLE | WS_CHILD | WS_BORDER,
									90,550,250,100,
									hwnd,
									NULL,NULL,NULL);
			break;
		}
		
		case WM_COMMAND:{
			switch(LOWORD(wParam))
			{
				case 1:
					setDuties(hwnd);
					break;
				case 2:
					setCSTimetable(hwnd);
					break;
				case 3:
					setEETimetable(hwnd);
					break;	
				case 4:
					setBBATimetable(hwnd);
					break;
				case 5:
					setTeachersRecord(hwnd);
					break;
				case 6:
					setStudentRecord(hwnd);
					break;
				case 7:
					viewTeachersRecord(hwnd);
					break;
				case 8:
					viewStudentRecord(hwnd);
					break;
				case 9:
					viewTeachersDuties(hwnd);
					break;
				case 10:
					viewCSTimetable(hwnd);
					break;
				case 11:
					viewEETimetable(hwnd);
					break;
				case 12:
					viewBBATimetable(hwnd);
					break;
				case 13:
					viewExam_Room(hwnd);
					break;
				case 14:
					PostQuitMessage(0);
					break;
			}
			break;
		}
		/* Upon destruction, tell the main thread to stop */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		
		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window */
	HWND hwnd; /* A 'HANDLE', hence the H, or a pointer to our window */
	MSG msg; /* A temporary location for all messages */

	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon */

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	system("COLOR A0");
	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Examination Management System",WS_VISIBLE|WS_MINIMIZEBOX|WS_SYSMENU,
		CW_USEDEFAULT, /* x */
		CW_USEDEFAULT, /* y */
		420, /* width */
		700, /* height */
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		This is the heart of our program where all input is processed and 
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	return msg.wParam;
	
}
