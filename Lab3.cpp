// Jessie Amador                                                                                                        
// lab3.cpp                                                                                                             
// 10/7/24                                                                                                              


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  const double ADULT_TICKET_PRICE = 15.00;
  const double CHILD_TICKET_PRICE = 9.00;
  const double PROFIT_PERCENTAGE = 0.25;

  string movieName;
  int adultTicketsSold;
  int childTicketsSold;
  double grossProfit, netProfit, amountPaidToDistributor;

  cout << "Enter the name of the movie: ";
  getline(cin,movieName);

  cout << "Enter the numebr of royal adlut tickets sold ";
  cin >> adultTicketsSold;

  cout << "Enter the number of magical child tickets sold: ";
  cin >> childTicketsSold;

  grossProfit = (adultTicketsSold * ADULT_TICKET_PRICE) + (childTicketsSold * CHILD_TICKET_PRICE);

  netProfit = grossProfit * PROFIT_PERCENTAGE;

  amountPaidToDistributor = grossProfit - netProfit;

  cout << left << setw(35) << "Movie Name: " << right << movieName << endl;
  cout << left << setw(35) << "Royal Adult Ticket Sold: " << right << adultTicketsSold << endl;
  cout << left << setw(35) << "Royal Adult Tickets Sold: " << right << adultTicketsSold << endl;
  cout << left << setw(35) << "Magical Child Tickets Sold: " << right << childTicketsSold << endl;
  cout << fixed << setprecision(2);
  cout << left << setw(35) << "Gross Box Office Profit($): " << right << grossProfit << endl;
  cout << left << setw(35) << "Net Box Office Profit($): " << right << netProfit << endl;
  cout << left << setw(35) << "Amount Paid to Distribution($): " << right << amountPaidToDistributor << endl;

    return 0; 
}