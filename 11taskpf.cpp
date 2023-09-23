#include<iostream>
using namespace std;
main() {
int currentpop;
int birthrate;
int futurepop;
cout<< "Enter the current worls population: ";
cin >> currentpop;
cout<< "Enter the monthly birth rate (number of births per month):";
cin >> birthrate;
futurepop = (birthrate * 12 * 30) + 256;
cout << " The population in three decades will be: " << futurepop ; 

}