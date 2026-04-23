#include "wallet.h"
#include <iostream>

int main() {
    Wallet wallet;

    // Test insertCurrency
    std::cout << "Inserting 100 BTC..." << std::endl;
    wallet.insertCurrency("BTC", 100);
    std::cout << "Wallet: " << wallet.toString() << std::endl;

    std::cout << "Inserting 50 BTC..." << std::endl;
    wallet.insertCurrency("BTC", 50);
    std::cout << "Wallet: " << wallet.toString() << std::endl;

    std::cout << "Inserting 200 ETH..." << std::endl;
    wallet.insertCurrency("ETH", 200);
    std::cout << "Wallet: " << wallet.toString() << std::endl;

    // Test containsCurrency
    std::cout << "\nChecking if wallet has 120 BTC: ";
    std::cout << (wallet.containsCurrency("BTC", 120) ? "Yes" : "No") << std::endl;

    std::cout << "Checking if wallet has 500 ETH: ";
    std::cout << (wallet.containsCurrency("ETH", 500) ? "Yes" : "No") << std::endl;

    // Test removeCurrency
    std::cout << "\nRemoving 70 BTC..." << std::endl;
    wallet.removeCurrency("BTC", 70);
    std::cout << "Wallet: " << wallet.toString() << std::endl;

    std::cout << "Trying to remove 500 ETH..." << std::endl;
    bool result = wallet.removeCurrency("ETH", 500);
    std::cout << "Success? " << (result ? "Yes" : "No") << std::endl;
    std::cout << "Wallet: " << wallet.toString() << std::endl;

    return 0;
}