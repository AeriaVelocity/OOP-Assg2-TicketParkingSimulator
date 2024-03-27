/* strings.h - header file for Strings class */

#ifndef STRINGS_H
#define STRINGS_H

#include <string>

/*
 * Used to encapsulate functions that return reusable strings for printing purposes.
 *
 * Methods:
 * - `welcomeMessage(void)`: Prints the welcome message.
 * - `horizontalRule(int length, char symbol)`: Prints a horizontal rule of a certain length and symbol.
 */
class Strings {
    public:
        /*
         * Prints the welcome message.
         * 
         * @return the welcome message as `std::string`
         */
        static std::string welcomeMessage();

        /*
         * Generates a horizontal rule of a certain length and symbol.
         *
         * @param length the length of the rule, `int`
         * @param symbol the symbol to use, `char`
         * 
         * @return the horizontal rule as `std::string`
         */
        static std::string horizontalRule(int length, char symbol = '-');
};

#endif
