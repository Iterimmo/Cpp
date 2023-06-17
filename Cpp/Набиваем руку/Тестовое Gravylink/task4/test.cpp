#include <iostream>
#include <vector>

int countSubarrays(const std::vector<int>& vec) {

    int lenght = vec.size();
    int answer = pow(2, lenght - 1);
    return answer;
}

// Используем код возведения в степень с асимтотической сложность O(log n)
long long pow(int& a, int& n) {
    int ans = 1;
    while (n > 0) {
        int last_bit = n & 1;

        if (last_bit) {
            ans = ans * a;
        }

        a = a * a;
        n = n >> 1;
    }
    return ans;
}
void error() {
    std::cout << "Данного значения нет в массиве" << std::endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    std::vector<int> arr = { 1, 2, 3, 4 };
    int N = 7;  

    int subarrayCount = countSubarrays(arr);
    if (std::find(arr.begin(), arr.end(), N) == arr.end()) {
        error();
        return 1;
    }
        
    std::cout << "Number of subarrays containing " << N << ": " << subarrayCount << std::endl;

    return 0;
}
