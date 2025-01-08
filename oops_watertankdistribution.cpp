#include <iostream>
#include <chrono>

using namespace std;

class TankPlacement {
private:
    static const int EMPTY = 0;
    static const int HOUSE = 1;
    static const int TANK = 10;
    static const int COVERED = 100;
   
    int* houseArray;
    int size;
    int tankCount;
    int unservedHouseCount;

public:
    // Constructor to initialize house array
    TankPlacement(char inputHouses[], int houseSize) : size(houseSize), tankCount(0), unservedHouseCount(0) {
        houseArray = new int[size];
        for (int i = 0; i < size; i++) {
            houseArray[i] = (inputHouses[i] == 's') ? HOUSE : EMPTY;
        }
    }

    // Destructor to free memory
    ~TankPlacement() {
        delete[] houseArray;
    }

    // Place tanks based on original logic



    void placeTanks() {
        int i = 1;
        // First pass: middle houses
        while (i < size - 1) {
            if (houseArray[i] == EMPTY && houseArray[i - 1] == HOUSE && houseArray[i + 1] == HOUSE) {
                placeTank(i);
                i += 2; // Skip the next index since it is covered
            } else {
                i++;
            }
        }

        // Second pass: edge houses or cases where one side is covered
        i = 0;
        while (i < size) {
            if (houseArray[i] == EMPTY) {
                if (i < size - 1 && houseArray[i + 1] == HOUSE) {
                    placeTank(i);
                    i += 2; // Skip next as it will be covered
                } else if (i > 0 && houseArray[i - 1] == HOUSE) {
                    placeTank(i);
                    i += 2; // Skip next as it will be covered
                } else {
                    i++;
                }
            } else {
                i++;
            }
        }

        // Calculate unserved houses
        calculateUnservedHouses();
    }

    // Display results
    void displayResults() const {
        cout << "Final tank placement: ";
        for (int i = 0; i < size; i++) {
            cout << houseArray[i] << '\t';
        }
        cout << endl;

        cout << "Optimal number of tanks needed: " << tankCount << endl;
        cout << "Number of unserved houses: " << unservedHouseCount << endl;
    }

    // Measure execution time and run placement
    static void measureExecutionTime(TankPlacement& obj) {
        auto start = chrono::high_resolution_clock::now();

        obj.placeTanks();
        obj.displayResults();

        auto end = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(end - start).count();
        cout << "Time taken: " << (duration / 1000.0) << " milliseconds" << endl;
    }

private:
    // Place tank and mark neighbors as covered
    void placeTank(int index) {
        if (index > 0) {
            houseArray[index - 1] = COVERED;
        }
        if (index < size - 1) {
            houseArray[index + 1] = COVERED;
        }
        houseArray[index] = TANK;
        tankCount++;
    }

    // Calculate the number of unserved houses
    void calculateUnservedHouses() {
        unservedHouseCount = 0;
        for (int i = 0; i < size; i++) {
            if (houseArray[i] == HOUSE) {
                unservedHouseCount++;
            }
        }
    }
};

int main() {
    char houses[] = { 's', 't', 't', 's', 't', 't', 's' };
    int size = sizeof(houses) / sizeof(houses[0]);

    // Create an object of TankPlacement class
    TankPlacement tankPlacement(houses, size);

    // Measure execution time and display results
    TankPlacement::measureExecutionTime(tankPlacement);

    return 0;
}