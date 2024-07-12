# Task: Implement the Complex Class

## Member Variables
- `real`: Represents the real part of the complex number.
- `img`: Represents the imaginary part of the complex number.

## Constructors
- **Parameterized Constructor**: Initialize the member variables with provided values.

## Setters and Getters
- **Setters**:
  - `set_real(value)`: Sets the real part of the complex number.
  - `set_img(value)`: Sets the imaginary part of the complex number.
- **Getters**:
  - `get_real()`: Returns the real part of the complex number.
  - `get_img()`: Returns the imaginary part of the complex number.

## Member Functions
- `AddComplex(complex_number)`: Adds the current complex number with another complex number.
- `SubComplex(complex_number)`: Subtracts another complex number from the current complex number.
- `PrintComplex()`: Prints the complex number in the format "a + bi".


# Example usage: 

    c1 = Complex(3, 4) 

    c2 = Complex(1, 2) 

    c3 = c1.AddComplex(c2) 

    c3.PrintComplex()   # Output: 4 + 6i


# Knowledge requirements
    - Classes and Objects
    - Encapsulation
    - Constructor Types (Default, Parameterized, Copy)