#include <iostream>
#include <vector>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print1(vector<int> &arr1, int i)
{
    if (i == arr1.size())
    {
        return;  // Base case: stop recursion when index reaches vector size
    }
    
    cout << arr1[i] << " ";  // Print the current element
    print1(arr1, i + 1);     // Recursive call to the next element
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    vector<int> arr1;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
        arr1.push_back(x);   // Add element to the vector
    }
    
    print(arr, n);           // Print the array using the `print` function
    print1(arr1, 0);         // Print the vector using the `print1` recursive function
    
    return 0;
}
