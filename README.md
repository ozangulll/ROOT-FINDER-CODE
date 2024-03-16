# Quadratic Equation Root Finder

This program calculates the roots of a quadratic equation of the form `ax^2 + bx + c = 0`.

## How to Use

1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. Enter the coefficients of the quadratic equation when prompted.

## Instructions

1. The program prompts you to enter the values of `a`, `b`, and `c` for the quadratic equation `ax^2 + bx + c = 0`.
2. After entering the coefficients, the program calculates the roots of the equation.
3. If the equation has real roots, it displays the roots.
4. If the equation has complex roots, it notifies the user that there are no real roots.
5. After displaying the roots or the notification, the program asks if you want to try again.
6. If you choose to try again, you can input new coefficients.
7. If you choose not to try again, the program exits.

## Limitations

- The program assumes the input coefficients (`a`, `b`, and `c`) are integers.
- It utilizes the `sqrt` function from the `math.h` library, so it only works with real numbers.
- Complex roots are not supported in this version.

## Requirements

- C++ compiler
- Standard C++ library
- Math library (for square root calculation)

## Example Usage

```bash
$ ./quadratic_equation_root_finder
Please enter the values of a/b/c (ax^2+bx+c): 1 -3 2
1st root of this equation is 2
2st root of this equation is 1
Would you want to try again? Y/N: Y
Please enter the values of a/b/c (ax^2+bx+c): 1 2 3
There is no root in this equation
Would you want to try again? Y/N: N
