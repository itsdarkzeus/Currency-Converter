# Currency-Converter
This is an "Advanced" currency converter with inputted rates to convert to specific currencies (GHS, USD, GBP, EUR, CHF, CAD, AUD, JPY)
This README documentation provides an overview of the Currency Converter code. The code defines a simple currency conversion program that allows users to convert one currency to another using specified conversion rates.

## Table of Contents
1. [Introduction](#introduction)
2. [Features](#features)
3. [Usage](#usage)
4. [Code Structure](#code-structure)
5. [Example](#example)
6. [Contributing](#contributing)
7. [License](#license)

## 1. Introduction <a name="introduction"></a>
The Currency Converter is a C++ program that enables users to convert between different currencies based on predefined conversion rates. It consists of two classes, `Currency` and `CurrencyConverter`, which provide the necessary functionality to handle currency conversions.

## 2. Features <a name="features"></a>
- **Adding Currencies**: Users can add currencies with their respective conversion rates to the converter.
- **Converting Currencies**: Users can convert an amount from one currency to another using specified conversion rates.
- **Printing Supported Currencies**: Users can view a list of supported currencies.

## 3. Usage <a name="usage"></a>
Follow these steps to use the Currency Converter:

1. Instantiate a `CurrencyConverter` object.
2. Add a base currency with a conversion rate of 1 (e.g., GHS in the provided example).
3. Add other currencies and their conversion rates relative to the base currency.
4. Enter the amount you want to convert, the currency to convert from, and the currency to convert to.
5. The program will calculate and display the converted amount or inform you if the currency is not supported.

## 4. Code Structure <a name="code-structure"></a>
The code consists of two classes:

- `Currency` class: Represents a currency with a name and a conversion rate.
- `CurrencyConverter` class: Manages the currencies and provides methods for adding, converting, and printing supported currencies.

## 5. Example <a name="example"></a>
In the provided example, the main function demonstrates how to use the Currency Converter by adding several currencies and performing a conversion based on user input.

## 6. Contributing <a name="contributing"></a>
If you want to contribute to this project, feel free to fork the repository, make improvements, and submit a pull request. We welcome contributions that enhance the functionality, usability, or documentation.

## 7. License <a name="license"></a>
This code is provided under an open-source license. You can find the license information in the project repository.

Feel free to use and modify the code for your needs. If you have any questions or encounter issues, please refer to the documentation or contact the maintainers.

Happy currency converting! 🌐💱
