#include "wallet.h"
#include <stdexcept>
#include <sstream>

// Insert currency
void Wallet::insertCurrency(std::string type, double amount) {
    if (amount < 0) {
        throw std::invalid_argument("Amount cannot be negative");
    }

    currencies[type] += amount;
}

// Remove currency
bool Wallet::removeCurrency(std::string type, double amount) {
    if (amount < 0) {
        throw std::invalid_argument("Amount cannot be negative");
    }

    if (!containsCurrency(type, amount)) {
        return false;  // Not enough currency
    }

    currencies[type] -= amount;
    return true;
}

// Check if wallet contains enough currency
bool Wallet::containsCurrency(std::string type, double amount) {
    if (currencies.find(type) == currencies.end()) {
        return false;
    }

    return currencies[type] >= amount;
}

// Convert wallet to string
std::string Wallet::toString() {
    std::stringstream ss;
    for (auto &pair : currencies) {
        ss << pair.first << ": " << pair.second << " ";
    }
    return ss.str();
}