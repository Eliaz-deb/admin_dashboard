# 🖥️ Admin Dashboard CLI

A command-line interface (CLI) administration dashboard prototype written in **C**. This project simulates a secure portal for managing connected users, checking server status, and executing administrative commands.

## 🎯 Features
- 🔐 **Authentication System**: Restricted access requiring a specific username and password.
- 👥 **User Management**: Display of mock active users currently connected to the system.
- 🚫 **Security Simulation**: Module to simulate database connections and ban specific IP addresses.
- 📊 **Server Status**: Automated system health check before safely exiting the program.

## 🛠️ Technologies Used
- **Language**: C (C11)
- **Standard Libraries**: `stdio.h`, `stdlib.h`, `string.h`

## 🚀 Installation & Setup

To compile and run this project locally, you will need a C compiler such as `gcc`.

### 1. Clone the repository
```bash
git clone https://github.com/Eliaz-deb/admin_dashboard/
cd admin_dashboard
```

### 2. Compilation
Compile the source code using the following terminal command:
```bash
gcc dashboard.c -o admin_dashboard
```

### 3. Execution
Run the compiled binary:
```bash
./admin_dashboard
```

## 🔐 Default Credentials
* **Username**: `admin`
* **Password**: `admin`

## 💡 Key Takeaways & Skills
This project helped me practice core programming and algorithmic fundamentals:
- Handling and comparing strings using the `string.h` library and `strcmp`.
- Managing control flow loops (`while`) and conditional blocks (`switch`).
- Modular programming by breaking down logic into clean, reusable functions.
- Leveraging AI assistance tools constructively to comment, document, and improve code flow.
