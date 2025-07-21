# BaseConverter

BaseConverter is a lightweight and simple C++ console application that converts **characters or numbers** to their equivalent representations in:
-  Decimal (Base 10)
-  Binary (Base 2)
-  Hexadecimal (Base 16)

---

## Features

- Supports both numbers and single characters as input
- Displays decimal, binary (16-bit), and uppercase hexadecimal formats
- Clean and beginner-friendly C++ code using `bitset`, `iomanip`, and `string`
- Cross-platform console support

---

## Example Usage

```bash

Enter a character or a number: A

Decimal: 65
Hexadecimal: 41
Binary: 0000000001000001
```

---

## How It Works

1. The user enters an input (either a number or a single character)
2. The program checks the input type:
   - If it’s a number → it converts directly
   - If it’s a character → it uses its ASCII code
3. Displays the converted values in all three formats

---

## Technologies Used

- C++
- Standard Libraries:
  - `<iostream>`
  - `<bitset>`
  - `<iomanip>`
  - `<string>`

---

## 📂 File Structure

```bash

├── BaseConverterPlus.cpp        # The source code
├── README.md       # This file

```

---

Made by [https://github.com/Farnaztr](Farnaz) ❤
