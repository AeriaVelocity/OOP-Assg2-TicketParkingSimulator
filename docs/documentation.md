# Ticket Parking Simulator Documentation

## Table of Contents

- [Ticket Parking Simulator Documentation](#ticket-parking-simulator-documentation)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Building and Running](#building-and-running)
  - [Usage](#usage)
  - [License](#license)

## Introduction

This is a simulation of a ticketing system, which calculates a fare based on
how long a car or other vehicle has been parked, and how much was actually
purchased, and prints a ticket.

## Building and Running

> [!warning]
> On Windows, it's highly recommended you use MSYS2, as this will allow you
> to use `make` and access a *nix environment which the simulator was built
> in mind for.

This project uses a Makefile.

To compile the project, run `make`. A binary will be created in the `bin`
directory. If you prefer to run straight away, run `make buildrun`.

## Usage

When running the program, you'll be asked to input your name and badge number.

```plain
$ ./bin/ticket_parking_simulator
Enter your name: John
Enter your badge number: 1234ABC
```

You'll then be shown the welcome message and be asked to enter car information.

```plain
Welcome to Parking Ticket Simulator
An exercise in humility by Arsalan Kazmi
----------------------------------------
Welcome officer John
The system is ready to use.
----------------------------------------
```

```plain
Please enter car information, separated by spaces.
[Make] [Model] [Colour] [Licence Number]
Toyota Celery Grellow 12421323
Car Make: Toyota
Car Model: Celery
Car Colour: Grellow
Licence Number: 12421323
```

The program will then ask how many minutes of parking the driver purchased, and
how long the car has actually been parked.

```plain
How many minutes of parking were purchased?
20
How many minutes has the vehicle been parked?
50
```

Finally, the program will "print" out a ticket with car information and the
base, additional and total fine.

```plain
------------------------------
TICKET ISSUED!
Car Information:
    Car Make: Toyota
    Car Model: Celery
    Car Colour: Grellow
    Licence Number: 12421323
Meter Information:
    Purchased Duration: 20 minutes
    Elapsed Duration: 50 minutes
    Illegal Parking Duration: 30 minutes
Ticket Information:
    Minutes In Violation: 30
    Total Fine: £70
------------------------------
Thank you for using the Ticket Parking Simulator!
```

The program will then exit.

## License

Ticket Parking Simulator is licensed under the GNU General Public License,
version 3. See the LICENSE file or [the GNU GPLv3](https://www.gnu.org/licenses/gpl-3.0)
for details.
