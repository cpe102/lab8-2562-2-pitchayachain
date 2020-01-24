#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
int main(){	
	double PrevBalance,per,payment,Interest,NewBalance,Total;
	int N = 1;
	cout << "Enter initial loan: ";
	cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> per;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i = 0;			  
	while (i < PrevBalance)
	{
	cout << fixed << setprecision(2);
	cout << setw(13) << left << N;
	N++;
	cout << setw(13) << left << PrevBalance;
	Interest = PrevBalance*(per/100);
	cout << setw(13) << left << Interest;
	Total = PrevBalance+Interest;
	cout << setw(13) << left << Total;
	if(payment <= Total){
	cout << setw(13) << left << payment;
	}else{
	payment = Total;
	cout << setw(13) << left << payment;
	
	}
	NewBalance = Total-payment;
	cout << setw(13) << left << NewBalance;
	PrevBalance = NewBalance;

	cout << "\n";

	i++;
	}	
	
	return 0;
}
