#include <stdio.h>   // Includes the standard input/output library for printf and scanf
#include <stdlib.h>  // Includes the standard library for general functions
#include <string.h>  // Includes the string library to use the strcmp function

// Function to verify credentials; returns 1 for success, 0 for failure
int user_access(char u[], char pass[]){
    // Compares username with "admin" and password with "admin"
    if (strcmp(u, "admin") == 0 && strcmp(pass, "admin") == 0){
        printf("welcome Admin !\n\n"); // Prints a welcome message with spacing
        return 1;                      // Returns 1 meaning access is granted
    } else { 
        printf("Access Denied\n");     // Prints an error message if credentials fail
        return 0;                      // Returns 0 meaning access is denied
    }
}

// Function to display the root administration dashboard menu
void admin_menu() {
    printf("============================\n"); // Prints the top border of the menu
    printf("=== ROOT ADMIN DASHBOARD ===\n"); // Prints the title of the dashboard
    printf("============================\n"); // Prints the bottom border of the title
    printf("1. see connected user\n");         // Prints choice 1
    printf("2. see server logs\n");           // Prints choice 2
    printf("3. ban ip adress\n");            // Prints choice 3
    printf("4. server status and exit\n");    // Prints choice 4 and exit option
    printf("Your choice : ");                 // Prompts the user to enter their choice
}
	
// Function to display the list of active users
void connected_user(){
    printf("\n--- LIST OF CONNECTED USER ---\n"); // Prints the section header
    printf("User1, User2, User3\n\n");             // Prints dummy connected users with spacing
}
	
// Function to simulate banning an IP address
void ban_ip(){
    char ip[50]; // Declares a character array (string) to store the IP address
    printf("\nPlease put an IP adress : "); // Asks the user to type an IP
    scanf("%s", ip);                       // Reads the string entered by the user and stores it in 'ip'
    
    printf("[*] Connected to the DATABASE...\n"); // Simulates a database connection message
    printf("Execution of the command...\n");       // Simulates command execution text
    printf("The IP adress (%s) is banned.\n\n", ip); // Prints the confirmation, inserting the 'ip' variable
}

// Function to display the current server status
void server_status(){
    printf("\nSERVER STATUS : OK.\n\n"); // Prints that the server status is fine with spacing
}

// Main execution function of the C program
int main() {
    char user[50];     // Declares a string variable to store the username input
    char password[50]; // Declares a string variable to store the password input
    int choice = 0;    // Declares an integer variable to store the menu choice, initialized to 0
    
    printf("user : ");      // Prompts the user for their username
    scanf("%s", user);      // Reads the input string and stores it in 'user'
    printf("password : ");  // Prompts the user for their password
    scanf("%s", password);  // Reads the input string and stores it in 'password'
    
    // Calls user_access; if it returns 0, the credentials were wrong
    if (user_access(user, password) == 0) {
        return 0; // Termianates the program immediately, preventing access to the menu
    }
    
    // Keeps running the menu loop as long as the user does not choose option 4
    while (choice != 4){
        admin_menu();         // Calls the function to print the admin menu options
        scanf("%d", &choice); // Reads the integer entered by the user and stores it in 'choice'
        
        // Checks the value of 'choice' and executes the corresponding block
        switch (choice) {
            case 1:                 // If the user typed 1
                connected_user();   // Calls the function to see connected users
                break;              // Exits the switch block
            case 2:                 // If the user typed 2
                printf("\nIn maintenance...\n\n"); // Prints a temporary maintenance message
                break;              // Exits the switch block
            case 3:                 // If the user typed 3
                ban_ip();           // Calls the function to ban an IP address
                break;              // Exits the switch block
            case 4:                 // If the user typed 4
                server_status();    // Calls the function to show server status
                break;              // Exits the switch block
            default:                // If the user typed any other number
                printf("\nInvalid choice !\n\n"); // Prints an error message for bad input
                break;              // Exits the switch block
        }
    }

    return 0; // Returns 0 to the operating system, signaling successful program termination
}
