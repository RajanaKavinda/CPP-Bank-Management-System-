# CPP-Bank-Management-System

This repository contains the "Bank-Management-System" that I completed to revise and strengthen my C++ programming knowledge. The project implements a simple banking system with features to create accounts, manage balances, and display account information. It demonstrates various object-oriented programming (OOP) concepts and C++ functionalities.

## Features

1. **Account Creation**:
   - Users can create a new bank account by providing their first name, last name, and initial balance.
   - A confirmation message and account details are displayed upon successful creation.

2. **Account Management**:
   - Deposit and withdraw funds from the account.
   - Check current account balance.

3. **Object-Oriented Approach**:
   - The project uses classes and objects to structure the banking system.

---

## Project Structure

```plaintext
Final_Project/
|
|-- headers/         # Contains header files for the project
|   |-- Account.h    # Account class definition
|   |-- Bank.h       # Bank class definition
|
|-- Account.cpp      # Implementation of Account class
|-- Bank.cpp         # Implementation of Bank class
|-- Bank.data        # File for storing account data (if implemented)
|-- main.cpp         # Main program logic
|-- main.exe         # Compiled executable (optional)
```

---

## Theories and Concepts Covered

This project revises the following key C++ programming concepts:

1. **Object-Oriented Programming (OOP):**
   - Classes and Objects
   - Encapsulation and Abstraction
   - Member functions and constructors

2. **File Handling:**
   - Storing and retrieving account data (if implemented in `Bank.data` file).

3. **Standard Input/Output:**
   - Using `cin` and `cout` for user interaction.

4. **Dynamic Memory Allocation:**
   - Allocating memory for objects dynamically (if implemented).

5. **Operator Overloading:**
   - Overloading `<<` for displaying account details.

6. **Control Flow and Decision-Making:**
   - Using `switch` statements to navigate between different banking operations.

7. **Error Handling (Optional):**
   - Handling invalid inputs or operations (e.g., withdrawing more than the balance).

---

## How to Run

### Prerequisites
- A C++ compiler (e.g., g++, Visual Studio, or Clang).
- A code editor or IDE (e.g., Visual Studio Code, CLion, or Code::Blocks).

### Steps
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/Final_Project.git
   cd Final_Project
   ```

2. Compile the project:
   ```bash
   g++ -o main main.cpp Account.cpp Bank.cpp
   ```

3. Run the program:
   ```bash
   ./main
   ```

4. Follow the on-screen instructions to use the banking system.

---

## Key Takeaways

This project is an excellent opportunity to:
- Reinforce the basics of C++ programming.
- Understand the principles of object-oriented programming.
- Learn how to structure a program using multiple files.
- Explore user interaction and input validation in C++.
- Practice debugging and testing small-scale projects.

Happy coding!

