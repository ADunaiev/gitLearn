#include <iostream>
using namespace std;
int main()
{
	int feed_daily_weight;
	float feed_monthly_weight;
	const int Days_in_month = 30;

	cout<< "\nPlease enter daily weight of feed in gramms \n\n";

	cin >> feed_daily_weight;

	feed_monthly_weight = feed_daily_weight * Days_in_month;

	cout << "\nYou will need " << feed_monthly_weight/1000 << " kg of feed per month!"<<endl;

	return 0;
}