#include <iostream>
u
int main()
{
    string name[5] = {
        "Amy",
        "Ben",
        "Cindy",
        "David",
        "Eva"
    };

    int score[5][3] = {
        {80, 90, 85},
        {70, 75, 78},
        {88, 92, 95},
        {60, 65, 70},
        {90, 93, 89}
    };
     for (int i = 0; i < 5; i++) {
        cout << name[i] << ": ";
        for (int j = 0; j < 3; j++) {
            cout << score[i][j] << " ";
       
        }
        
    std::cout<<"Hello World";

    return 0;
}