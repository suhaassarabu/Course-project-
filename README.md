# Course-project
course project
📘 Customer Billing System in C

A simple and efficient Customer Billing System built in C language.
This project demonstrates the use of structures, arrays, file handling, and CRUD operations to manage customer billing information.

🧾 Overview

This program allows you to:

Add new customers

Add multiple purchased items

Automatically calculate total bill

Update customer details

Delete customer records

Display all customers with item-wise details

Save data to a file (customers.dat)

Load data automatically when the program starts

The system uses binary file storage so that all data is preserved even after the program closes.

✨ Features (More Detailed)
🔹 1. Add Customers

Enter customer name

Add any number of items (name, price, quantity)

Automatically calculates item-wise total & final bill

Assigns unique ID automatically

🔹 2. View All Customers

Displays:

Customer ID

Name

Total bill

Each item with quantity and price

🔹 3. Update Customer

Update customer name using ID

(You can ask me to add item update also)

🔹 4. Delete Customer

Delete a customer using ID

Automatically shifts array elements

Maintains correct order

🔹 5. Save to File

Saves all customers to binary file customers.dat

🔹 6. Load at Startup

Automatically loads saved data

Allows continuing from last usage

🛠 Tech Used
Feature	Technology
Programming Language	C
File Handling	Binary files (.dat)
Data Storage	Structures + Arrays
Build Tool	GCC Compiler
📂 Project Structure
Course-project/
│
├── main.c               # Source code
├── customers.dat        # Auto-created database file
└── README.md            # Project documentation

🚀 How to Run the Program
Step 1 — Compile
gcc main.c -o billing

Step 2 — Run
./billing

📌 Program Menu (Screenshot Style)

<img width="239" height="137" alt="image" src="https://github.com/user-attachments/assets/53932b75-b965-4b38-a7f7-f17457576cd6" />

📈 Sample Output

<img width="188" height="166" alt="image" src="https://github.com/user-attachments/assets/c6364a61-697c-418c-b73d-c8d5534894c3" />

📚 Learning Concepts Used
✔ Structures in C

Used for organizing customer and item data.

✔ File Handling

Binary file (wb/rb) ensures data persistence.

✔ CRUD Operations

Classic Create–Read–Update–Delete system.

✔ Arrays

Used for storing up to 50 customers and 20 items each.
