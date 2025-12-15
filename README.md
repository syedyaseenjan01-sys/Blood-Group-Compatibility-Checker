# 🩸 Blood Group Compatibility Checker

## Table of Contents
* [Introduction](#introduction)
* [Features](#features)
* [Compatibility](#compatibility)
* [Getting Started](#getting-started)
    * [Prerequisites](#prerequisites)
    * [Installation](#installation)
    * [Usage](#usage)
* [Code Structure](#code-structure)
* [Contributing](#contributing)
* [License](#license)

---

## Introduction

This is a simple console application written in C++ that helps users determine the possible donation and reception compatibility based on a given ABO/Rh blood group. It is designed to be a quick, educational tool for understanding the basic rules of red blood cell transfusions.

## Features

* **Input Validation:** Accepts standard blood groups (O-, O+, A-, A+, B-, B+, AB-, AB+).
* **Donation Information:** Displays a list of all blood groups the entered type can donate to (Universal Donor logic).
* **Reception Information:** Displays a list of all blood groups the entered type can safely receive blood from (Universal Recipient logic).

## Compatibility

The compatibility rules used in this program are based on the standard understanding of **red blood cell** (RBC) donation.

| Blood Group | Can Donate To | Can Receive From |
| :---: | :---: | :---: |
| **O-** | Universal Donor | O- (Only) |
| **O+** | O+, A+, B+, AB+ | O-, O+ |
| **A-** | A-, A+, AB-, AB+ | O-, A- |
| **A+** | A+, AB+ | O-, O+, A-, A+ |
| **B-** | B-, B+, AB-, AB+ | O-, B- |
| **B+** | B+, AB+ | O-, O+, B-, B+ |
| **AB-** | AB-, AB+ | O-, A-, B-, AB- |
| **AB+** | AB+ (Only) | Universal Recipient |

***Note:** This program focuses only on RBC compatibility and does not account for specific component (e.g., plasma, platelets) donation rules, which follow different compatibility logic.*

---

## Getting Started

Follow these instructions to get a copy of the project up and running on your local machine.

### Prerequisites

You will need a C++ compiler installed on your system to compile and run the source code.

* **GCC/G++** (Recommended for Linux/macOS)
* **MinGW** (Recommended for Windows)

### Installation

1.  **Save the source code:** Save the provided C++ code as a file named `blood_checker.cpp`.

2.  **Compile the code:** Open your terminal or command prompt in the directory where you saved the file and compile using your C++ compiler (e.g., `g++`):
    ```bash
    g++ blood_checker.cpp -o blood_checker
    ```

### Usage

1.  **Run the compiled executable:**
    ```bash
    ./blood_checker
    # or on Windows:
    blood_checker.exe
    ```

2.  **Follow the prompt:**
    The program will ask you to enter the blood group:
    ```
    Enter your blood group(O-,O+,A-,A+,B-,B+,AB-,AB+):
    ```

3.  **Enter a valid blood group** (e.g., `A+` or `O-`) and press Enter to see the compatibility results.

---

## Code Structure

The entire application is self-contained in a single file:

* `blood_checker.cpp`: The main source file containing the logic for user input and conditional compatibility checking using `if-else if` statements.

## Contributing

If you notice any inaccuracies in the compatibility logic or have suggestions for code improvements, please feel free to report an issue or contribute to the project.

## License

This project is open-source and released under an appropriate license (e.g., MIT, if you choose to include a `LICENSE.md` file).
