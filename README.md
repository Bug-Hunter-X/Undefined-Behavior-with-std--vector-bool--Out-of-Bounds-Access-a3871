# C++ std::vector<bool> Out-of-Bounds Access Bug
This repository demonstrates a common, yet subtle, bug that can occur when using std::vector<bool> in C++.  Accessing elements outside the bounds of the vector leads to undefined behavior. The code compiles without errors, but the results are unpredictable and can vary across compilers and optimization levels.  The solution provides a safer alternative. 

## Bug
The bug lies in accessing elements beyond the valid range of indices in a std::vector<bool>.  While accessing elements within the bounds works correctly, attempting to access an element beyond the last element results in undefined behavior. This is because std::vector<bool> is specialized for optimization reasons and does not follow the same memory layout as other vectors.