//into to vec
#include <iostream>
#include <vector>
using namespace std;

int main() {
    /* Accessing vec[0] on an empty vector causes undefined behavior (segmentation fault)
    Instead, use vec.at(0) for bounds checking
    vector<int> vec;
    cout << vec[0]; // segmentation fault */
    
    // Initialize vector with 5 elements, all set to 0
    vector<int> vec(5, 0);
    cout << "Size: " << vec.size() << endl; // vec.size() gives the number of elements currently in the vector
    
    // Adding an element to the end of the vector (vector grows dynamically)
    vec.push_back(5); // Use pop_back() to remove the last element
    cout << "Size after push_back: " << vec.size() << endl;

    /* Accessing first and last elements of the vector
    vec.front() gives the first element, vec.back() gives the last element
    vec.at(3) accesses the element at index 3, with bounds checking */
    cout << "Element at index 3: " << vec.at(3) << endl;
    
    // Iterate through the vector using a range-based for loop
    for (int val : vec) {
        cout << val << endl;
    }

    /* Explanation of capacity and size:
    - Capacity is the amount of allocated memory for the vector.
    - Size is the number of elements currently in the vector.
    When size exceeds capacity, the vector's capacity doubles. */
    
    /* Pass-by-reference (using &) is more efficient than passing by value for vectors,
    as passing by value would create a copy of the entire vector. */
    
    return 0;
}