#include <iostream>
using namespace std;
class PetrolPump {
private:
    int pumpID;
    double litersFilled;
    static double pricePerLiter;
public:
    PetrolPump(int id, double liters) {
        pumpID = id;
        litersFilled = liters;
    }
    void printReceipt() {
        double totalAmount = litersFilled * pricePerLiter;
        cout << "Petrol Pump Receipt\n";
        cout << "Pump ID: " << pumpID << endl;
        cout << "Liters Filled: " << litersFilled << " L" << endl;
        cout << "Price per Liter: " << pricePerLiter << " PKR" << endl;
        cout << "Total Amount: " << totalAmount << " PKR" << endl;
    }
};
double PetrolPump::pricePerLiter = 270.50;
int main() {
    PetrolPump p1(101, 20.5);
    PetrolPump p2(102, 15.0);\
    p1.printReceipt();
    p2.printReceipt();

    return 0;
}
