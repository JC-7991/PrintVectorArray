#include <iostream>
#include <vector>
#include <string>

template <class T>
void printArray(std::vector<T> vec){

  for(int i = 0; i < vec.size(); i++){
    std::cout << vec[i] << "\n";
  }

}

int main(){

	int n;
	
	std::cin >> n;
	std::vector<int> int_vector(n);

	for(int i = 0; i < n; i++){
	  int value;
	  std::cin >> value;
	  int_vector[i] = value;
	}
	
	std::cin >> n;
	std::vector<std::string> string_vector(n);

	for(int i = 0; i < n; i++){

	  std::string value;
	  std::cin >> value;
		string_vector[i] = value;

	}

	printArray<int>(int_vector);
	printArray<std::string>(string_vector);

	return 0;

}