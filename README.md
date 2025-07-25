🔐 C++ Password Management System
📘 Overview
This C++ console application simulates a basic password management system, incorporating features such as:

Password Strength Validation: Ensures passwords meet specified criteria.

Login Mechanism: Allows users to log in with their credentials.

Password Recovery: Provides a method for password reset using a linked phone number.

Security Measures: Implements account lockout after multiple failed login attempts.

⚙️ Features
Password Strength Requirements:

Minimum length: 12 characters

Must contain:

Uppercase letters

Lowercase letters

Digits

Special characters

User Interaction:

Prompts for username, phone number, and password.

Validates password strength before setting.

Allows login attempts with feedback on success or failure.

Provides password recovery option via phone number.

Security Protocols:

Limits login attempts to prevent unauthorized access.

Implements a cooldown period after multiple failed login attempts.

🛠️ Technologies Used
Programming Language: C++

Standard Libraries:

<iostream>: For input and output operations.

<string>: To handle string manipulations.

<cctype>: For character classification functions.

📂 File Structure
bash
Copy
Edit
/PasswordManagementSystem
│
├── main.cpp          # Main application logic
└── README.md         # Project documentation
▶️ Usage Instructions
Clone the Repository:

bash
Copy
Edit
git clone https://github.com/yourusername/PasswordManagementSystem.git
cd PasswordManagementSystem
Compile the Program:

bash
Copy
Edit
g++ -o password_manager main.cpp
Run the Executable:

bash
Copy
Edit
./password_manager
Follow On-Screen Prompts:

Enter your name and phone number.

Set a password that meets the strength criteria.

Attempt to log in with the set password.

Use the "forgot" option to reset the password if necessary.

