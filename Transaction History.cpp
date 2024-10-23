#include <iostream>
#include <vector>
#include <string>
using namespace std;

void add_transaction(vector<string> &transactions, string transaction_type, double amount) {
    transactions.push_back(transaction_type + " of " + to_string(amount));
}

void show_transaction_history(const vector<string> &transactions) {
    cout << "Transaction History:" << endl;
    for (const string &transaction : transactions) {
        cout << transaction << endl;
    }
}

int main() {
    vector<string> transactions;
    add_transaction(transactions, "Deposit", 1000);
    add_transaction(transactions, "Withdrawal", 500);
    show_transaction_history(transactions);
    return 0;
}