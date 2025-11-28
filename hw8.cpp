#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 0; i < 6 ; i++){
        std::cout << "now value i is : " << i << std::endl;
        sum = sum + i;
    }
    std::cout << " now sumasion is :" << sum;

    return 0;
}