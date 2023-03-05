#include <fmt/format.h>
#include <iostream>
#include <string>

using namespace std;


void operator""_p(const char * str,size_t len){
	std::cout << str << "\tsizes: " << len << std::endl;
}

int main(int argc, char *argv[]){
	"sss"_p;
	"printf('\n');"_p;
	string path = "Word";
	// cout  << fmt::format("String: {}",path);
	return 0;
}
