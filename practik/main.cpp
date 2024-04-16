#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void fill_arr(T arr[], int length, int l, int r) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (r - l) + l;
}
template <typename T>
void print_arr(T arr[], int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}//1
template <typename T>
void clear_arr(T arr[], int length, T num) {
	for (int i = 0; i < length; i++)
		if (arr[i] == num)
			arr[i] = 0;
}
//2
template <typename T>
int index_sum(T arr1[], int length1, T arr2[], int length2, int num) {
	if (num < 0 || num >= length1 || num >= length2) {
		std::cout << "ERROR\n";
		return 0;
	}
	return arr1[num] + arr2[num];
}
//3
void prime_range(int num1, int num2 = 1) {
	if (num2 == 1) 
		for (int i = 1; i <= num1; i++) {
			int counter{};
			for (int j = 1; j <= i; j++) {
				if (i % j == 0)
					counter++;
			}
			if (counter == 2)
				std::cout << i << " "; 
		}

	else 
	for (int i = num1; i <= num2; i++) {
		int counter{};
		for (int j = i; j >= num1; j--) {
			if (i % j == 0)
				counter++;
		}
		if (counter == 2)
			std::cout << i << " ";
	}
}


//4
template <typename T>
int compare_pare( T arr[],int  length, T num1, T num2) {
	for(int i = 0; i < length - 1; i++)
		if (arr[i] == num1 && arr[i + 1] == num2) {
			return i;
		}
	return -1;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;


	//Задача 1.
	/*std::cout << "Задача 1. Изначальный массив:\n";
	const int size1 = 10;
	int arr1[size1];
	fill_arr(arr1, size1, 1, 10);
	print_arr(arr1, size1);
	std::cout << "Итоговый массив:\n";
	std::cout << "Введите число -> ";
	std::cin >> n;
	clear_arr(arr1, size1, n);
	print_arr(arr1, size1);
	*/


	// Задача 2.
	std::cout << "\n\nЗадача 2. Изначальные массивы:\n";
	const int size2 = 5;
	const int size3 = 7;
	int arr2[size2];
	int arr3[size3];
	fill_arr(arr2, size2, 10, 30);
	fill_arr(arr3, size2, 1, 30);
	print_arr(arr2, size2);
	print_arr(arr3, size2);
	std::cout << "Введите индекс массивов для сложения -> ";
	std::cin >> n;
	std::cout << "Сумма " << n << " элементов массивов : " << index_sum(arr2, size2, arr3, size2, n) << "\n\n";


	//Задача 3.
	std::cout << "\nЗадача 3.\n";
	prime_range(20, 70);
	std::cout << "\n\n";
	prime_range(100);
	prime_range(-7, 1);

	//Задача 4.
	std::cout << "\n\nЗадача 4. Изначальный массив:\n";
	const int size3 = 50;
	int arr4[size3];
	fill_arr(arr4, size3, 1, 10);
	print_arr(arr4, size3);
	std::cout << "Индекс: ";
	std::cout << compare_pare(arr4, size3, 3, 5);




	return 0;
}