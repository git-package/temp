#include <iostream>
using namespace std;

void celsiusToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit." << endl;
}

void fahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5/9;
    cout << fahrenheit << " Fahrenheit is " << celsius << " Celsius." << endl;
}

int main() {
    int choice;
    float temperature;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Choose an option (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        celsiusToFahrenheit(temperature);
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        fahrenheitToCelsius(temperature);
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
