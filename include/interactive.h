/* interactive.h - header file for Interactive class */

#ifndef INTERACTIVE_H
#define INTERACTIVE_H

#include <iostream>
#include <string>
#include <stdexcept>

/* 
 * Used to encapsulate functions that require user input, to differentiate them from functions that take params. 
 *
 * Methods:
 * - `getUserName(void)`: Returns an std::string containing the user's name.
 * - `getBadgeNumber(void)`: Returns an std::string containing the user's badge number.
 */
class Interactive {
    public:
        /*
         * Retrieves the user's name from the input and returns it as a string.
         *
         * @return the user's name as a string
         */
        static std::string getUserName();

        /*
         * Retrieves the badge number from the user via standard input.
         *
         * @return the badge number entered by the user
         */
        static std::string getBadgeNumber();
};

#endif
