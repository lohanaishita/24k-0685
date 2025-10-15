#include <iostream>
#include <string>
using namespace std;
class MobileDevice {
private:
    string modelName;
    const string IMEINumber; 
public:
    MobileDevice(string model, string imei) 
        : modelName(model), IMEINumber(imei) {}
    void verifyDevice() const {
        cout << "Device Verification"<<endl;
        cout << "Model Name: " << modelName << endl;
        cout << "IMEI Number: " << IMEINumber << endl;
        cout << "Device successfully verified by PTA.\n";
    }
};
int main() {
    MobileDevice d1("Samsung Galaxy S23", "359876543210123");
    MobileDevice d2("iPhone 15 Pro", "356789012345678");
    d1.verifyDevice();
    d2.verifyDevice();
    return 0;
}

