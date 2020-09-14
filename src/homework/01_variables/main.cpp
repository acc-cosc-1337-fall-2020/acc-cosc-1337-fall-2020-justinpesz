#include "variables.h"
#include<iostream>
#include<iomanip>

using std::cin;	using std::cout;

int main()
{
	double meal_total = 0.00;
	double tip_percent = 0.00;
	double total = 0.00;

	cout<<"Enter meal total: $";
	cin>>meal_total;

	cout<<"Enter tip percentage: ";
	cin>>tip_percent;
	
	double tax_amount = get_sales_tax_amount(meal_total);
	double tip_amount = get_tip_amount(meal_total, tip_percent);

	total = meal_total + tax_amount + tip_amount;

	cout<<"\nMeal Total:  $"<<std::fixed<<std::setprecision(2)<<std::setw(8)<<meal_total<<"\n";
	cout<<"Sales Tax:   $"<<std::setw(8)<<tax_amount<<"\n";
	cout<<"Tip applied: $"<<std::setw(8)<<tip_amount<<"\n";
	cout<<"Total Bill:  $"<<std::setw(8)<<total;

	return 0;
}
