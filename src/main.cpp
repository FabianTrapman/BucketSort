#include "bucket.cpp"
#include "gather.cpp"

#include <random>    // random_device, mt19937, mersenne_engine
#include <algorithm> // generate
#include <chrono>    // Timing functions
#include <iostream>  // Printing results

using namespace std::chrono;
using namespace std;

vector<int> findNegativeNumbers(const std::vector<int>& vec) {
    // Function to find negative numbers in a vector
    std::vector<int> negativeNumbers;

    for (const int& num : vec) {
        if (num < 0) {
            negativeNumbers.push_back(num);
        }
    }

    return negativeNumbers;
}

vector<int> turnNegativeToPositive(std::vector<int>& vec) {
    // Loop through the list and convert negative numbers to positive
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] < 0) {
            vec[i] = -vec[i];
        }
    }
    return vec;
}

void sort(std::vector<int>& vec) { 
    // Function to perform the sorting algorithm

    vector<int> negative_numbers = findNegativeNumbers(vec);
    vec = turnNegativeToPositive(vec);

    Gather lijst;
    Bucket tweeD_lijst;

    int digit_length = to_string(vec[1]).size();
    int list_length = vec.size();
    lijst.setSize(list_length);
    
    lijst.setList(vec);

    // Iterate through digits to perform sorting
    for (size_t i = digit_length; i > 0; --i) {
        for (size_t y = 0; y < list_length; ++y) {
            // Check the digit at position i-1 and add to the appropriate bucket
            // (e.g., add to bucket for '9' if the digit is '9')

            if (to_string(lijst.getVector()[y])[i-1] == '9') {
                tweeD_lijst.addNum_nines(lijst.getVector()[y]);
            }
            else if (to_string(lijst.getVector()[y])[i-1] == '8') {
                tweeD_lijst.addNum_eights(lijst.getVector()[y]);
            }
            else if (to_string(lijst.getVector()[y])[i-1] == '7') {
                tweeD_lijst.addNum_sevens(lijst.getVector()[y]);
            }
            else if (to_string(lijst.getVector()[y])[i-1] == '6') {
                tweeD_lijst.addNum_sixes(lijst.getVector()[y]);
            }
            else if (to_string(lijst.getVector()[y])[i-1] == '5') {
                tweeD_lijst.addNum_fives(lijst.getVector()[y]);
            }
            else if (to_string(lijst.getVector()[y])[i-1] == '4') {
                tweeD_lijst.addNum_fours(lijst.getVector()[y]);
            }
            else if (to_string(lijst.getVector()[y])[i-1] == '3') {
                tweeD_lijst.addNum_threes(lijst.getVector()[y]);
            }
            else if (to_string(lijst.getVector()[y])[i-1] == '2') {
                tweeD_lijst.addNum_twos(lijst.getVector()[y]);
            }
            else if (to_string(lijst.getVector()[y])[i-1] == '1') {
                tweeD_lijst.addNum_ones(lijst.getVector()[y]);
            }
            else if (to_string(lijst.getVector()[y])[i-1] == '0') {
                tweeD_lijst.addNum_zeros(lijst.getVector()[y]);
            };

        };

        tweeD_lijst.printVisualisation();
        lijst.clearList();

        // Add numbers from buckets back to the main list for the next iteration
        lijst.addList(tweeD_lijst.getZeros());
        lijst.addList(tweeD_lijst.getOnes());
        lijst.addList(tweeD_lijst.getTwos());
        lijst.addList(tweeD_lijst.getThrees());
        lijst.addList(tweeD_lijst.getFours());
        lijst.addList(tweeD_lijst.getFives());
        lijst.addList(tweeD_lijst.getSixes());
        lijst.addList(tweeD_lijst.getSevens());
        lijst.addList(tweeD_lijst.getEights());
        lijst.addList(tweeD_lijst.getNines());
        lijst.addList(tweeD_lijst.getNoDigit());
    
        tweeD_lijst.clearVector();
    }
    }
    


int main() {

    // Create a vector to store the generated numbers
    std::vector<int> ns;

    // Use a for loop to generate the list
    for (int i = 10; i <= 100; i += 1) {
        ns.push_back(i);
    }

    for (int n : ns) {
        // Generate a random vector to sort
        std::random_device rnd_device;
        std::mt19937 mersenne_engine {rnd_device()};
        std::uniform_int_distribution<int> dist {1, 1000};

        auto gen = [&dist, &mersenne_engine](){
                       return dist(mersenne_engine);
                   };

        std::vector<int> vec(n);

        generate(std::begin(vec), std::end(vec), gen);

        // Start timing
        steady_clock::time_point begin = steady_clock::now();

        // Do the thing!
        sort(vec);

        // Stop timing
        steady_clock::time_point end = steady_clock::now();

        // Calculate and print time
        int time_ms = duration_cast<microseconds>(end - begin).count();

        std::cout << n << ", " << time_ms << std::endl;
    }

    return 0;
}

// The commented out code below is a way to test the algorithm without the timing capabilities above.

// int main() {
    
//     vector<int> example = {248, 573, 127, 895, 412, 679, 921, 684, 154, 782, 309, 555, 800, 439, 201, 976, 742, -500};

//     sort(example);

//     return 0;
// }