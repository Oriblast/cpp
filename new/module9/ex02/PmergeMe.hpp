#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
#include <string>
#include <sstream>
#include <stdexcept>

void merge_insertion_sort(std::vector<int>& arr, int l, int r);

void merge_insertion_sort_deque(std::deque<int>& arr, int left, int right);

void fillVectorFromArgs(int ac, char **av, std::vector<int>& vec, std::deque<int>& deq);