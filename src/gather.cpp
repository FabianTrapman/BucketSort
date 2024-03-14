#include "include/gather.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

Gather::Gather() {
    // Default constructor
}

Gather::Gather(vector<int> vec_main, int size) : vec_main(vec_main), size(size) {
    // Parameterized constructor
}

Gather::~Gather() {
    // Destructor code
}

vector<int> Gather::getVector() {
    return vec_main;
}

void Gather::clearList() {
    vec_main.clear();
}


void Gather::generateRandomList(int length, int maxDigits) {
    srand(time(0));

    for (int i = 0; i < length; ++i) {
        int randomNumber = 0;

        for (int j = 0; j < maxDigits; ++j) {
            randomNumber = randomNumber * 10 + (rand() % 10);
        }
        vec_main.push_back(randomNumber);
    }
}

void Gather::setSize(int num) {
    size = num;
}

void Gather::addNumber(int num) {
    vec_main.push_back(num);
}

void Gather::addList(const vector<int>& lijstje) {
    vec_main.insert(vec_main.end(), lijstje.begin(), lijstje.end());

}

void Gather::setList(const vector<int>& lijstje) {
    vec_main = lijstje;
}
