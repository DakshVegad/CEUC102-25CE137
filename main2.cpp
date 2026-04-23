#include <iostream>

int main()
{
    while (true)
    {
        // Print menu
        std::cout << "1: Print help" << std::endl;
        std::cout << "2: Print exchange stats" << std::endl;
        std::cout << "3: Place an ask" << std::endl;
        std::cout << "4: Place a bid" << std::endl;
        std::cout << "5: Print wallet" << std::endl;
        std::cout << "6: Continue" << std::endl;

        // Read user input
        int userOption;
        std::cout << "Type in 1-6: ";
        std::cin >> userOption;

        // Respond to user input
        if (userOption == 1)
        {
            std::cout << "Help - choose options from the menu and follow instructions." << std::endl;
        }
        else if (userOption == 2)
        {
            std::cout << "Exchange stats: (placeholder output)" << std::endl;
        }
        else if (userOption == 3)
        {
            std::cout << "Place an ask: (placeholder action)" << std::endl;
        }
        else if (userOption == 4)
        {
            std::cout << "Place a bid: (placeholder action)" << std::endl;
        }
        else if (userOption == 5)
        {
            std::cout << "Wallet: (placeholder output)" << std::endl;
        }
        else if (userOption == 6)
        {
            std::cout << "Continuing..." << std::endl;
        }
        else
        {
            std::cout << "Invalid choice. Please enter a number between 1 and 6." << std::endl;
        }

        std::cout << std::endl; // spacing
    }

    return 0;
}