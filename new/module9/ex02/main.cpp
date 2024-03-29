#include "PmergeMe.hpp"

void printVector(std::vector<int> &vec){
	int i = 0;
	if (vec.size() > 8){
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
			i++;
			if (i == 8){
				std::cout << "... ";
				break;
			}
			std::cout << *it << " ";
		}
	}
	else{
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
			std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void printDeq(std::deque<int> &deq){
	if (deq.size() > 8){
		int i = 0;
		for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++){
			i++;
			if (i == 8){
				std::cout << "... ";
				break;
			}
			std::cout << *it << " ";
		}
	}
	else{
		for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
			std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main(int ac, char **av){
	if (ac < 3)
		throw std::invalid_argument("Error: Invalid number of arguments.");
	std::vector<int> vec;
	std::deque<int> deq;

	try{
		fillVectorFromArgs(ac, av, vec, deq);
		int n = vec.size();
		std::cout << "Before: ";
		printVector(vec);
		clock_t start = clock();
		merge_insertion_sort(vec, 0, n - 1);
		clock_t end = clock();
		clock_t start1 = clock();
		merge_insertion_sort_deque(deq, 0, n - 1);
		clock_t end1 = clock();
		double elapsed_secs_vec = double(end - start) / CLOCKS_PER_SEC * 1000;
		double elapsed_secs_lst = double(end1 - start1) / CLOCKS_PER_SEC * 1000;
		std::cout << "After: ";
		printVector(vec);
		std::cout << "Time to process a range of " << n << " elements with std::vector : " << elapsed_secs_vec << " ms" << std::endl;
		std::cout << "Time to process a range of " << n << " elements with std::deque : " << elapsed_secs_lst << " ms" << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	return 0;
}