# Ticket Office 1.0

A console program that asks the age, the weekday and the screening type. Then it calculates total price and prints receipt.
It's written in C++20 as part of my learning path.

## Features

- The program checks the entered data
- Rates can be simply changed
- The program prints receipt in the form of a table

## Example Output

```
Welcome to Ticket Office 1.0

Enter your age: 12
Enter the weekday: 2
Enter the screening type: e

    Receipt
-------------------------------
Screening type:         Evening
Price:           450 rub 00 kop
-------------------------------
Reason                 Discount
-------------------------------
Age                        -50%
Weekday                    -10%
-------------------------------
Total            202 rub 50 kop

Thanks for using Ticket Office!
```

## Build and run

- Use Visual Studio:
1. Open ```ticket-office.cpp``` in Visual Studio.
2. Press ```Ctrl+Shift+B``` to build and ```Ctrl+F5```.
- Or use Developer PowerShell
```
cl /nologo /EHsc /std:c++20 /W4 /utf-8 ticket-office.cpp
.\ticket-office.exe
```

## Author

Alexander Lipskiy