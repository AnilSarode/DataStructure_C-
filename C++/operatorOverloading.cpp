#include"bits/stdc++.h"
using namespace std;

class Complex{
    
    private:
        int real, imag;
        
    public:
    
        Complex(int r=0 , int i=0){
            
            real = r;
            imag = i;
        }
        
    
    Complex operator + (Complex const &obj){
        
        Complex res;
        
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;

    }
        
    
    void display(){
        
        cout << real << "+ i"<< imag << "\n";
        
    }
    
    
};

int main(){
    
    Complex c1(12, 5), c2(6, 5);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}

// */


// ### **Explanation of the `operator+` Function**

// The part of the code you asked about defines an **overloaded `+` operator** for the `Complex` class. Let's break it down step by step.

// ---

// #### **Purpose of Overloading the `+` Operator**
// By default, the `+` operator is not defined for user-defined classes like `Complex`. Overloading the operator allows you to add two `Complex` objects in a way that's intuitive, similar to adding primitive types.

// ---

// #### **Code Breakdown**
// ```cpp
// Complex operator + (Complex const &obj) {
//     Complex res;  // Create a temporary `Complex` object to store the result.
//     res.imag = imag + obj.imag;  // Add the imaginary parts of the current object and `obj`.
//     res.real = real + obj.real;  // Add the real parts of the current object and `obj`.
//     return res;  // Return the resulting `Complex` object.
// }
// ```

// 1. **`Complex operator+(Complex const &obj)`**:
//   - This defines the `+` operator for the `Complex` class.
//   - It takes a constant reference to another `Complex` object (`obj`) as an argument to avoid unnecessary copying.
//   - The `const` ensures that the passed object (`obj`) cannot be modified.

// 2. **`Complex res;`**:
//   - Creates a temporary `Complex` object (`res`) to store the result of the addition.

// 3. **`res.imag = imag + obj.imag;` and `res.real = real + obj.real;`**:
//   - These lines perform the addition of the `real` and `imag` parts of the current object (`this`) and the passed object (`obj`).

// 4. **`return res;`**:
//   - The result is returned as a new `Complex` object.

// ---

// ### **How `c3` Invokes the `+` Operator**

// In the `main()` function:

// ```cpp
// Complex c1(12, 5), c2(6, 5);
// Complex c3 = c1 + c2;
// ```

// #### **Step-by-Step Execution**
// 1. **`c1 + c2`:**
//   - The `+` operator is called with `c1` as the calling object (left-hand side) and `c2` as the argument (right-hand side).
//   - This translates to:
//      ```cpp
//      c1.operator+(c2);
//      ```
//   - Here:
//      - `this` refers to `c1` (the calling object).
//      - `obj` refers to `c2` (the passed object).

// 2. Inside the `operator+` function:
//   - `res.imag = c1.imag + c2.imag;` → `res.imag = 5 + 5 = 10`.
//   - `res.real = c1.real + c2.real;` → `res.real = 12 + 6 = 18`.
//   - The `Complex` object `res` now holds the result `18 + i10`.

// 3. **Return Value:**
//   - The result `res` is returned to `c3`.

// 4. **`c3.display();`:**
//   - Prints `18 + i10`, which is the sum of `c1` and `c2`.

// ---

// ### **Output**
// ```
// 18+ i10
// ```

// ---

// ### **Summary**
// - The `operator+` function overloads the `+` operator to work with `Complex` objects.
// - When you write `c1 + c2`, it invokes `c1.operator+(c2)`:
//   - `c1` is the calling object (`this`).
//   - `c2` is passed as a constant reference argument (`obj`).
// - The function computes the sum and returns a new `Complex` object, which is stored in `c3`.
// /*