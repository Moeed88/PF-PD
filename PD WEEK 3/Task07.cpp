#include <iostream>
using namespace std;
main()
{
string movie_name;
int adult_ticket_price;
int child_ticket_price;
int no_of_adult_tickets_sold;
int no_of_child_tickets_sold;
float amount_of_adult_tickets_sold;
float amount_of_child_tickets_sold;
float percentage_to_be_donated;
float total_amount_generated;
float remaining_amount;

cout << "Enter movie name: ";
cin >> movie_name;
cout << "Enter adult ticket price: ";
cin >> adult_ticket_price;
cout << "Enter child ticket price: ";
cin >> child_ticket_price;
cout << "Enter no of adult tickets sold: ";
cin >> no_of_adult_tickets_sold;
cout << "Enter no of child tickets sold: ";
cin >> no_of_child_tickets_sold;
cout << "Enter percentage to be donated: ";
cin >> percentage_to_be_donated;


amount_of_adult_tickets_sold = no_of_adult_tickets_sold * adult_ticket_price;
amount_of_child_tickets_sold = no_of_child_tickets_sold * child_ticket_price;
total_amount_generated = amount_of_adult_tickets_sold + amount_of_child_tickets_sold;
percentage_to_be_donated = total_amount_generated * 0.1;
remaining_amount = total_amount_generated - percentage_to_be_donated;

cout << "Total amount generated is " << total_amount_generated << endl;
cout << "Remaining amount is " << remaining_amount << endl;
}