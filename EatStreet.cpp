# include <iostream>
# include <conio.h> // for getch() function

using namespace std;

void title(){
	cout<<"\n\t\t\t    "<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
	cout<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<endl;
	cout<<"\t\t\t    "<<char(178)<<"    Eat Street      "<<char(178);
	cout<<"\n\t\t\t    "<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
	cout<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<endl<<endl;
}

class EatStreet{
		int id;
	public:
	    static int burgerCount; // burgerCount is static because here we have to count Total number of burgers from all points
		EatStreet(int id, int burgerCount){
			this->id = id;
			this->burgerCount = burgerCount;
		}
		int getburgerCount(){ 
			return burgerCount; // get total number of burgers sold 
		}
		static	void justSold(){ 
			burgerCount++; // new burger sold then count value increaments
		}
		char Display(); // main display 
};

char EatStreet::Display(){
	title();
	char choice;
	cout<<"Point ID    : "<<id<<"\n"
		  "Burger Sold : "<<burgerCount<<"\n\n"
		  ">>Menu\n  "
		  "1. Burger Sold\n  "
		  "2. Main Menu\n  "
		  "  Choice : ";
	choice=getch();
	return choice;
}

int EatStreet::burgerCount;

void startSelling(EatStreet &p){ // function to perfom action on object recieved
	bool exit=true;
	do{
		switch(p.Display()){ // Display function returns char value
			case '1': EatStreet::justSold(); break;
			case '2': exit = false; break;
			default : 
				cout<<"\n  Please Select a Valid Choice\n\n"; 
				system("pause"); 
		}
		system("cls");
	}while(exit);
}

main(){
	char choice;
	bool exit=true;
	EatStreet  Pakha_Ghulam(1, 0), Hayatabad(2, 0), Ring_Road(3, 0);
	do{
		title();
		cout<<"  Select Your Burger Point\n "
			  " 1) Pakha Ghulam \n "
			  " 2) Hayatabad\n "
			  " 3) Ring Road\n "
			  " 0) Exit\n"
			  "  choice : ";
		choice=getch();
		switch(choice){
			case '1': system("cls"); startSelling(Pakha_Ghulam); break;
			case '2': system("cls"); startSelling(Hayatabad); break;
			case '3': system("cls"); startSelling(Ring_Road); break;
			case '0': exit=false; break;
			default : cout<<"\nPlease Select a Valid Choice\n"; system("pause");
		}
		system("cls");
	}while(exit);
	title();
	cout<<"\t\t\t  "<<EatStreet::burgerCount<<" burgers were sold today\n\n\n\n";
}
