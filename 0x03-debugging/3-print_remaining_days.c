#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - Checks if a year is a leap year.
 * @year: The year to check.
 *
 * Return: 1 if it's a leap year, 0 otherwise.
 */
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return (1);
	return (0);
}

/**
 * print_remaining_days - Takes a date and prints how many days are
 *                       left in the year, taking leap years into account.
 * @month: Month in number format.
 * @day: Day of month.
 * @year: Year.
 *
 * Return: void.
 */
void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int leap_year = is_leap_year(year);

	if (leap_year)
		days_in_month[2] = 29;

	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	int day_of_year = day;
	for (int i = 1; i < month; i++)
	{
		day_of_year += days_in_month[i];
	}

	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", 365 + leap_year - day_of_year);
}
