#include <iostream>

int main() {
    int n1 = 0;
    int n2 = 0;
    int ans = 0;
    int choose = 0;
    
    std::cout << "Calculator" << std::endl;
    std::cout << "Enter First Number :\n";
    std::cin >> n1;
    std::cout << "Enter First Number :\n"; 
    std::cin >> n2;

    std::cout << "1. Addition "<< std::endl;
    std::cout << "2. Subtraction "<< std::endl;
    std::cout << "3. Multiply "<< std::endl;
    std::cout << "4. Division "<< std::endl;

    std::cin >> choose;
    
    if (choose == 1) {
        ans = n1 + n2;
        std::cout << "Addition ans :" << ans << std::endl;  
    } else if (choose == 2) {
        ans = n1 - n2;
        std::cout << "Subtraction ans :" << ans << std::endl;
    } else if (choose == 3) {
        ans = n1 * n2;
        std::cout << "Multiply ans :" << ans << std::endl;
    } else if (choose == 4) {
        ans = n1 / n2;
        double ans = static_cast<double>(n1) / n2;
        std::cout << "Division ans :" << ans << std::endl;
    }

    return 0;
}
