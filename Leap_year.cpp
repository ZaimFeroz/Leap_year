#include <iostream>

int main() {
    int year = 0; // Variable to store the year entered by the user
    char choice; // Variable to store the user's choice to continue or not

    //Initial greeting message
    std::cout << "Hello,\n";
    std::cout << "This program will help you calculate if a year you input is a leap year or not.\n\n";
  
    do {  // Outer loop to repeat the process if the user wants to check another year
        do {  // Inner loop to ensure the user enters a valid 4-digit year
            std::cout << "Please enter a 4-digit year: "; // Prompt user for year
            std::cin >> year; // Get the year from user input

            // Check if the entered year is not a 4-digit number
            if (year < 1000 || year > 9999) {
                std::cout << "Invalid Entry, Please try again and input a 4-digit number.\n";
            }
        } while (year < 1000 || year > 9999); // Repeat until a valid year is entered

        // Check if the year is a leap year
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            std::cout << year << " is a leap year.\n";  // Output if the year is a leap year
        } else {
            std::cout << year << " is not a leap year.\n";  // Output if the year is not a leap year
        } 
        // Ask the user if they want to check another year
        std::cout << "Do you want to check another year? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Repeats the loop if the user enters 'y' or 'Y'


    // Farewell message before exiting the program
    std::cout << "Goodbye!\n";
}