# capstone24
## Capstone Project: Bkash Clone

A simplified CLI-based simulation of an online banking system inspired by **Bkash**. This project demonstrates the basic operations of a digital payment and financial service, allowing users to register, log in, and perform basic operations through a menu-based interface.

## Table of Contents

- [Features](#features)
- [Setup](#setup)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [Contribution](#contribution)
- [License](#license)

---

## Features

- **Registration**: Users can register by entering their full name, phone number, and a secure 6-digit PIN.
- **Login**: (Under construction) Users will be able to log in using their phone number and PIN.
- **Validation**: Input validation ensures only valid names, phone numbers, and PINs are accepted.
- **User Interface**: Simple CLI-based interface for easy navigation and understanding.

## Setup

### Prerequisites

- GCC Compiler (for C)
- Clone the repository or download the source code files:
  ```sh
  git clone https://github.com/imransihab0/capstone24.git
  cd capstone24
- To compile the project, run:
  ```sh
  gcc main.c -o bkash
- Once compiled, you can start the application using:
  ```sh
  ./bkash.exe (for window) and ./bkash.out (for mac and linux)

## Usage

1. **Run the Application**:
   - After compiling, execute the program using the commands mentioned in the [Setup](#setup) section.

2. **Registration**:
   - Enter your full name, phone number, and a 6-digit PIN when prompted.
   - The system validates the input and registers the user.

3. **Login** *(Under Construction)*:
   - Enter your registered phone number and PIN to access the application.

4. **Available Features**:
   - **Mobile Recharge**:
     - Deducts a specified amount from the user's balance and simulates a recharge to the given phone number.
     - Displays a success message with the remaining balance.
   - **Send Money** *(Under Development)*:
     - Transfer money to another registered user.
   - **Balance Inquiry**:
     - Check the current balance available in your account.

5. **Exit**:
   - Select the exit option from the menu to terminate the application.

---

## Code Structure

The codebase is structured into multiple files for better organization and scalability:

- **`main.c`**: 
  - Entry point of the application.
  - Handles the main menu and user navigation through various features.

- **`user.c`**: 
  - Contains functions for user-related operations such as registration, login, and input validation.

- **`operations.c`**: 
  - Contains core financial operations like mobile recharge, balance update, and other transactional functionalities.

- **`helper.c`**: 
  - Contains utility functions to support reusable logic like file operations, clearing the terminal, and input formatting.

- **`database/`**:
  - Directory to store user data and transaction logs in a structured format.

- **`README.md`**:
  - Provides an overview of the project, setup instructions, and usage guidelines.

Each file is modular, focusing on specific responsibilities to ensure readability and maintainability.

