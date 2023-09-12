#include "Ejercicio02.h"
#include <iostream>
#include <vector>
//Comienza ejericio 2//


int Ejercicio02::rob(int houses[], int n)
{
    return 0;
}
//Delimitar el tamaño de las casas y crear un vector//
int rob(std::vector<int>& houses) {
    int n = houses.size();

    if (n == 0) return 0;
    if (n == 1) return houses[0];

    
    std::vector<int> dp(n, 0);

    dp[0] = houses[0];
    dp[1] = std::max(houses[0], houses[1]);


    for (int i = 2; i < n; i++) {
        dp[i] = std::max(dp[i - 1], dp[i - 2] + houses[i]);
    }

    return dp[n - 1];
}

int main() {
    std::vector<int> houses = {};
    int resultado = rob(houses);
    std::cout << "La Ccantidad máxima que puede robar sin alertar a la policia es de : " << resultado << std::endl;
    return 0;
}
