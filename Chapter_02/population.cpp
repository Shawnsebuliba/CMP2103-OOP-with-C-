// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.

#include <iostream>
using namespace std;

int main() {

    int current_population = 312032486;
    int seconds_per_year;
    int births_per_year, deaths_per_year, immigrants_per_year;

    //calculating number of seconds in a year
    seconds_per_year = 365*24*60*60;

    //calculating number of births in a year
    births_per_year = seconds_per_year / 7;

    //calculating number of deaths in a year
    deaths_per_year = seconds_per_year / 13;

    //calculating the number of immigrants in a year
    immigrants_per_year = seconds_per_year / 45;

    for (int year = 1; year <= 5; year++)
     {
        current_population += births_per_year - deaths_per_year + immigrants_per_year;
        cout << "Population after " << year << " year(s): " << current_population << endl;
    }

}

