#include <iostream>
using namespace std;

int main() {
    int numBottles, numExchange;
    cout << "Enter the number of initial full water bottles: ";
    cin >> numBottles;
    cout << "Enter the number of empty bottles required for exchange: ";
    cin >> numExchange;

    int totalBottlesDrunk = 0; // To keep track of how many bottles we drank
    int emptyBottles = 0;      // To keep track of empty bottles

    // Use a for loop to keep exchanging bottles while possible
    for (; numBottles > 0; ) {
        totalBottlesDrunk += numBottles;  // Drink all full bottles
        emptyBottles += numBottles;       // Add to the empty bottles
        numBottles = emptyBottles / numExchange; // Exchange empty bottles for full ones
        emptyBottles = emptyBottles % numExchange; // Remaining empty bottles
    }

    cout << "Maximum number of water bottles you can drink: " << totalBottlesDrunk << endl;
    return 0;
}

