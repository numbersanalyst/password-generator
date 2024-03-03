#include <iostream>
#include <string>
#include <random>

using namespace std;

int main() {
    unsigned int lenght;
    string password;

    cout << "Enter the length of the password: ";
    cin >> lenght;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(33, 126);

    for (int i = 0; i < lenght; i++) {
        password += char(dist(gen));
    }

    cout << "Password: " << password << endl;

    return 0;
}