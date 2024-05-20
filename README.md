### Project Overview
This project is a simple ATM simulation program developed in C. It allows users to authenticate with a PIN, check their account balance, make withdrawals, deposits, and transfers. The purpose of this project is to improve my coding skills and to become more proficient with the C programming language.

### Features
- **Authentication**: Users must enter a valid four-digit PIN to access the system. The program allows up to four attempts before exiting.
- **Balance Inquiry**: Users can check their current account balance.
- **Withdrawals**: Users can withdraw money from their account, with checks for sufficient balance.
- **Deposits**: Users can deposit money into their account.
- **Transfers**: Users can transfer money to another account by entering the recipient's account number and the amount to be transferred.

### Usage
1. **Start the Program**: The program begins by welcoming the user to ABC Bank and prompting for a four-digit PIN.
2. **Authenticate**: The user enters their PIN. If incorrect, they have three more attempts before the program exits.
3. **Select Transaction**: Once authenticated, the user can choose from the following options:
   - Check Balance
   - Withdrawal
   - Deposit
   - Transfer
4. **Perform Transactions**: Based on the selected option, the user can perform the transaction, and the program will display the updated balance or transaction status.
5. **Continue or Exit**: After completing a transaction, the user is prompted to perform another transaction or exit the program.

### Code Breakdown
- **Global Variables**: 
  - `float balance = 10000.00;` - Represents the initial balance.
- **Functions**:
  - `int authenticate(int pin)`: Validates the entered PIN against a hardcoded correct PIN.
  - `float requestAmount()`: Prompts the user to enter an amount for transactions.
  - `void deposit()`: Adds the entered amount to the current balance.
  - `void withDraw(float amount)`: Deducts the entered amount from the balance if sufficient funds are available.
  - `void transfer()`: Handles the transfer of funds to another account by withdrawing the amount from the current balance.
- **Main Function**:
  - Handles the program's flow, including PIN authentication, displaying the menu, performing transactions, and handling retries.

### How to Run
1. **Compile the Program**: Use a C compiler like `gcc` to compile the program.
   ```sh
   gcc -o atm_simulation atm_simulation.c
   ```
2. **Run the Program**: Execute the compiled program.
   ```sh
   ./atm_simulation
   ```

### Future Improvements
- **Enhance Security**: Implement a more secure PIN storage and verification method.
- **Add More Features**: Include options for viewing transaction history and changing the PIN.
- **User Interface**: Improve the user interface for better user experience.

### Author
@Jsackitey1
