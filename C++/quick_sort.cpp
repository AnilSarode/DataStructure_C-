#include<iostream>
#include<vector>

using namespace std;



int partition( vector<int> &arr, int st, int end){

    int iter_index = st-1;
    int pivot = arr[end];

    for (int j= st; j<end; j++){

        if (arr[j] <= pivot){

            iter_index ++;
            swap(arr[j], arr[iter_index]);

        }

    }
    iter_index++;
    swap(arr[iter_index], arr[end]);

    return iter_index;
}


void quickSort(vector<int> &arr, int st, int end){

    if (st < end){


        int pivot_index = partition( arr, st, end );
        quickSort(arr,st, pivot_index-1 );
        quickSort(arr,pivot_index+1 ,end );

    }


}



int main(){
    
    
    int n;
    cin>>n;
    vector<int>arr;
    
    for (int i=0; i <n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    quickSort(arr, 0, arr.size()-1);



    for (int i=0; i<n; i++)
	{
	
	 cout<<arr[i]<< " ";
		
	}

    return 0;




}

