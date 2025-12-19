#include <iostream>

int main()
{
    int score[3]={95,68,42};
    int temp;
    
    temp = score[2]//42
    score[0] = temp;
    for (int i=0;i<3;i++){
        std::cout << score[i] << " ";
    }//score[1]
    return 0;
}