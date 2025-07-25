#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool a(string b) {
    if (b.length() < 12) return false;

    bool c = false, d = false, e = false, f = false;

    for (char g : b) {
        if (isupper(g)) c = true;
        else if (islower(g)) d = true;
        else if (isdigit(g)) e = true;
        else f = true;
    }

    return c && d && e && f;
}

int b(string c) {
    int d = 0;
    for (char e : c) {
        d += (int)e;
    }
    return d;
}

int main() {
    string a1, a2, a3, a4;
    int a5 = 0;

    cout << "Enter name: ";
    cin >> a1;

    cout << "Enter phone: ";
    cin >> a3;

    while (true) {
        cout << "\nSet password (min 12 chars, use cap, small, digit, special): ";
        cin >> a2;

        if (a(a2)) {
            cout << "Password is strong\n";
            cout << "Code: " << b(a2) << endl;
            break;
        } else {
            cout << "Password is weak\n";
        }
    }

    while (true) {
        cout << "\nEnter password to login (or type forgot): ";
        cin >> a4;

        if (a4 == a2) {
            cout << "Login success\n";
            break;
        } else if (a4 == "forgot") {
            string p;
            cout << "Enter phone: ";
            cin >> p;

            if (p == a3) {
                cout << "Phone OK. Set new password: ";
                cin >> a2;

                while (!a(a2)) {
                    cout << "Weak. Try again: ";
                    cin >> a2;
                }

                cout << "Updated. Code: " << b(a2) << endl;
                a5 = 0;
            } else {
                cout << "Phone doesn't match\n";
                break;
            }
        } else {
            cout << "Wrong password\n";
            a5++;

            if (a5 == 3) {
                cout << "Wait 5 mins\n";
                break;
            }

            if (a5 >= 5) {
                cout << "Account blocked\n";
                break;
            }
        }
    }

    return 0;
}