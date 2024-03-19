#include<iostream>
using namespace std;


float calculate_price(string day,int hours,int arrival_hour)
{  
    float hour_price;
    
	if(arrival_hour>=8 && arrival_hour<16)
	
	{  
	    if (day=="sunday")
	   {
	   	int max_stay=8;
	   	cout<<" The maximum stay is "<<max_stay<<" hours."<<endl;
	   	if(hours>max_stay)
			{
	   	 	   cout<<"Invalid input for stay hours."<<endl;
			}
	   	hour_price=2.00;
	   	}
	   else if(day=="saturday")
	   {
	   	 int max_stay=4;
	   	 cout<<"The maximum stay is "<<max_stay<<" hours."<<endl;
	   	 if(hours>max_stay)
			{
	   	 	   cout<<"Invalid input for stay hours."<<endl;
			}
		  else
	   	 {
			hour_price=3.00;
	     }
	   }
	   else
	   {
	   	 int max_stay=2;
	   	 cout<<"The maximum stay is "<<max_stay<<"hours."<<endl;
	   	 if(hours>max_stay)
			{
	   	 	   cout<<"Invalid input for stay hours."<<endl;
	   	 	}
	   	 else
	   	 {
			hour_price=10.00;
	     }
	   }
	}
	else if(arrival_hour>=16 && arrival_hour<24)
	{
		hour_price=2.00;
	}
	else
	{
	   cout<<"No parking in these hours."<<endl;
	}
	float total_amount=hours*hour_price;
	cout<<"The total amount for parking is "<<total_amount<<" ."endl;

	
	return total_amount;
}

float discount_price(float total_amount,int checkDigit,int arrival_hour)
{
	if(checkDigit==0)
	{
		if(arrival_hour>=16 && arrival_hour<24)
		{
		float discount=0.5;
		 
		 total_amount=discount*total_amount;
		 cout<<" The parking price after discount is "<<total_amount<<"."<<endl;
	    }
	    else
	    { 
		float discount=0.01;
		 
		 total_amount=discount*total_amount;
		 cout<<" The parking price after discount is "<<total_amount<<"."<<endl;
	    	
		}
	}
		else
		{
			cout<<"No discount for parking. "<<endl;
		}
}

float payments_total(float total)
{   
    int size;
	float arr[size];
	
	cout<<"Enter the number of inputs for daily total ";
	cin>>size;
	
	cout<<"Enter the daily inputs here :"<<endl;
	for(int i=0; i<size; i++)
	{  
	   cout<<i+1<<". ";
	   cin>>arr[i];
	}
	float daily_total=0.00;
	for(int i=0; i<size; i++)
	{
		daily_total+=arr[i];
	}
	
	cout<<"The daily total for parking is "<<daily_total<<"."<<endl;
	
}


int calculateCheckDigit(const string& number) 
{
    int weights[] = { 8, 6, 4, 2, 3, 5, 9, 7 };
    int sum = 0;
    int digit;
    
    for (int i = 0; i < number.size(); ++i) {
        digit = number[i] - '0'; 
        sum += digit * weights[i];
    }

    int remainder = sum % 11;
    int checkDigit;

    if (remainder == 0)
        checkDigit = 0;
    else if (remainder == 1)
        checkDigit = 1;
    else
        checkDigit = 11 - remainder;

    return checkDigit;
}

float payments_fairer(int arrival_hour,int hours,int total_amount)
{ 
    float evening_charge=4.00;
	if( arrival_hour<16 && (arrival_hour+ hours) >16)
	{
		cout<<" Evening charges are added."<<endl;
		total_amount+=evening_charge;
		cout<<" Price after evening charge is "<<total_amount<<endl;
	}
}
int main()
{
	int hours;
	int parking_no;
	string day;
	int arrival_hour;
	string frequentparking_num;

	
	cout<<"Enter the day of parking (between monday-sunday) : ";
	cin>>day;
	
	cout<<"Enter the arrival time(0-23): ";
	cin>>arrival_hour;
	
	cout<<"Enter a 4 digit frequent parking_no (if you have any)";
    cin>>frequentparking_num;
    
    if (frequentparking_num.size() != 4) {
    cout << "Invalid input. The number must have 4 digits.\n";
     }
    
    int checkDigit = calculateCheckDigit(frequentparking_num);
    cout << "Check digit: " << checkDigit << endl;
    
    
	
	cout<<"Enter hours parked : ";
	cin>>hours;
	
    
    float total_amount=calculate_price(day,hours,arrival_hour);
    discount_price(total_amount,checkDigit,arrival_hour);
    payments_fairer(arrival_hour,hours,total_amount);
	payments_total(total_amount);
	
return 0;	
}
