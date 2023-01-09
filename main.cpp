#include <iostream>

template<typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

void number1() {
    std::cout << "input a" << std::endl;
    int a;
    std::cin >> a;
    std::cout << "input b" << std::endl;
    int b;
    std::cin >> b;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
}

void number2() {
    std::cout << "input the length of array" << std::endl;
    int length2;
    std::cin >> length2;

    // вводим массив
    std::cout << "input array" << std::endl;
    auto *arr2 = new double[length2];
    for (size_t i = 0; i < length2; ++i) {
        std::cin >> arr2[i];
    }

    double* pa = arr2;
    double* pla = arr2 + length2 - 1;
    int temp = *pa;
    *pa = *pla;
    *pla = temp;

    for (size_t i = 0; i  <  length2 ; ++i) {
        std::cout <<  arr2[i] << ' ';
    }
    std::cout << std::endl;
    delete[] arr2;
    }

void number3(){
    double** p = 0;
    p = new double*;
    *p = new double;
    **p = 2;
    std::cout << **p << std::endl;
    delete *p;
    delete p;
}

template <typename T>
void insertionSort(T* arr, int size) {
    //цикл для доступа к каждому элементу массива
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        int x = i;
        //находим место для вставки элемента (пока элемент меньше предыдущего меняем их местами и уменьшаем индекс на 1)
        while (x > 0 && arr[x] > arr[x-1]) {
            T temp = arr[x];
            arr[x] = arr[x-1];
            arr[x-1] = temp;
            x--;
            ++counter;
        }
    }
    std::cout << counter << std::endl;
}

void number4(){
    // вводим массив
    std::cout << "input array" << std::endl;
    auto *arr4 = new double[12];
    for (size_t i = 0; i < 12; ++i) {
        std::cin >> arr4[i];
    }

    insertionSort(arr4, 12);

    for (size_t i = 0; i  <  12 ; ++i) {
        std::cout <<  arr4[i] << ' ';
    }
    std::cout << std::endl;
}

template <typename T>
void number5(T array[], int size){
    auto* array1 = new double[size];
    auto* array2 = new double[size];
    auto* buf = new double[size];
    int k = 0, j = 0;

    for (int i = 0; i < size; i++){
        if (array1[i] < 0){
            array2[k] = array1[i];
            k++;
        }
        else {
            buf[j] = array1[i];
            j++;
        }
    }
    j = 0;
    for (int i = k; i < size; i++){
        array2[i] = buf[j++];
    }
    for (int i = 0; i < size; i++){
        std::cout << array2[i] <<" ";
    }
}

void number6(){
    std::cout << "input array" << std::endl;
    auto *arr6 = new double[14];
    for (size_t i = 0; i < 14; ++i) {
        std::cin >> arr6[i];
    }
    int swap_count = 0;
    for (size_t i = 0; i < 14/2; ++i) {
        swap(arr6[i], arr6[i + 14 / 2]);
        swap_count++;
    }
    std::cout << swap_count << std::endl;

    for (size_t i = 0; i  <  12 ; ++i) {
        std::cout <<  arr6[i] << ' ';
    }
    std::cout << std::endl;
}

void number7(){
    std::cout << "input array" << std::endl;
    auto *arr7 = new double[10];
    for (size_t i = 0; i < 10; ++i) {
        std::cin >> arr7[i];
    }

    int localMinCount = 0;
    for (size_t i = 1; i < 10 - 1; ++i) {
        if (arr7[i] < arr7[i - 1] && arr7[i] < arr7[i + 1]) {
            localMinCount++;
        }
    }
}


int main() {
    std::cout << "task 1" << std::endl;
    number1();

    std::cout << "task 2" << std::endl;
    number2();

    std::cout << "task 3" << std::endl;
    number3();

    std::cout << "task 4" << std::endl;
    number4();

    std::cout << "task 5" << std::endl;
    int arr1[] = {-7, 9, 11, -9, 18};
    int arr2[] = {6, 5 , -11, 13, 144, 0, -11};
    int arr3[] = {9, 0, 7, 5, 6, -12, 1, -4, -7};

    number5(arr1, 5);
    number5(arr2, 7);
    number5(arr3, 9);

    std::cout << "task 6" << std::endl;
    number6();

    std::cout << "task 7" << std::endl;
    number7();

    return 0;
}