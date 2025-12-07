# Adversary Bank ATM - C Project

A simple mock ATM machine implemented in C. Users can log in with a PIN, check balance, deposit, and withdraw funds. Designed as a learning project for practicing C programming, pointers, and modular design.

---

## Table of Contents
- [Features](#features)
- [Project Structure](#project-structure)
- [Building & Running](#building--running)
- [Usage Guide](#usage-guide)
- [Important Notes](#important-notes)

---

## Features

- ✓ **Secure Login** - PIN-based authentication with 3 attempt maximum
- ✓ **Check Balance** - View current account balance
- ✓ **Deposit Funds** - Add money to account
- ✓ **Withdraw Funds** - Withdraw with insufficient funds handling
- ✓ **Input Validation** - Graceful error handling for invalid inputs
- ✓ **User Feedback** - Clear screen and pause prompts for better UX

---

## Project Structure

```
ATM Simulation/
├── main.c                    # Main program entry point
├── login.c / login.h         # Login authentication module
├── checkBalance.c / .h       # Balance checking module
├── deposit.c / deposit.h     # Deposit transaction module
├── withdraw.c / withdraw.h   # Withdrawal transaction module
└── Bank ATM.cbp              # Code::Blocks project file
```

---

## Building & Running

### Prerequisites
- Code::Blocks IDE (recommended) or any C compiler

### Build Instructions
1. Open `Bank ATM.cbp` in Code::Blocks
2. Click **Build → Build** (or press Ctrl+F9)
3. The compiled executable will be in `bin/Debug/`

### Run the Program
- Execute the compiled program from Code::Blocks or command line
- Or double-click the executable from `bin/Debug/`

---

## Usage Guide

### Login
- Run the program
- Enter your PIN: **`1234`** (default)
- You have **3 attempts** maximum

### Main Menu
After successful login, choose from:

| Option | Action |
|--------|--------|
| **1** | Check Balance |
| **2** | Deposit Funds |
| **3** | Withdraw Funds |
| **0** | Exit Program |

### Transaction Examples

**Deposit:**
- Select option 2
- Enter amount to deposit
- Balance updates immediately

**Withdraw:**
- Select option 3
- Enter amount to withdraw
- System validates sufficient funds
- Balance updates or displays error if insufficient

---

## Important Notes

- **Numeric Input Only** - Invalid input is handled gracefully with prompts to re-enter
- **Real-time Balance** - Balance is displayed after each transaction
- **Screen Management** - Menu is cleared before display for clean output
- **PIN Security** - Default PIN is 1234; modify in source code for different values
- **Learning Purpose** - This is a mock ATM; balance resets on program exit (not persisted to file)

---

## Possible Enhancements

- [ ] Persistent storage (file-based account data)
- [ ] Multiple user accounts
- [ ] Transaction history logging
- [ ] Pin change functionality
- [ ] Dynamic interest calculation