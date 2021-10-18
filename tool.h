#pragma once
#include <random>
#include<cmath>
#include<iostream>
using namespace std;
int IntRand(int min, int max)
{
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(min, max);
    return dist6(rng);
}

double DoubleRand(double min,double max)
{
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_real_distribution<double> distribution(min, max);
    return distribution(rng);
}

//«Ûæ‡¿Î
double RangeBetween(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt(pow((x1 - x2), 2) + (pow((y1 - y2), 2) + (pow((z1 - z2), 2))));
}