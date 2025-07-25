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
