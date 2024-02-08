#include<iostream>
#include<cstring>
using namespace std;

float cost_plan(int persons)
{     
    
     if(persons>=10 && persons<17)
	 {  
	    int coach=150;
	    float meal=14;
	    float ticket=21;
	    float cost_person=coach+meal+ticket;
	    cout<<"Hire of coach : "<<coach<<endl;
		cout<<"Cost of meal : "<<meal<<endl;
		cout<<"Cost of ticket : "<<ticket<<endl;
		cout<<"Cost per person: "<<cost_person<<endl;
		
     	return cost_person;
	 }
	 else if(persons>16 && persons<27)
	 {
	 	int coach=190;
	    float meal=13.50;
	    float ticket=20.00;
	    float cost_person=coach+meal+ticket;
	   
	    cout<<"Hire of coach : "<<coach<<endl;
		cout<<"Cost of meal : "<<meal<<endl;
		cout<<"Cost of ticket : "<<ticket<<endl;
		
		cout<<"Cost per person: "<<cost_person<<endl;
	
     	return cost_person;
	}
	else if(persons>26 && persons<37)
	 {
	 	int coach=225;
	    float meal=13.00;
	    float ticket=19.00;
	    float cost_person=coach+meal+ticket;
	
	    cout<<"Hire of coach : "<<coach<<endl;
		cout<<"Cost of meal : "<<meal<<endl;
		cout<<"Cost of ticket : "<<ticket<<endl;
		cout<<"Cost per person: "<<cost_person<<endl;
	
     	return cost_person;
	}
	else
	{
		cout<<"Outing not possible"<<endl;
	}
} 
int carers(int persons)
{  
    
   if(persons<=24)
   {
   	int carer=2;
    cout<<"Minimum carers needed : 2"<<endl;
   	return carer;
   	
   }
   
   else if(persons>24)
   { 
    int carer=3;
    cout<<"3 carers needed "<<endl;
   	return carer;
   }
   
}
// TASK 2

float amount_collected(int persons)
{
	string member[persons];
	float amount[persons];
	
	cout<<"\tEnter the name of members and the amount they paid"<<endl;
	cout<<" Names"<<"\t"<<"Amount(in $)"<<endl;
	for(int i=0; i<persons; i++)
	{   
	    cout<<i+1<<".";
		cin>>member[i];
		cout<<"\t";
		cin>>amount[i];
		cout<<endl;
		
	}
	int sum=amount[0];
	for(int i=1; i<persons; i++)
	{ 
	  sum+=amount[i];
	}
	return sum;
}

float extras(int persons)
  {  
int extra;
  	if(persons>=12 && persons<16)
  	{
  		extra=16-persons;
  		return extra;
	  }
	else if(persons>16 && persons<27)
  	{
  		extra=27-persons;
  		return extra;
	  }
    else if(persons>26 && persons<37)
  	{
  		extra=37-persons;
  		return extra;
	  }
	  
	  else
	  {
	  	cout<<"no space available;"<<endl;
	  }
} 
int main()
{   
    int persons;
    float cost;
    float total_cost;
    
	cout<<"****\tOuting plan for the Senior citizen's club\t****"<<endl;
	cout<<"Enter The number of senior citizens interested(10-36):";
	cin>>persons;
	cout<<"\t***Estimated cost plan***"<<endl;
	cost=cost_plan(persons);
	int carer=carers(persons);
	float cost_carer=carer*cost;
	cout<<"Cost for carers(by club) :"<<cost_carer<<endl;
	 
	 total_cost= (cost*persons)+cost_carer;
	cout<<" Total cost including carers : "<< total_cost<<endl;
	float amount=amount_collected(persons);
	cout<<"The amount collected is : "<<amount<<endl;
    int extra=extras(persons);
    cout<<extra<<" spaces available "<<endl;
    
    cout<<"Enter number of extras who want to join:";
    cin>>extra;
    string extra_names[extra];
    
    for(int i=0; i<extra; i++)
    {   
	     
        cout<<i+1;
        cout<<"Enter the name :";
    	cin>>extra_names[i];
    	cout<<endl;
   	}
    
    float cost_extra=extra*cost;
    cout<<"Amount by extras "<<cost_extra<<endl;
    
    amount=amount+cost_extra;
    
    cout<<"The total amount collected is "<< amount<< endl;
    
    
    if(total_cost>amount)
    {
    	float loss;
    	loss=total_cost-amount;
    	cout<<"Its a loss of "<<loss<<" for club"<<endl;
    	
	}
	else if(amount>total_cost)
	{   
	    float profit;
	    profit=amount-total_cost;
		cout<<" Its a profit of "<<profit<<" for club"<<endl;
	}
    
return 0;	
}













