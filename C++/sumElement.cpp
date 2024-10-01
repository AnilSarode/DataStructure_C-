#include <iostream>
#include <vector>
using namespace std;


int add_number(vector<int>& arr)
{
   int n=arr.size();
   int sum =0;	
    for (int i = 0; i < n; i++)
    {
    
     sum += arr[i];
    
    }
    
    return sum;
     
      

}




int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Create a vector with n elements
    vector<int> array(n);
    
    // Input elements into the vector
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> array[i];
    }
    
    // Display the elements in the vector
    cout << "The elements in the array are:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << array[i] << " ";
    }
    cout << endl;
    


    
     int sum =add_number(array);
     
     
     cout<<sum;
    

    
   
    

    return 0;
}

