#include <iostream>
#include <cstring>
using namespace std;

void weightdiff(float arr1[],float arr2[],string arr3[])
{
	float weight_diff[30];
	
	for(int i=0; i<30; i++)
	{
	    if(arr2[i]>arr1[i])
	
	{   
	    weight_diff[i]=arr2[i]-arr1[i];
		cout<<"The weight of "<<arr3[i]<<" is increased by "<<weight_diff[i]<<" kg."<<endl;
	}
	else if
	 
	   (arr2[i]<arr1[i])
	{    
	    weight_diff[i]=arr1[i]-arr2[i];
		cout<<"The weight of "<<arr3[i]<<" is decresed by "<<weight_diff[i]<<"."<<endl;
	}
	else
	{
		cout<<"No change in weight for "<<arr3[i]<<"."<<endl;
	}
	}
 }

int main()
{  
   string names[30];
   float weights[30];
   float weights_2[30];
   
   cout<<"*****\t Names and Weight record for Class A1 \t*****"<<endl;
 
 // recording the names in array  
   cout<<"\tEnter the names of pupils "<<endl;
   	   
   	    cout<<" Names :"<<endl;
		cout<<endl;
	    
   	for(int i=0; i<30; i++)
   { 
        cout<<i+1<<".";
        cin>>names[i];
   }
   
   // recording the weights in array
 cout<<"\tEnter the weights of pupils between 20kg and 60kg "<<endl;
 
   	    cout<<" Weights in kg :"<<endl;
		cout<<endl;
   
   for(int i=0; i<30; i++)
   { 
        cout<<i+1<<".";
        cin>>weights[i];
       
	   for(int j=0; j<=10; j++)
	 {
	     if(weights[i]>60 || weights[i]<20)
	   {  
	     cout<<"invalid weight enter again"<<endl;
		 cin>>weights[i];
	    }
	   else
	   {  
	     break;
	   }
	 }
   }

//   output the records     
    cout<<"\t\t Records"<<endl;
    cout<<"Names"<<"\t"<<"Weights"<<endl;
    for(int i=0; i<30; i++)
    {
       cout<<names[i]<<"\t"<<weights[i];
	    cout<<endl;	
	}
 
 // weights record after a month
 
    cout<<"\tRecording the weights after month"<<endl;
    cout<<" Weights in kg:";
		cout<<endl;
   
   for(int i=0; i<30; i++)
   { 
        cout<<i+1<<".";
        
        cin>>weights_2[i];
   }
      
	  
    cout<<"\t\tWeight Difference"<<endl;
    weightdiff(weights,weights_2,names);
    
  return 0;  
}
