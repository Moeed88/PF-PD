#include <iostream>
using namespace std;
main()
{
float fruit_price_per_kg;
float veg_price_per_kg;
float total_kgs_of_fruits;
float total_kgs_of_veg;
float total_fruits_sold;
float total_veg_sold;
float total_fruits_sold;
float onerp_to_coins;
float earnings_in_rupees;
onerp=1.94coins;
float onecoin_to_rp;
onecoin=1/1.94rp;

cout << "Enter fruit price per kg: ";
cin >> fruit_price_per_kg;
cout << "Enter vegetables price per kg: ";
cin >> veg_price_per_kg;
cout << "Enter total kilograms of fruits: ";
cin >> total_kgs_of_fruits;
cout << "Enter total kilograms of vegetables: ";
cin >> total_kgs_of_veg;

total_fruits_sold = fruit_price_per_kg * total_kgs_of_fruits;
total_veg_sold = veg_price_per_kg * total_kgs_of_veg;
total_fruits_sold = total_fruits_sold + total_veg_sold;
earnings_in_rupees = total_fruits_sold * 1/1.94;

cout << "Total earning in rupees " << earnings_in_rupees << endl;


}