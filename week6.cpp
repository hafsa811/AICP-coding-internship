#include<iostream>
using namespace std;
	
void displayticketoption()
{
	cout<<"\t  One Day Ticket Booking Options"<<endl;
	
	cout<<" Ticket Type     \t     Cost"<<endl;
	cout<<" One adult       \t    $20.00"<<endl; 
	cout<<" One child       \t    $12.00"<<endl; 
	cout<<" One senior      \t    $16.00"<<endl; 
	cout<<" Family ticket   \t    $60.00"<<endl; 
	cout<<" Group of six\n people or more  \t    $15.0"<<endl;
	
	cout<<"\t  Two Day Ticket Booking Options "<<endl;
	
	cout<<" Ticket Type     \t     Cost"<<endl;
	cout<<" One adult       \t    $30.00"<<endl; 
	cout<<" One child       \t    $18.00"<<endl; 
	cout<<" One senior      \t    $24.00"<<endl; 
	cout<<" Family ticket   \t    $90.00"<<endl; 
	cout<<" Group of six\n people or more  \t    $22.50"<<endl;
	
	cout<<"   \tExtra Attractions "<<endl;
	cout<<"   Attraction       \t     Cost"<<endl;
	cout<<" Lion feeding       \t    $20.00"<<endl; 
	cout<<" Penguin feeding    \t    $12.00"<<endl; 
	cout<<" Barbecue\n for two days only    \t    $16.00"<<endl; 
	}
	
float ticket_adult(int adult,int day)
{
	float ticket_price;
	if(day==1)
	{
		ticket_price=30.00;
		cout<<" The Ticket prices are : "<<adult*ticket_price<<endl;
	}
	else if(day==2)
	{
		ticket_price=20.00;
		cout<<" The Ticket prices are : "<<adult*ticket_price<<endl;
	}
}
	
float ticket_child(int child,int day)
{
	float ticket_price;
	if(day==1)
	{
		ticket_price=12.00;
		cout<<" The Ticket prices are : "<<child*ticket_price<<endl;
	}
	else if(day==2)
	{
		ticket_price=18.00;
		cout<<" The Ticket prices are : "<<child*ticket_price<<endl;
	}
}
float ticket_senior(int senior,int day)
{
	float ticket_price;
	if(day==1)
	{
		ticket_price=16.00;
		cout<<" The Ticket prices are : "<<senior*ticket_price<<endl;
	}
	else if(day==2)
	{
		ticket_price=24.00;
		cout<<" The Ticket prices are : "<<senior*ticket_price<<endl;
	}
}
float family_package(int num_packages,int day)
{
	float ticket_price;
	if(day==1)
	{
		ticket_price=60.00;
		cout<<" The Ticket price for family package is : "<<num_packages*ticket_price<<endl;
	}
	else if(day==2)
	{
		ticket_price=90.00;
		cout<<" The Ticket prices are : "<<num_packages*ticket_price<<endl;
	}
}
	
float group_people(int persons,int day)
{
	float ticket_price;
	if(day==1)
	{
		ticket_price=15.00;
		cout<<" The Ticket price for family package is : "<<persons*ticket_price<<endl;
	}
	else if(day==2)
	{
		ticket_price=22.50;
		cout<<" The Ticket prices are : "<<persons*ticket_price<<endl;
		
	}
	
}
	
float attraction(int choice,int day,int persons)
{
	float attraction_price;
	if(choice==1)
	{
			attraction_price=2.50;
		    cout<<"Cost for lion feeding is "<<persons*attraction_price;
	}
		
    else if(choice==2)
    {
    	attraction_price=2.00;
		cout<<"Cost for penguin feeding is "<<persons*attraction_price;
	}
	else if(choice==3)
    {
    	attraction_price=5.0;
		cout<<"Cost for barbecue is "<<persons*attraction_price;
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
int main()
{
	
	
	
	cout<<"****\t WILDLIFE PARK BOOKING \t****"<<endl;
	displayticketoption();
	cout<<endl;
	
	cout<<"BOOK tour tickets here "<<endl;
	
	int days;
	cout<<"Enter the days (1 or 2)";
	cin>>days;
	
	int choice;
	cout<<"Enter 1 for adult ticket\n 2 for child ticket\n 3 for senior ticket\n 4 for family package\n 5 for group of people"<<endl;
	 
	 cout<<"Enter choice here: ";
	 cin>>choice;
	if (choice==1)
	{    
	    int adult;
	    cout<<"Enter the number of adult";
	    cin>>adult;
		ticket_adult( adult,days);
	}
	
	else if (choice==2)
	{    
	    int child;
	    cout<<"Enter the number of children";
	    cin>>child;
		ticket_child( child,days);
	}
	
	else if(choice==3)
	{    
	    int seniors;
	    cout<<"Enter the number of seniors";
	    cin>>seniors;
		ticket_senior(seniors,days);
	}
    
     else if (choice==4)
	{    
	    int package;
	    cout<<"Enter the number of packages";
	    cin>>package;
		family_package(package,days);
	}
	
	 else if (choice==5)
	{    
	    int persons;
	    cout<<"Enter the number of persons";
	    cin>>persons;
		group_people(persons,days);
	}
	
	int choice_attraction;
	int size;
	
    cout<<"Enter 1 for lion feeding\n 2 for penguin feeding\n 3 for barbecue"<<endl;
    cout<<"Enter choice here:";
    cin>>choice_attraction;
    cout<<"Enter Number of persons for attraction:"<<endl;
    cin>>size;
    attraction(choice_attraction,days,size);
    
    
   
     
	
	
	
	
	
	
	
	
	
	
	
	
    return 0;
}
	
	
