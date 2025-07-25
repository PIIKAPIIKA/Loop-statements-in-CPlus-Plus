🔐 Password Strength Checker & Login System (C++)
Overview
This C++ application provides a secure and user-friendly system for:

User Registration: Inputting personal details and setting a strong password.

Login: Authenticating users with password verification.

Password Reset: Allowing users to reset their password via phone number verification.

Security Measures: Implementing login attempt limits and account blocking after multiple failed attempts.

🛠 Features
Password Strength Validation: Ensures passwords meet criteria such as minimum length, inclusion of uppercase and lowercase letters, digits, and special characters.

Password Code Generation: Computes a unique code by summing the ASCII values of all characters in the password.

Login System: Allows users to log in by entering their password.

Password Reset: Facilitates password reset through phone number verification.

Security Measures: Blocks account or enforces a waiting period after multiple failed login attempts.

📋 Code Implementation
cpp
Copy
Edit
#include <iostream>
#include <string>
#include <cctype>
#include <chrono>
#include <thread>

using namespace std;

// Function to check if the password meets strength criteria
bool isStrongPassword(const string& password) {
    if (password.length() < 12)
        return false;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        else if (islower(ch)) hasLower = true;
        else if (isdigit(ch)) hasDigit = true;
        else hasSpecial = true;
    }
    return hasUpper && hasLower && hasDigit && hasSpecial;
}

// Function to calculate a unique password code by summing ASCII values
int passwordCode(const string& password) {
    int sum = 0;
    for (char ch : password) {
        sum += static_cast<int>(ch);
    }
    return sum;
}

int main() {
    string name, phone, password;
    const int maxAttempts = 3;
    int attempts = 0;

    cout << "Welcome to the Password Strength Checker & Login System\n\n";
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your phone number: ";
    getline(cin, phone);

    // Set a strong password
    while (true) {
        cout << "\nSet your password (at least 12 chars, uppercase, lowercase, digit, special char): ";
        getline(cin, password);

        if (isStrongPassword(password)) {
            cout << "Password is strong!\n";
            cout << "Your password code (internal use): " << passwordCode(password) << "\n";
            break;
        } else {
            cout << "Password does not meet criteria. Please try again.\n";
        }
    }

    // Login system
    bool loggedIn = false;
    bool blocked = false;

    while (!loggedIn && !blocked) {
        cout << "\nLogin - Enter your password (or type 'forgot' to reset): ";
        string inputPassword;
        getline(cin, inputPassword);

        if (inputPassword == "forgot") {
            cout << "Enter your phone number for verification: ";
            string inputPhone;
            getline(cin, inputPhone);

            if (inputPhone == phone) {
                cout << "Phone verified. Set a new password.\n";
                while (true) {
                    cout << "New password: ";
                    getline(cin, password);
                    if (isStrongPassword(password)) {
                        cout << "Password reset successful.\n";
                        attempts = 0; // reset attempts
                        break;
                    } else {
                        cout << "Password does not meet criteria. Try again.\n";
                    }
                }
            } else {
                cout << "Phone number mismatch. Cannot reset password.\n";
            }
            continue;
        }

        if (inputPassword == password) {
            cout << "Login successful! Welcome, " << name << ".\n";
            loggedIn = true;
        } else {
            attempts++;
            cout << "Incorrect password. Attempts left: " << maxAttempts - attempts << "\n";
            if (attempts >= maxAttempts) {
                cout << "Too many failed attempts. Account blocked for 10 seconds.\n";
                blocked = true;
                this_thread::sleep_for(chrono::seconds(10));
                cout << "You may try again now.\n";
                attempts = 0;
                blocked = false;
            }
        }
    }

    cout << "Program ended.\n";
    return 0;
}
🚀 How to Compile and Run
Save the Code: Copy the code into a file named password_checker.cpp.

Open Terminal/Command Prompt: Navigate to the directory containing the file.

Compile the Code:

On Linux/macOS:

bash
Copy
Edit
g++ -o password_checker password_checker.cpp
On Windows (using MinGW):

bash
Copy
Edit
g++ -o password_checker.exe password_checker.cpp
Run the Program:

On Linux/macOS:

bash
Copy
Edit
./password_checker
On Windows:

bash
Copy
Edit
password_checker.exe
📝 Notes
Security Disclaimer: This program is a basic demonstration for educational purposes. It does not implement real-world security features like encryption or secure storage. Always use trusted and secure methods for handling passwords in real applications.

Customization: Feel free to modify the code to suit your specific requirements or to add additional features.
