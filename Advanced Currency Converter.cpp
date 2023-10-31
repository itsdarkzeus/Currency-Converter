#include <iostream>
#include <string>
#include <vector>

class Currency {
private:
    std::string currencyName;
    double conversionRate;

public:
    Currency(std::string currencyName, double conversionRate)
        : currencyName(currencyName), conversionRate(conversionRate) {}

    std::string getCurrencyName() const {
        return currencyName;
    }

    double getConversionRate() const {
        return conversionRate;
    }

    void setConversionRate(double conversionRate) {
        this->conversionRate = conversionRate;
    }
};

class CurrencyConverter {
private:
    std::vector<Currency> currencies;

public:
    void addCurrency(const Currency &currency) {
        currencies.push_back(currency);
    }

    double convert(const std::string &from, const std::string &to, double amount) {
        double fromRate = 0.0;
        double toRate = 0.0;

        for (size_t i = 0; i < currencies.size(); ++i) {
            if (currencies[i].getCurrencyName() == from) {
                fromRate = currencies[i].getConversionRate();
            }
            if (currencies[i].getCurrencyName() == to) {
                toRate = currencies[i].getConversionRate();
            }
        }

        if (fromRate > 0.0 && toRate > 0.0) {
            double conversionAmount = amount * fromRate / toRate;
            return conversionAmount;
        } else {
            return -1; // Handle currency not found
        }
    }

    void printSupportedCurrencies() {
        std::cout << "Supported Currencies:" << std::endl;
        for (size_t i = 0; i < currencies.size(); ++i) {
            std::cout << currencies[i].getCurrencyName() << std::endl;
        }
    }
};

int main() {
    CurrencyConverter converter;

    Currency ghs("GHS", 1.0); // GHS is now the main currency
    converter.addCurrency(ghs);

    // Add the conversion rates for other currencies relative to GHS
    converter.addCurrency(Currency("USD", 12.0)); // 1 USD = 12 GHS
    converter.addCurrency(Currency("GBP", 14.4)); // 1 GBP = 14.4 GHS
    converter.addCurrency(Currency("EUR", 12.56)); // 1 EUR = 12.56 GHS
    converter.addCurrency(Currency("CHF", 13.17)); // 1 Swiss Franc = 13.17 GHS
    converter.addCurrency(Currency("CAD", 8.56)); // 1 Canadian Dollar = 8.56 GHS
    converter.addCurrency(Currency("AUD", 7.52)); // 1 Australian Dollar = 7.52 GHS
    converter.addCurrency(Currency("JPY", 0.079)); // 1 Japanese Yen = 0.079 GHS

    double amount;
    std::cout << "Enter the amount to convert: ";
    std::cin >> amount;

    std::string fromCurrency, toCurrency;
    std::cout << "Enter the currency to convert from: ";
    std::cin >> fromCurrency;
    std::cout << "Enter the currency to convert to: ";
    std::cin >> toCurrency;

    double convertedAmount = converter.convert(fromCurrency, toCurrency, amount);

    if (convertedAmount >= 0) {
        std::cout << amount << " " << fromCurrency << " = " << convertedAmount << " " << toCurrency << std::endl;
    } else {
        std::cout << "Currency not found. Please check the currency codes." << std::endl;
        converter.printSupportedCurrencies();
    }

    return 0;
}

