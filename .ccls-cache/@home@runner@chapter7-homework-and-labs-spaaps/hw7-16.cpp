//hw7-16.cpp - displays three tip amounts
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


		//integers 
		double bill = 0.0;
		double tip = 0.0;
		double rate = 0.1;

		
	//get bill amount
		cout << "Bill amount: ";
		cin >> bill;

	
	// calulations 
		cout << fixed;
		while (rate <= 0.2)
		
		
		{
		
			
			tip = bill * rate;
				cout << setprecision(0);
			cout << rate * 100 << "% tip: ";
				cout << setprecision(2);
			cout << "$" << tip << endl;
				rate += 0.05;

			
		}  
	// using a "end while" instead a "end for"
	
	
	return 0;
}	//end of main function
