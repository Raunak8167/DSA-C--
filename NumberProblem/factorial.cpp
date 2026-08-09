//Write user input C++ program using for loop statement to calculate the factorial of a number and display the result. Repeat it with if-goto loop statement.
#include <iostream>
int main()
{
    int n, i = 1;
    long long fact = 1;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (n < 0)
    {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    }
    else
    {
    loop:
        if (i <= n)
        {
            fact = fact * i;
            i++;
            goto loop;
        }
        std::cout << "Factorial of " << n << " = " << fact << std::endl;
    }
    return 0;
}