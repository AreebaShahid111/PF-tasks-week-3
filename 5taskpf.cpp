#include<iostream>
using namespace std;
main() {
float matricmarks;
float intermarks;
float ecatmarks;
string studentname;
cout<< "Enter the student's name: ";
cin>> studentname;
cout<<" Enter matriculation marks (out of 1100): ";
cin >> matricmarks;
cout<<" Enter intermediate marks (out of 550): ";
cin>> intermarks;
cout<<" Enter Ecat marks (out of 400): ";
cin>> ecatmarks;
float matricagg;
float interagg;
float ecatagg;
float agg;
matricagg = matricmarks / 1100 * 10;
interagg = intermarks / 550 * 40;
ecatagg = ecatmarks / 400 * 50;
agg = matricagg + interagg + ecatagg;
cout<<" Aggregate score for " << studentname << " in UET is: " << agg;
}