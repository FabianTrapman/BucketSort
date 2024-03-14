#ifndef GATHER_HPP
#define GATHER_HPP

#include <iostream>
#include <vector>

#pragma once
using namespace std;

class Gather {
private:
    vector<int> vec_main;
    int size;

public:
    Gather();
    Gather(vector<int> vec_main, int size);
    ~Gather();

    vector<int> getVector();
    void clearList();
    void generateRandomList(int length, int maxDigits);
    void setSize(int num);
    void addNumber(int num);
    void addList(const vector<int>& lijstje);
    void setList(const vector<int>& lijstje);
};

#endif