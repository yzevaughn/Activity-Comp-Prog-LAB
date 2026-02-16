#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    char choice;

    do {
        system("cls");
        const int numberOfProduct = 5;
        const int numberOfSalesPeople = 4;
        int salesperson, product;
        double amount;
        double sales[numberOfProduct][numberOfSalesPeople] = {0};

        cout << "Enter sales data (Enter 0 for Exit)\n";
        cout << "Salespeople (1-4)" << endl;
        cout << "Product (1-5)" << endl;


        while (true) {
            cout << "\nSalesperson: ";
            cin >> salesperson;

            if (salesperson == 0)
                break;

            cout << "Product: ";
            cin >> product;

            cout << "Amount: ";
            cin >> amount;


            sales[product - 1][salesperson - 1] += amount;
        }

        cout << "\n\n\tSales Summary Table\n\n";
        cout << "Product\t";

        for (int i = 0; i < numberOfSalesPeople; i++) {
            cout << i + 1 << "\t";
        }
        cout << "Total\n";

        double grandTotal = 0;


        for (int i = 0; i < numberOfProduct; i++) {

            double rowTotal = 0;

            cout << i + 1 << "\t";

            for (int j = 0; j < numberOfSalesPeople; j++) {

                cout << fixed << setprecision(2) << sales[i][j] << "\t";
                rowTotal += sales[i][j];

            }

            cout << rowTotal << endl;
            grandTotal += rowTotal;

        }


        cout << "Total\t";

        for (int j = 0; j < numberOfSalesPeople; j++) {
            double colTotal = 0;

            for (int i = 0; i < numberOfProduct; i++)
                colTotal += sales[i][j];

            cout << colTotal << "\t";
        }

        cout << grandTotal << endl;

        cout << "\nDo you want to try again (y/n): ";
        cin >> choice;

    } while (tolower(choice == 'y' ));

    return 0;
}
