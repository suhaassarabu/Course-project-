# Course-project

📘 Customer Billing System in C

Abstract

This project is a C-based Customer Billing System that uses binary file handling to store and manage customer billing records.
The system allows users to add customers, store item details, calculate totals, view all customers, update, delete, and save data into a persistent binary file.

It serves as a simple demonstration of file operations, arrays, and structure-based data management.

Features
1. Add Customer

Adds a new customer entry.

Stores:

Customer ID

Customer Name

Item details (name, price, quantity)

Automatically calculates total bill

Saves data in customers.dat.

2. Display Customers

Shows all stored customers in a clean format.

Displays:

ID

Name

Total Bill

Item-wise breakdown

3. Update Customer

Allows updating the customer name using customer ID.

Modifies the record in memory.

4. Delete Customer

Deletes a customer’s record by ID.

Shifts remaining records to keep the array clean.

Updates total count.

5. Save to File

Saves all customer data to customers.dat in binary format.

Uses fwrite() to store:

Number of customers

Entire array of customer structures

6. Load From File

Automatically loads previously saved data at program start using fread().

Allows continuous use of old records.

7. Exit

Closes the program safely.

How It Works

Each customer is stored using:

typedef struct {
    char name[30];
    float price;
    int qty;
} Item;

typedef struct {
    int id;
    char name[30];
    Item items[20];
    int itemCount;
    float total;
} Customer;


Data is stored in binary format in customers.dat using:

fwrite() → Save records

fread() → Load records

A menu-driven interface allows the user to continuously interact until exit.

Running the Program
1. Compile the program
gcc main.c -o billing

2. Run the program
./billing

Files Used
customers.dat

Stores all customer details in binary format.

Automatically created when “Save” is selected.

main.c

Core source code containing:

Add

Show

Update

Delete

Save

Load

Conclusion

This Customer Billing System demonstrates the effective use of:

Structures

File Handling

Arrays

CRUD operations

Menu-driven programming

It is ideal for academic projects and learning resource management in C.

Output Photos

=> Main Menu

<img width="460" height="154" alt="Screenshot 2025-11-21 161033" src="https://github.com/user-attachments/assets/073c3249-6574-4875-a702-fa60b3c3e3cf" />

=> Add Customer

<img width="226" height="298" alt="image" src="https://github.com/user-attachments/assets/29e147f0-2d39-40e3-af4f-1b89b03848ff" />

=> Display Customers

<img width="222" height="194" alt="image" src="https://github.com/user-attachments/assets/789dc2e5-6416-485a-a2ee-685947ed58be" />

=> Update Customer

<img width="218" height="169" alt="image" src="https://github.com/user-attachments/assets/eef59576-f6b9-4214-8344-09fc013f6049" />

=> Delete Customer

<img width="173" height="147" alt="image" src="https://github.com/user-attachments/assets/74b01cc7-db8d-4819-bc20-acc3dadfdc0e" />

=> Before Delete

<img width="252" height="192" alt="image" src="https://github.com/user-attachments/assets/1fe0c437-9c22-4184-9c34-6a3382bbcb94" />

=> After Delete

<img width="160" height="135" alt="image" src="https://github.com/user-attachments/assets/e0dbf5e0-5148-4ed6-821d-a5d2e49969bd" />



