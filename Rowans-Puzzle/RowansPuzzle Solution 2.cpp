#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

int main () {
	int trials=99999;
	int failures=0;

	for(int i=0; i<trials; i++)
	{

		std::array<int,8> foo {1,2,2,3,3,4,4,4};
		
		// obtain a time-based seed:

		unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
		
		shuffle (foo.begin(), foo.end(), std::default_random_engine(seed));
		std::cout << "shuffled elements:";
		for (int& x: foo) std::cout << ' ' << x;
		std::cout << '\n';

		bool failed=0;

		for(int j=0; j<sizeof( foo ) / sizeof( foo[0] ) - 1; j++)
		{
			if(foo[j]==foo[j+1]){failed=1;}
		}
		if(failed)
		{
			failures++;
			std::cout << "FAILED\n";
		}
	}
	std::cout << float(failures)/float(trials);
	return 0;
}