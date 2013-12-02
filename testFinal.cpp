/**
 * @Me: I have to exclude this header below, because this a Microsoft-specific
 * header, and I am compiling on Linux.
 *
 * #include "stdafx.h" 
 */
#include <iostream>
#include <string>
#include <map>
#include <cstdio> 

using namespace std;

float total;

// Sample Output:
// Your total for the year was:  $67.
// Your monthly average was: $5.58333.
// Your payment for January was  $4.
// Your payment for February was   $3.
// Your payment for March was  $2.
// Your payment for April was  $2.
// Your payment for May was  $4.
// Your payment for June was   $5.
// Your payment for July was   $6.
// Your payment for August was   $34.
// Your payment for September was  $2.
// Your payment for October was  $1.
// Your payment for November was   $1.
// Your payment for December was   $3.

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
  /* type of the container:
   * - map: elements key/value pairs
   * - string: keys have type string
   * - float: values have type float
   */
  typedef map<string,float> MonthlyBills;
  MonthlyBills collection;

  // Get the values.
  for (int i = 0; i < sizeof(months) / sizeof(*months); ++i) {
    string month = months[i];
    cout << "Please enter the phone bill for the month of " << month << ":\t"; 
    cin >> collection[month];
  }

  // Gets the total.
  for (int i = 0; i < sizeof(months) / sizeof(*months); ++i) {
    string month = months[i];
    total += collection[month];
  }

  // Prints the total.
  cout << "Your total for the year was:\t$" << total << "." << endl;

  // Print the average.
  cout << "Your monthly average was:\t$" << total/12 << "." << endl;

  /* print all elements
   * - iterate over all elements
   * - element member first is the key
   * - element member second is the value
   */
  // MonthlyBills::iterator pos;
  // for (pos = collection.begin(); pos != collection.end(); ++pos) {
  //   cout << "In the month of \"" << pos->first << "\" "
  //       << "you paid $" << pos->second << "." << endl;
  // }
  for (int i = 0; i < sizeof(months) / sizeof(*months); ++i) {
    string month = months[i];
    float payment = collection[month];
    cout << "Your payment for " << month << " was \t$" << payment << "."<< endl;
  }
}