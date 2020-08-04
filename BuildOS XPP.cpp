// BuildOS Beta V 2.9
#include "includes.h"

using namespace std;

string login_Login;
string login_password;
string folder_name;
string help;
string command;
int programs;
string off;
string calculator;
string area;
string perimeter;
string date;


void actions (string id, int exit, int a , int b, int c, int p, char symbol, int l, int w, int result, int returnn, string title, string text, char wait, string action) {
	ifstream opens;
	ifstream BIOS;
	BIOS.open("on off calculator.txt");
	BIOS >> calculator;
	BIOS.close();
	BIOS.open("on off perimeter.txt");
	BIOS >> perimeter;
	BIOS.close();
	BIOS.open("on off area.txt");
	BIOS >> area;
	BIOS.close();
	BIOS.open("on off date and time.txt");
	BIOS >> date;
	BIOS.close();
	
	opens.open("folder_title.txt");
	
	if (opens.is_open()) {
		opens >> folder_name;
	}
cout << "Available functions:" << endl;
if (calculator == "true") {
	cout << "Calculator.exe" << endl;
	cout << endl;
}
	if (perimeter == "true") {
		cout << "Perimeter.exe" << endl;
		cout << endl;
	}
	if (area == "true") {
		cout << "Area.exe" << endl;
		cout << endl;
	}
	if (date == "true") {
		cout << "time.exe" << endl;
		cout << endl;
	}
	
	cout << "alerb" << endl;
	cout << endl;
	cout << "console" << endl;
	cout << endl;
	cout << folder_name << endl;
	cout << endl;
	cout << "BIOS" << endl;
	cout << endl;
	cin >> id;
	if (calculator == "true") {
	 if (id == "calculator.exe" || id == "Calculator.exe") {
	 		
	int a;
	int b;
	int c;
	string exit;	 	
cout << "Select an action (+,-,*,/):";
 cin >> symbol;	
 cout << "Enter the first number:";
 cin >> a;
 cout << "Enter the second number:";
 cin >> b;
 if ( symbol == '+' ) {
 	c = a + b;
 	cout << "Result is:" << c << endl;
 	cout << "Enter the number zero to exit:";
 	cin >> exit;
 	cout << endl;
 	actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
 	
 		
 	} else if ( symbol == '-') {
 	c = a - b;
 	cout << "Result is:" << c << endl;
 	cout << "Enter the number zero to exit:";
 	cin >> exit;
 	cout << endl;
 	actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
 	
 	
 		
 	} else if (symbol == '*') {
 	c = a * b;
 	cout << "Result is:" << c << endl;
 	cout << "Enter the number zero to exit:";
 	cin >> exit;
 	cout << endl;
 	actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
 	
 	
 	} else if (symbol == '/') {
 	c = a / b;
 	cout << "Result is:" << c << endl;
 	cout << "Enter the number zero to exit:";
 	cin >> exit;
 	cout << endl;
 	actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
 	
 	} 
  }
	}
	if (perimeter == "true") {
   if (id == "perimeter.exe" || id == "Perimeter.exe") {
	int d;
	int e;
	int f;
	int age;
	int res;
	 cout << "What perimeter will we recognize ?:" << endl;
	 cout << "1= Triangle" << endl;
	 cout << "2= Square" << endl;
	 cout << "3= rectangle" << endl;
	 cin >> p;
	 
	  if (p == 1) {
	  	 cout << "first side" << endl;
	  	cin >> d;
	  	 cout << "second side" << endl;
	  	cin >> e;
	  	 cout << "the third side" << endl;
	  	cin >> f;
	  	 res = d + e + f;
	cout << "perimeter:" << res << endl;
	cout << "Enter the number zero to exit:";
	cin >> exit;
	cout << endl;
	actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
 
 		
 		
 	
	  } else if (p == 2) {
	  	 cout << "first side" << endl;
	   cin >> d;
	  	 cout << "second side" << endl;
	   cin >> e;
	  	 cout << "the third side" << endl;
	  	cin >> f;
	  	 cout << "fourth side" << endl;
	  	cin >> age;
	  	 res = d + e + f + age;
	  	cout << "perimeter:" << res << endl;
cout << "Enter the number zero to exit:";
cin >> exit;
cout << endl;
actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
 	
 		
 		
 	
	  } else if (p == 3) {
	  	 cout << "first side" << endl;
	  	cin >> d;
	  	 cout << "second side" << endl;
	  	cin >> e;
	  	 cout << "the third side" << endl;
	  	cin >> f;
	  	 cout << "fourth side" << endl;
	  	cin >> age;
	  	 res = d + e + f + age;
	  	cout << "perimeter:" << res << endl;
	  cout << "Enter the number zero to exit:";
	  cin >> exit;
	  cout << endl;
	  actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
 
 		
 		
 	}		  
	   
}
	}
	if (area == "true") {
 if (id == "area.exe" || id == "Area.exe") {
	  	int l;
	  	int w;
	  	int result;
	  	cout << "length:";
	  	cin >> l;
	  	cout << "width:";
	  	cin >> w;
	  	cout << "calculated by the formula: wigth * length" << endl;
	  	result = w * l;
	  	cout  << "Result is:" << result << endl;
	  	cout << "Enter the number zero to exit:";
	  	cin >> exit;
	  	cout << endl;
	  	actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
 	
 		
 		
 	
	  } 
	}

	   if (id == "alerb" || id == "Alerb")  {
	int action_build;
	int exit;
	cout << endl;
	cout << "Hello!" << endl;
	cout << endl;
	cout << "Available functions:" << endl;
	cout << endl;
	cout << "1 - exit" << endl;
	cout << endl;
	cout << "2 - checking your account" << endl;
	cout << endl;
	cout << "3 - changing your account" << endl;
	cout << endl;
	cin >> action_build;
	
		if (action_build == 1) {
			cout << "Goodbye!" << endl;
			cout << endl;
		actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
		} else if (action_build == 2) {
		cout << "Login:" << login_Login << endl;
		cout << endl;
		cout << "Password:" << login_password << endl;
		cin >> exit;
		cout << endl;
		actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");	
		} else if (action_build == 3) {
		ofstream four;
    	
    	four.open("Account.txt");
    	
    	
    	if (four.is_open()) {
    		string name;
    		string password;
    		cout << "Login:";
    		cin >> name;
    		cout << endl;
    		cout << "Password:";
    		cin >> password;
    		
    		four << name;
    		four << " ";
    		four << password;
    		four.close();
    		cout << "Success!" << endl;
    		cout << endl;
    		cin >> exit;
    		cout << endl;
			actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");	
    	} else {
    	cin >> exit;
    	cout << endl;
		actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");	
    	}	
	 
    } 
	
	  	
	  		
	  	} 
		  
		   if (id == "time.exe" || id == "Time.exe") {
    	time_t seconds = time(NULL);
tm* timeinfo = localtime(&seconds);
cout << "Current Datetime:" << asctime(timeinfo) << endl;
cin >> exit;
actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
    } 
	
	 if (id == "console" || id == "Console") {
    	cin >> help;
    	
    	if (help == "help" || help == "Help") {
    		cout << "ex exit console" << endl;
    		cout << endl;
    		cout << "fold create folder" << endl;
    		cout << endl;
    		cout << "ctv checking the version" << endl;
    		cout << endl;
    		cout << "cts clear the screen" << endl;
    		cout << endl;
    		cin >> command;
    		
    		if (command == "ex") {
    			actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
    		} else if (command == "fold") {
    			ofstream folders;
    			
    			folders.open("folder_title.txt");
    			
    			if (folders.is_open()) {
    			cout << "title:";
					cin >> folder_name;
					
					folders << folder_name;
					cout << endl;
					cout << "Success!" << endl;
					cout << endl;
					actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
    			} else {
    				
    			}
    		} else if (command == "ctv") {
    			cout << "This is XPP" << endl;
    		} else if (command == "cts") {
    			system("cls");
    		actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");	
    		} else {
    			
    		}
    	}
    } else if (id == folder_name) {
    	
    } else if (id == "BIOS") {
    	cout << "available settings:" << endl;
cout << endl;
cout << "1 - on off calculator" << endl;
cout << endl;
cout << "2 - on off Perimeter" << endl;
cout << endl;
cout << "3  on off Area" << endl;
cout << endl;
cout << "4 - on off date and time" << endl;
cout << endl;
cin >> programs;

	if (programs == 1) {
		ofstream orr;
		
		
		orr.open("on off calculator.txt");
		
		if (orr.is_open()) {
			cout << "enable or disable the calculator?:";
			cin >> off;
			
			if (off == "enable" || off == "Enable") {
				orr << "true";
				cout << endl;
				cout << "Success!" << endl;
				cout << endl;
				actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
			} else if (off == "disable" || off == "Disable") {
				orr << "false";
				cout << endl;
				cout << "Success!" << endl;
				cout << endl;
				actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
			} else {
				
			}
		}
	} else if (programs == 2) {
		ofstream orr;
		
		orr.open("on off perimeter.txt");
		
		if (orr.is_open()) {
			cout << "enable or disable the perimeter?:";
			cin >> off;
			
			if (off == "enable" || off == "Enable") {
				orr << "true";
				cout << endl;
				cout << "Success!" << endl;
				cout << endl;
				
			} else if (off == "disable" || off == "Disable") {
				orr << "false";
				cout << endl;
				cout << "Success!" << endl;
				cout << endl;
				actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
			} else {
				
			}
		}
	} else if (programs == 3) {
		ofstream orr;
		
		orr.open("on off area.txt");
		
		if (orr.is_open()) {
			cout << "enable or disable the area?:";
			cin >> off;
			
			if (off == "enable" || off == "Enable") {
				orr << "true";
				cout << endl;
				cout << "Success!" << endl;
				cout << endl;
				actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
			} else if (off == "disable" || off == "Disable") {
				orr << "false";
				cout << endl;
				cout << "Success!" << endl;
				cout << endl;
				actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
			} else {
				
			}
		}
	} else if (programs == 4) {
		ofstream orr;
		
		orr.open("on off date and time.txt");
		
		if (orr.is_open()) {
			cout << "enable or disable the dane and time?:";
			cin >> off;
			
			if (off == "enable" || off == "Enable") {
				orr << "true";
				cout << endl;
				cout << "Success!" << endl;
				cout << endl;
				actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
			} else if (off == "disable" || off == "Disable") {
				orr << "false";
				cout << endl;
				cout << "Success!" << endl;
				cout << endl;
				actions("abc",0,0,0,0,0,a,0,0,0,1,"abc","abc",a,"abc");
			} else {
				
			}
		}
	} else {
		
	}
    }
}
	  
	  
	  	
	
 

int main () {
 int id;
	int exit;
	int exxit;
	string name;
	string symbol;
	int p;
	char add;
	string abc = "abc";

 int a;
 int b;
 int c;
 int d;
 int e;
 int f;
 int age;
 int res;
cout << "Mistakes:" << endl;
cout << "Error 150." << endl;
cout << "A critical error that causes the operating system to shut down!" << endl;
cout << endl;
cout << "Hello user!" << endl;
cout << "you have an account? Y/N:";
cin >> add;

    if (add == 'y' || add == 'Y') {
    	ifstream five;
    	
    	five.open("Account.txt");
    	
    	if (five.is_open()) {
    		string entrance_login;
    		string entrance_password;
    		cout << "Login:";
    		cin >> entrance_login;
    		cout << "Password:";
    		cin >> entrance_password;
    		five >> login_Login;
    		five >> login_password;
    		
    		 if (entrance_login == login_Login && entrance_password == login_password) {
    		 	five.close();
    		 	cout << "Success!" << endl;
    		 	cout << endl;
    			actions(abc,0,0,0,0,0,a,0,0,0,1,abc,abc,a,abc);
    		 }
    		
    	} else {
    		cout << "ERROR!" << endl;
    		return 0;
    	}
    } else if (add == 'n' || add == 'N') {
    	ofstream four;
    	
    	four.open("Account.txt");
    	
    	
    	if (four.is_open()) {
    		string name;
    		string password;
    		cout << "Login:";
    		cin >> name;
    		cout << endl;
    		cout << "Password:";
    		cin >> password;
    		
    		four << name;
    		four << " ";
    		four << password;
    		four.close();
    		cout << "Success!" << endl;
    		cout << endl;
    			actions(abc,0,0,0,0,0,a,0,0,0,1,abc,abc,a,abc);
    	} else {
    		return 0;
    	}
    } else {
    	return 0;
    }
}
	
