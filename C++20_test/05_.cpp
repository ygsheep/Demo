#include <fmt/format.h>
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char *argv[])
{
	string path = "Word";
	cout  << fmt::format("String: {}",path);
	return 0;
}
