/**
 * @Me: I have to exclude this header below, because this a Microsoft-specific
 * header, and I am compiling on Linux.
 *
 * #include "stdafx.h" 
 */
#include <iostream>
#include <string>
#include <map>
#include <sstream>

/**
 * @Me: I needed this header so that I could compile. It is needed for the
 * getchar() method you are using throughout this app.
 */
#include <cstdio> 

using namespace std;

/**
 * Create a Dictionary to store each month's bill.
 */
using monthly_bills = std::map<std::string, int>;

int i, n;
float jan, feb, mar, apr, may, jun, jul, aug, sep, octb, nov, decb, sumtotal, 
  avetotal;

/**
 * @Me: Mostly, when you a naming an average method, function, or variable, 
 * you see "avg".
 */
float avg(); 
void display();
float monthtotal();

// @Me: So that the lines don't go past 80 characters, you can wrap an array
// like this:
string months[12] = {
  "January", 
  "February", 
  "March", 
  "April", 
  "May", 
  "June", 
  "July", 
  "August", 
  "September", 
  "October", 
  "November", 
  "December"
};


int main() {
  for (int i = 0; i < sizeof(months) / sizeof(*months); ++i) {
    string month = months[i];
    stringstream ss;
    ss << "Please enter the phone bill for the month of " << month << ":\t"; 
    string msg = ss.str();
    cout << msg;
    cin >> monthly_bills[month];
  }

	display();
	cout << monthtotal;

	getchar();
	cout << avg();
	getchar();
}

float monthtotal() {
  float total;
  std::cout << "Key/Value pairs: " << std::endl;
  for(auto& kv: dict) {
    total += kv.second;
    std::cout << "  " << kv.first << ": " << kv.second << std::endl;
  }
	//getchar();  // @Me: I don't think this will ever get executed after a "return".
}

float avg() {
  float total;
  for (int i = 0; i < sizeof(months) / sizeof(*months); ++i) {
    string month = months[i];
    total += monthly_bills[month];
  }
  return total/12;
	//getchar(); // @Me: I don't think this will ever get executed after a "return".
}

void display() {
	cout << "The results of your yearly phone bill are as follows: \n" << endl;
	cout << " The cost for " << months[0] << " was  ................... \t\t" << jan << endl;
	cout << " The cost for " << months[1] << " was  .................. \t\t" << feb << endl;
	cout << " The cost for " << months[2] << " was  ..................... \t\t" << mar << endl;
	cout << " The cost for " << months[3] << " was  ..................... \t\t" << apr << endl;
	cout << " The cost for " << months[4] << " was  ....................... \t\t" << may << endl;
	cout << " The cost for " << months[5] << " was  ...................... \t\t" << jun << endl;
	cout << " The cost for " << months[6] << " was  ...................... \t\t" << jul << endl;
	cout << " The cost for " << months[7] << " was  .................... \t\t" << aug << endl;
	cout << " The cost for " << months[8] << " was  ................. \t\t" << sep << endl;
	cout << " The cost for " << months[9] << " was  ................... \t\t" << octb << endl;
	cout << " The cost for " << months[10] << " was  .................. \t\t" << nov << endl;
	cout << " The cost for " << months[11] << " was  .................. \t\t" << decb << endl;
}
