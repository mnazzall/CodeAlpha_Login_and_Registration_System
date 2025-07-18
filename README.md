# CodeAlpha_Login_and_Registration_System

A simple console-based login and registration system built in C++. This program allows users to register with a username and password, and later log in using their credentials. All credentials are stored locally in a text file.

---

##  Features:

-  Register new users with unique usernames
-  Checks for duplicate usernames during registration
-  User login with verification of credentials
-  Stores data in a `user.txt` file in `username:password` format
-  Displays appropriate success or error messages

---

##  How It Works:

1. **Registration:**
   - Prompts the user for a new username and password.
   - Checks if the username already exists.
   - If unique, appends the username and password to `user.txt`.

2. **Login:**
   - Prompts the user for their username and password.
   - Checks if the provided credentials exist in the file.
   - Displays success or failure messages accordingly.

---

##  Sample Output:

Register

Login

Enter choice: 1

Enter a username: john_doe

Enter a password: pass123

Registration successful!

Register

Login

Enter choice: 2

Enter your username: john_doe

Enter your password: pass123

Login successful!


---

##  File Structure:

- `Banking System.cpp` - Contains the full source code.
- `user.txt` - Auto-generated file that stores user credentials in `username:password` format.

---

##  Security Note:

This project is intended for **educational purposes only**. In real-world applications:
- Passwords must **never be stored as plain text**.
- Always use **hashing algorithms** like `bcrypt` or `SHA-256`.
- Consider using a secure **database** instead of a flat file.

