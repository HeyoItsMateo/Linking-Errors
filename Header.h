#pragma once
#include <iostream>

namespace library {
	template<typename T>
	void print(T input);

	void test() {
		std::cout << "This is a test." << std::endl;
	}

	struct object {
		static inline int i = 1;
		object();
		~object() = default;
		/* When inside, it does not give the error.
		void objTest() {
			std::cout << "This is a test in an object\n";
		}
		*/
	};
}
