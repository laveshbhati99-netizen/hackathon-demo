#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to store one expense
struct Expense {
    float amount;
    string category;
};

int main() {
    vector<Expense> expenses;
    int choice;

    do {
        cout << "\n----- Student Expense Tracker -----\n";
        cout << "1. Add Travel Expense\n";
        cout << "2. Add Food Expense\n";
        cout << "3. Add Education Expense\n";
        cout << "4. View All Expenses\n";
        cout << "5. View Total Expense\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            Expense e;
            cout << "Enter amount: ";
            cin >> e.amount;

            if (choice == 1)
                e.category = "Travel";
            else if (choice == 2)
                e.category = "Food";
            else if (choice == 3)
                e.category = "Education";

            expenses.push_back(e);
            cout << "Expense added successfully!\n";
        }

        else if (choice == 4) {
            if (expenses.empty()) {
                cout << "No expenses recorded yet.\n";
            } else {
                cout << "\nAmount\tCategory\n";
                for (int i = 0; i < expenses.size(); i++) {
                    cout << expenses[i].amount << "\t" << expenses[i].category << endl;
                }
            }
        }

        else if (choice == 5) {
            float total = 0;
            for (int i = 0; i < expenses.size(); i++) {
                total += expenses[i].amount;
            }
            cout << "Total Expense: " << total << endl;
        }

        else if (choice == 6) {
            cout << "Exiting program. Thank you!\n";
        }

        else {
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}
