#include "include/bucket.hpp"
#include <iostream>


using namespace std;

Bucket::Bucket() {
    // Default constructor
}

Bucket::Bucket(const vector<int>& vec_zeros, const vector<int>& vec_ones, const vector<int>& vec_twos,
           const vector<int>& vec_threes, const vector<int>& vec_fours, const vector<int>& vec_fives,
           const vector<int>& vec_sixes, const vector<int>& vec_sevens, const vector<int>& vec_eights,
           const vector<int>& vec_nines) :
           vec_zeros(vec_zeros), vec_ones(vec_ones), vec_twos(vec_twos), vec_threes(vec_threes),
           vec_fours(vec_fours), vec_fives(vec_fives), vec_sixes(vec_sixes), vec_sevens(vec_sevens),
           vec_eights(vec_eights), vec_nines(vec_nines), vec_NoDigit(vec_NoDigit) {
    // Parameterized constructor
}

Bucket::~Bucket() {}

void printVector(const vector<int>& v) {
    for (int element : v) {
        std::cout << element << " ";
    }
    std::cout << endl;
}

void Bucket::printVisualisation() {
    printVector(vec_zeros);
    printVector(vec_ones);
    printVector(vec_twos);
    printVector(vec_threes);
    printVector(vec_fours);
    printVector(vec_fives);
    printVector(vec_sixes);
    printVector(vec_sevens);
    printVector(vec_eights);
    printVector(vec_nines);
    printVector(vec_NoDigit);
}

void Bucket::clearVector() {
    // Implement clearVector function
    // Clear all vectors in the Bucket
    vec_zeros.clear();
    vec_ones.clear();
    vec_twos.clear();
    vec_threes.clear();
    vec_fours.clear();
    vec_fives.clear();
    vec_sixes.clear();
    vec_sevens.clear();
    vec_eights.clear();
    vec_nines.clear();
    vec_NoDigit.clear();
}

void Bucket::addNum_zeros(int item) {
    vec_zeros.push_back(item);
}
void Bucket::addNum_ones(int item) {
    vec_ones.push_back(item);
}
void Bucket::addNum_twos(int item) {
    vec_twos.push_back(item);
}
void Bucket::addNum_threes(int item) {
    vec_threes.push_back(item);
}
void Bucket::addNum_fours(int item) {
    vec_fours.push_back(item);
}
void Bucket::addNum_fives(int item) {
    vec_fives.push_back(item);
}
void Bucket::addNum_sixes(int item) {
    vec_sixes.push_back(item);
}
void Bucket::addNum_sevens(int item) {
    vec_sevens.push_back(item);
}
void Bucket::addNum_eights(int item) {
    vec_eights.push_back(item);
}
void Bucket::addNum_nines(int item) {
    vec_nines.push_back(item);
}
void Bucket::addNum_NoDigit(int item) {
    vec_NoDigit.push_back(item);
}

vector<int> Bucket::getZeros() {
    return vec_zeros;
}
vector<int> Bucket::getOnes() {
    return vec_ones;
}
vector<int> Bucket::getTwos() {
    return vec_twos;
}
vector<int> Bucket::getThrees() {
    return vec_threes;
}
vector<int> Bucket::getFours() {
    return vec_fours;
}
vector<int> Bucket::getFives() {
    return vec_fives;
}
vector<int> Bucket::getSixes() {
    return vec_sixes;
}
vector<int> Bucket::getSevens() {
    return vec_sevens;
}
vector<int> Bucket::getEights() {
    return vec_eights;
}
vector<int> Bucket::getNines() {
    return vec_nines;
}
vector<int> Bucket::getNoDigit() {
    return vec_NoDigit;
}

void Bucket::setZeros(vector<int> newVec) {
    vec_zeros = newVec;
}
void Bucket::setOnes(vector<int> newVec) {
    vec_ones = newVec;

}
void Bucket::setTwos(vector<int> newVec) {
    vec_twos = newVec;

}
void Bucket::setThrees(vector<int> newVec) {
    vec_threes = newVec;

}
void Bucket::setFours(vector<int> newVec) {
    vec_fours = newVec;

}
void Bucket::setFives(vector<int> newVec) {
    vec_fives = newVec;

}
void Bucket::setSixes(vector<int> newVec) {
    vec_sixes = newVec;

}
void Bucket::setSevens(vector<int> newVec) {
    vec_sevens = newVec;

}
void Bucket::setEights(vector<int> newVec) {
    vec_eights = newVec;

}
void Bucket::setNines(vector<int> newVec) {
    vec_nines = newVec;

}
void Bucket::setNoDigit(vector<int> newVec) {
    vec_NoDigit = newVec;

}