#include "variables.h"

double get_sales_tax_amount(double meal_amount)
{
	const double tax_rate = .0675;
	double tax = 0.00;
	tax = meal_amount * tax_rate;

	return tax;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	double tip = 0.00;
	tip = tip_rate / 100 * meal_amount;

	return tip;
}