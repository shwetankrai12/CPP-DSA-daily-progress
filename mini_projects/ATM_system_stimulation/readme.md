# 🏦 ATM Simulator in C++

This is a simple **console-based ATM simulation** project written in C++.  
It allows the user to check balance, withdraw and deposit money. The program runs in a loop until the user exits.

## 📋 Features

- ✅ Check balance  
- ✅ Withdraw money (with amount validation)  
- ✅ Deposit money (with validation)  
- ✅ Menu runs until user chooses to exit

## 🚀 How It Works

The ATM has a default starting balance of ₹1000.  
The user is shown a menu and asked to choose one of the operations.  
The program uses a `while(true)` loop to keep running until the user selects Exit.

## 💻 Concepts Used

- `while(true)` infinite loop  
- `if`, `else if`, `else` conditionals  
- Input/output using `cin`, `cout`  
- Balance update using `+=` and `-=`

## 🧪 Sample Flow

Hello, Welcome to Shwetank Bank.
Enter your Choice:

Check balance

withdrawal

deposit

Exit
Enter your choice(1-4): 2
Enter the amount:
200
Your balance is: 800

shell
Copy
Edit

## 📥 How to Run

### Compile:
```bash
g++ atm.cpp -o atm
Run:
bash
Copy
Edit
./atm
🧠 What I Learned
How to write a menu-driven program

Using conditionals with loops

Validating user input (like not allowing negative deposit/withdrawal)

Writing clean and readable C++ code

📂 Files
atm.cpp — Main source code

README.md — Project description

👤 Created By
Shwetank Rai — C++ learner documenting my progress on GitHub

🚨 Note: This is a beginner-level project. No real data is saved; all values reset when you restart the program.