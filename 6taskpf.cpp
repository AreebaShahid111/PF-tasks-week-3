#include<iostream>
using namespace std;
main() {
float megabites;
float bits;
cout<< "Enter the size in megabites (MB): ";
cin >> megabites;
bits = 8000000 * megabites;
cout<< megabites << "MB is equivalent to " << bits << "bits ." ;

}