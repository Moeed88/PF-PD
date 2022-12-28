#include <iostream>
using namespace std;
main()
{
float bag_size;
float cost_of_bag;
float area_covered;
float cost_of_fertilizer_per_pound;
float cost_of_fertilizing_the_area;

cout << "Enter bag size: ";
cin >> bag_size;
cout << "Enter cost of bag: ";
cin >> cost_of_bag;
cout << "Enter area covered by each bag: ";
cin >> area_covered;

cost_of_fertilizer_per_pound = bag_size / cost_of_bag;
cost_of_fertilizing_the_area = bag_size /area_covered;

cout << "The cost of fertilizing per pound is " << cost_of_fertilizer_per_pound << endl;
cout << "The cost of fertilizing the area is " << cost_of_fertilizing_the_area << endl;
}