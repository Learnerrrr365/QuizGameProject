#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int main()
{
	cout<<"\t\t"<<"Quiz Game"<<endl;
	int scoreC=0;
	char replay;
	string option;
	do{
		scoreC=0;
	for(int i=1;i<=5;i++)
	{
	cout << "Question no "<< i << ":" << endl;
	    if(i==1)
	    {
	    	cout << "What is the capital of Pakistan ?" << endl;
	    	cout <<   "a.Karachi" <<endl;
	    	cout <<   "b.Lahore" <<endl;
	    	cout <<   "c.Islamabad" <<endl;		
	    	cin>>option;
	    	if(option!="a"&& option!="b"&& option!="c"&&option!="A"&& option!="B"&& option!="C")
	    	{
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	    		cout<<"Invalid input !"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	    	
			}
	    	if(option=="c"||option=="C")
	    	{
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	    		  cout<<"Correct!"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	    		scoreC++;
			}
			else{
			 SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	    		  cout<<"Incorrect!"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				
			}
		}
		 else if(i==2)
	    {
	    	cout << "What is the independence date of Pakistan ?" << endl;
	    	cout <<   "a.1946" <<endl;
	    	cout <<   "b.1947" <<endl;
	    	cout <<   "c.1949" <<endl;		
	    	cin>>option;
	    	if(option!="a"&& option!="b"&& option!="c"&&option!="A"&& option!="B"&& option!="C")
	    	{
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	    		cout<<"Invalid input !"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			}
	    	if(option=="b" || option=="B")
	    	{
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	    		  cout<<"Correct!"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	    		scoreC++;
			}
			else{
			 SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	    		  cout<<"Incorrect!"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				
			}
		}
		 else if(i==3)
	    {
	    	cout << "What is the National Fruit of Pakistan ?" << endl;
	    	cout <<   "a.Mango" <<endl;
	    	cout <<   "b.orange" <<endl;
	    	cout <<   "c.blueberry" <<endl;		
	    	cin>>option;
	    	if(option!="a"&& option!="b"&& option!="c"&&option!="A"&& option!="B"&& option!="C")
	    	{
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	    		cout<<"Invalid input !"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			}
	    	if(option=="a"||option=="A")
	    	{
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	    		  cout<<"Correct!"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	    		scoreC++;
			}
			else{
			 SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	    		  cout<<"Incorrect!"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				
			}
		}
		 else if(i==4)
	    {
	    	cout << "What is the National Bird of Pakistan ?" << endl;
	    	cout <<   "a.Eagle" <<endl;
	    	cout <<   "b.Chukar" <<endl;
	    	cout <<   "c.Pigeon" <<endl;		
	    	cin>>option;
	    	if(option!="a"&& option!="b"&& option!="c"&&option!="A"&& option!="B"&& option!="C")
	    	{
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	    		cout<<"Invalid input !"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			}
	    	if(option=="b"||option=="B")
	    	{
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	    		  cout<<"Correct!"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	    		scoreC++;
			}
			else{
			 SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	    		  cout<<"Incorrect!"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				
			}
		}
	       else if(i==5)
	    {
	    	cout << "What is the National Animal of Pakistan ?" << endl;
	    	cout <<   "a.Lion" <<endl;
	    	cout <<   "b.Wolf" <<endl;
	    	cout <<   "c.Markhor" <<endl;		
	    	cin>>option;
	    	if(option!="a"&& option!="b"&& option!="c"&&option!="A"&& option!="B"&& option!="C")
	    	{
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	    		cout<<"Invalid input !"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			}
	    	if(option=="c"||option=="C")
	    	{
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	    		  cout<<"Correct!"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	    		scoreC++;
			}
			else{
			 SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	    		  cout<<"Incorrect!"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				
			}
		}
    }
			cout<<"\n\nQuiz completed!\n"<<endl;
			if(scoreC==5){
			cout<<"Your Score is \t"<<scoreC<<"/5"<<endl;
			    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	    			cout<<"Excellent!"<<endl;
	    		  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

		    }
		    else	if(scoreC==4){
			cout<<"Your Score is \t"<<scoreC<<"/5"<<endl;
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	    			cout<<"Very Good"<<endl;
	       SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		
		    }
		    else	if(scoreC==3){
			cout<<"Your Score is \t"<<scoreC<<"/5"<<endl;
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN| FOREGROUND_INTENSITY);
			cout<<"Good"<<endl;
			 SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		    }
		    else	if(scoreC==2){
			cout<<"Your Score is \t"<<scoreC<<"/5"<<endl;
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout<<"Need improvement "<<endl;
			  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		    }
		    else{
		    		cout<<"Your Score is \t"<<scoreC<<"/5"<<endl;
		    	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
		    	cout<<"Poor"<<endl;
		    	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			}
			cout<<"\n\nDo you want to play again(y/n)\n"<<endl;
			cin>>replay;
}while(replay=='y'||replay=='Y');
           
			return 0;
		
	
}
