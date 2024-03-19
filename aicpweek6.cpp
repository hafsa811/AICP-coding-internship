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
		ticket_price=adult*ticket_price;
		cout<<" The Ticket prices are : "<<ticket_price<<endl;
		return ticket_price;
	}
	else if(day==2)
	{
		ticket_price=20.00;
		ticket_price=adult*ticket_price;
		cout<<" The Ticket prices are : "<<ticket_price<<endl;
		return ticket_price;
	}
}
	
float ticket_child(int child,int day)
{
	float ticket_price;
	if(day==1)
	{
		ticket_price=12.00;
		ticket_price=child*ticket_price;
		cout<<" The Ticket prices are : "<<ticket_price<<endl;
		return ticket_price;
	}
	else if(day==2)
	{
		ticket_price=18.00;
		ticket_price=child*ticket_price;
		cout<<" The Ticket prices are : "<<ticket_price<<endl;
		return ticket_price;
		
	}
}
float ticket_senior(int senior,int day)
{
	float ticket_price;
	if(day==1)
	{
		ticket_price=16.00;
		ticket_price=senior*ticket_price;
		cout<<" The Ticket prices are : "<<ticket_price<<endl;
		return ticket_price;
	}
	else if(day==2)
	{
		ticket_price=24.00;
		ticket_price=senior*ticket_price;
		cout<<" The Ticket prices are : "<<senior*ticket_price<<endl;
		return ticket_price;
	}
}
float family_package(int num_packages,int day)
{
	float ticket_price;
	if(day==1)
	{
		ticket_price=60.00;
		ticket_price=num_packages*ticket_price;
		cout<<" The Ticket price for family package is : "<<ticket_price<<endl;
		return ticket_price;
	}
	else if(day==2)
	{
		ticket_price=90.00;
		ticket_price=num_packages*ticket_price;
		cout<<" The Ticket prices are : "<<ticket_price<<endl;
		return ticket_price;
	}
}
	
float group_people(int persons,int day)
{
	float ticket_price;
	if(day==1)
	{
		ticket_price=15.00;
		ticket_price=persons*ticket_price;
		cout<<" The Ticket price for family package is : "<<ticket_price<<endl;
		return ticket_price;
	}
	else if(day==2)
	{
		ticket_price=22.50;
		ticket_price=persons*ticket_price;
		cout<<" The Ticket prices are : "<<ticket_price<<endl;
		return ticket_price;
		
	}
	
}
	
float attraction(int choice,int day,int persons)
{
	float attraction_price;
	if(choice==1)
	{
			attraction_price=2.50;
			attraction_price=persons*attraction_price;
			
		    cout<<"Cost for lion feeding is "<<attraction_price;
		    return attraction_price;
	}
		
    else if(choice==2)
    {
    	attraction_price=2.00;
    	attraction_price=persons*attraction_price;
		cout<<"Cost for penguin feeding is "<<attraction_price;
		
		return attraction_price;
	}
	else if(choice==3)
    {
    	attraction_price=5.0;
    	attraction_price=persons*attraction_price;
		cout<<"Cost for barbecue is "<<attraction_price;
		return attraction_price;
	}
	
}
	
int main()
{
	cout<<"****\t WILDLIFE PARK BOOKING \t****"<<endl;
	displayticketoption();
	cout<<endl;
	
	cout<<"BOOK your Tickets here "<<endl;
	
	int days;
	string day_name;
	cout<<"Enter the day :"<<endl;
	cin>>day_name;
	cout<<"Enter the Number of days (1 or 2)";
	cin>>days;
	
	float ticket_cost;
	
	int choice;
	cout<<"Enter 1 for adult ticket\n 2 for child ticket\n 3 for senior ticket\n 4 for family package\n 5 for group of people"<<endl;
	 
	 cout<<"Enter choice here: ";
	 cin>>choice;
	if (choice==1)
	{    
	    int adult;
	    cout<<"Enter the number of Tickets";
	    cin>>adult;
		ticket_cost=ticket_adult( adult,days);
	}
	
	else if (choice==2)
	{    
	    
	    int child;
	    cout<<"Enter the number of Tickets";
	    cin>>child;
		ticket_child( child,days);
	}
	
	else if(choice==3)
	{    
	    int seniors;
	    cout<<"Enter the number of Tickets";
	    cin>>seniors;
		ticket_cost=ticket_senior(seniors,days);
	}
    
     else if (choice==4)
	{    
	    int package;
	    cout<<"Enter the number of Tickets";
	    cin>>package;
		ticket_cost=family_package(package,days);
	}
	
	 else if (choice==5)
	{    
	    int persons;
	    cout<<"Enter the number of persons in group";
	    cin>>persons;
		ticket_cost=group_people(persons,days);
	}
	
	int choice_attraction;
	int size;
	
    cout<<"Enter 1 for lion feeding\n 2 for penguin feeding\n 3 for barbecue"<<endl;
    cout<<"Enter choice here:";
    cin>>choice_attraction;
    cout<<"Enter Number of tickets for attraction:"<<endl;
    cin>>size;
    float attraction_cost;
    attraction_cost=attraction(choice_attraction,days,size);
    
    float total_cost=ticket_cost+attraction_cost;
     
     cout<<"Booking details "<<endl;
     cout<<"Day\t   :  "<<day_name<<endl;
     cout<<"Number of days\t :  "<<days<<endl;
     cout<<"Ticket cost\t   :   "<<ticket_cost;
     cout<<"Attraction cost\t   :   "<<attraction_cost;
     cout<<"Total cost\t  : "<<total_cost<<endl;
   
     
	
	
	
	
	
	
	
	
	
	
	
	
    return 0;
}
	
	
