#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//variable declerations

int year, month, day, newMonth, newDay, newYear;

int main()
{
	cout << "\t★ ☆ ★ ☆ What's Tommorrow? ★ ☆ ★ ☆\n\n";

	cout << "★ For convenience, only enter years 2000-2020 ★\n\n";

	cout << "☆ Please enter today's date or 0 to quit ☆";
	cout << "\n\n\t★ Year: ";
	cin >> year;

	while ((year != 0) && ((year < 2000) || (year > 2020)))
	{
		cout << "\t\n☆ ERROR ☆ INPUT YEAR 2000-2020 ☆\n\n";

		cout << "\t★ Year: ";
		cin >> year;
	}

	while (year != 0)
	{
		cout << "\t★ Month: ";
		cin >> month;

		while ((month > 12) || (month < 1))
		{
			cout << "\t\n☆ ERROR ☆ INPUT 1-12 ☆\n\n";

			cout << "\t★ Month: ";
			cin >> month;
		}

		cout << "\t★ Day: ";
		cin >> day;

		if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
		{
			while ((day > 31) || (day < 1))
			{
				cout << "\t\n☆ ERROR IN DAY ☆ INPUT 1-31 FOR MONTH " << month << " ☆\n\n";

				cout << "\t★ Day: ";
				cin >> day;
			}
		}
		else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
		{
			while ((day > 30) || (day < 1))
			{
				cout << "\t\n☆ ERROR IN DAY ☆ INPUT 1-30 FOR MONTH " << month << " ☆\n\n";

				cout << "\t★ Day: ";
				cin >> day;
			}
		}
		else if (month == 2)
		{
			if ((year == 2000) || (year == 2004) || (year == 2008) || (year == 2012) || (year == 2016) || (year == 2020))
			{
				while ((day > 29) || (day < 1))
				{
					cout << "\t\n☆ ERROR IN DAY ☆ INPUT 1-29 FOR MONTH " << month << " ☆\n\n";

					cout << "\t★ Day: ";
					cin >> day;
				}
			}
			else
			{
				while ((day > 28) || (day < 1))
				{
					cout << "\t\n☆ ERROR IN DAY ☆ INPUT 1-28 FOR MONTH " << month << " ☆\n\n";

					cout << "\t★ Day: ";
					cin >> day;
				}
			}
		}
		else
		{
			cout << "\t\n☆ ERROR ☆ SHUTTING DOWN ☆\n";
			cout << "End of Program";
			return 0;
		}

		if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
		{
			if (day == 31)
			{
				newDay = 1;
				newMonth = month + 1;
				newYear = year;

				if (newMonth > 12)
				{
					newMonth = 1;
					newYear = year + 1;
				}
			}
			else if (day < 31)
			{
				newDay = day + 1;
				newMonth = month;
				newYear = year;
			}
			else
			{
				cout << "\t\n☆ ERROR ☆ SHUTTING DOWN ☆\n";
				cout << "End of Program";
				return 0;
			}
		}
		else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
		{
			if (day == 30)
			{
				newDay = 1;
				newMonth = month + 1;
				newYear = year;
			}
			else if (day < 30)
			{
				newDay = day + 1;
				newMonth = month;
				newYear = year;
			}
			else
			{
				cout << "\t\n☆ ERROR ☆ SHUTTING DOWN ☆\n";
				cout << "End of Program";
				return 0;
			}
		}
		else if (month == 2)
		{
			if ((year == 2000) || (year == 2004) || (year == 2008) || (year == 2012) || (year == 2016) || (year == 2020))
			{
				if (day == 29)
				{
					newDay = 1;
					newMonth = month + 1;
					newYear = year;
				}
				else if (day < 29)
				{
					newDay = day + 1;
					newMonth = month;
					newYear = year;
				}
				else
				{
					cout << "\t\n☆ ERROR ☆ SHUTTING DOWN ☆\n";
					cout << "End of Program";
					return 0;
				}
			}
			else
			{
				if (day == 28)
				{
					newDay = 1;
					newMonth = month + 1;
					newYear = year;
				}
				else if (day < 28)
				{
					newDay = day + 1;
					newMonth = month;
					newYear = year;
				}
				else
				{
					cout << "\t\n☆ ERROR ☆ SHUTTING DOWN ☆\n";
					cout << "End of Program";
					return 0;
				}
			}
		}
		else
		{
			cout << "\t\n☆ ERROR ☆ SHUTTING DOWN ☆\n";
			cout << "End of Program";
			return 0;
		}

		cout << "\n__________________________________\n\n";

		cout << "You said today's date was...\n\n";
		cout << "\t☆ " << month << "/" << day << "/" << year << " ☆";

		cout << "\n\nTomorrow's date is... \n\n";
		cout << "\t★ " << newMonth << "/" << newDay << "/" << newYear << " ★";

		cout << "\n\n☆ Please enter today's date or 0 to quit ☆";
		cout << "\n\n\t★ Year: ";
		cin >> year;

		while ((year != 0) && ((year < 2000) || (year > 2020)))
		{
			cout << "\t\n☆ ERROR ☆ INPUT YEAR 2000-2020 ☆\n";

			cout << "\t★ Year: ";
			cin >> year;
		}

	}

	cout << "\nEnd of Program";
	return 0;

}