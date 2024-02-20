#include <iostream>
using namespace std;

const int days = 7;    
const int milkings = 2; 

void recordYield(double yields[][days][milkings], int num_cows, int codes[]) 
{
    for (int cow = 0; cow < num_cows; ++cow) 
	{
        cout << "****  Enter yields for cow " << codes[cow] <<" ****"<< endl;
        cout<<endl;
        for (int day = 0; day < days; ++day)
		 {
            for (int milking = 0; milking < milkings; ++milking) 
			{
                cout << "Enter yield for day " << day + 1 << " and milking " << milking + 1 << ": ";
                cin >> yields[cow][day][milking];
                
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

void calculateStatistics(double yields[][days][milkings], int num_cows) 
{
    double totalMilk = 0.0;
    int totalCows = 0;

    for (int cow = 0; cow < num_cows; ++cow) 
	{
        for (int day = 0; day < days; ++day) 
		{
            for (int milking = 0; milking < milkings; ++milking)
		    {
                totalMilk += yields[cow][day][milking];
            }
        }
        
        if (totalMilk > 0.0) {
            totalCows++;
        }
    }

    double averageYield = totalMilk / (totalCows * days * milkings);
    cout << "Total weekly volume of milk: " << static_cast<int>(totalMilk + 0.5) << " litres\n";
    cout << "Average yield per cow in a week: " << static_cast<int>(averageYield + 0.5) << " litres\n";
}

void identifyCows(double yields[][days][milkings], int num_cows, int codes[])
 {
    double maxMilk = 0.0;
    int mostProductiveCow = -1;

    for (int cow = 0; cow < num_cows; ++cow) 
	{
        double totalMilk = 0.0;
        for (int day = 0; day < days; ++day) 
		{
            for (int milking = 0; milking < milkings; ++milking) 
			{
                totalMilk += yields[cow][day][milking];
            }
        }
        if (totalMilk > maxMilk) 
		{
            maxMilk = totalMilk;
            mostProductiveCow = cow;
        }

        int lowYieldDays = 0;
        for (int day = 0; day < days; ++day) 
		{
            double dailyTotal = 0.0;
            for (int milking=0; milking<milkings; ++milking) 
			{
                dailyTotal += yields[cow][day][milking];
            }
            if (dailyTotal < 12.0) 
			{
                lowYieldDays++;
            }
        }
        if (lowYieldDays >= 4) 
		{
            cout << "Cow " << codes[cow] << " has produced less than 12 litres of milk for four or more days this week.\n";
        }
    }

    if (mostProductiveCow != -1) 
	{
        cout << "Cow " << codes[mostProductiveCow] << " is the most productive this week.\n";
    }
}

int main() {
    int size;
    cout<<" Farmer records for milk production"<<endl;
    cout << "Enter the number of cows in herd: ";
    cin >> size;
  
    int codes[size];
    for(int i = 0; i < size; ++i) {
        cout << "Enter code for cow " << i + 1 << ": ";
        cin >> codes[i];
    }
  
    double yields[size][days][milkings] = {0};

    recordYield(yields, size, codes);
    calculateStatistics(yields, size);
    identifyCows(yields, size, codes);

    return 0;
}
