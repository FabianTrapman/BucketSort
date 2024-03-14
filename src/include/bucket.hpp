#ifndef BUCKET_HPP
#define BUCKET_HPP

#include <iostream>
#include <vector>

using namespace std;
#pragma once

class Bucket {
private:
    vector<int> vec_zeros;
    vector<int> vec_ones;
    vector<int> vec_twos;
    vector<int> vec_threes;
    vector<int> vec_fours;
    vector<int> vec_fives;
    vector<int> vec_sixes;
    vector<int> vec_sevens;
    vector<int> vec_eights;
    vector<int> vec_nines;
    vector<int> vec_NoDigit;


public:
    Bucket();
    Bucket(const vector<int>& vec_zeros, const vector<int>& vec_ones, const vector<int>& vec_twos,
           const vector<int>& vec_threes, const vector<int>& vec_fours, const vector<int>& vec_fives,
           const vector<int>& vec_sixes, const vector<int>& vec_sevens, const vector<int>& vec_eights,
           const vector<int>& vec_nines);
    ~Bucket();

    void printVisualisation();
    void clearVector();

    void addNum_zeros(int item);
    void addNum_ones(int item);
    void addNum_twos(int item);
    void addNum_threes(int item);
    void addNum_fours(int item);
    void addNum_fives(int item);
    void addNum_sixes(int item);
    void addNum_sevens(int item);
    void addNum_eights(int item);
    void addNum_nines(int item);
    void addNum_NoDigit(int item);

    vector<int> getZeros();
    vector<int> getOnes();
    vector<int> getTwos();
    vector<int> getThrees();
    vector<int> getFours();
    vector<int> getFives();
    vector<int> getSixes();
    vector<int> getSevens();
    vector<int> getEights();
    vector<int> getNines();
    vector<int> getNoDigit();

    void setZeros(vector<int>);
    void setOnes(vector<int>);
    void setTwos(vector<int>);
    void setThrees(vector<int>);
    void setFours(vector<int>);
    void setFives(vector<int>);
    void setSixes(vector<int>);
    void setSevens(vector<int>);
    void setEights(vector<int>);
    void setNines(vector<int>);
    void setNoDigit(vector<int>);
};

#endif