#include <iostream>
using namespace std;
double calculate_interest(double balance, double interest_rate, int years) {
    double interest = balance * (1 + interest_rate) * years - balance;
    return interest;
}
int main() {
    double balance = 1000;
    double interest_rate = 0.03;
    int years = 2;
    double interest = calculate_interest(balance, interest_rate, years);
    cout << "Interest earned after " << years << " year(s): " << interest << endl;
    return 0;
}