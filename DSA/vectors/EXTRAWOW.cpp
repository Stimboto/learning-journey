#include <vector>
#include <array>

using namespace std;

int main() {
    // Declared and later initialized using simple assignment (=)
    // we cannot do this type of declaration with noramal int arr[3]; and then arr = {10,20,30};
    vector<int> vec(5); 
    vec = {1, 2, 3, 4, 5};   

    array<int, 3> arr;  
    arr = {10, 20, 30};      
}