#include <iostream>
#include <map>
using namespace std;

void apply_loan(map<int, double> &loans, int acc_number, double loan_amount) {
    loans[acc_number] = loan_amount;
    cout << "Loan of " << loan_amount << " approved for account " << acc_number << "." << endl;
}

int main() {
    map<int, double> loans;
    apply_loan(loans, 101, 5000);
    cout << "Loan for account 101: " << loans[101] << endl;
    return 0;
}