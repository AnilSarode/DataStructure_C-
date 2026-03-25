#include <iostream>
#include<string>

using namespace std;

class ABC{

public:


	ABC(){

		cout<<"Constructor\n";

	}

	~ABC(){

		cout<<"Destructor\n";
		
	}
};

int main(){


	if (true){


		// ABC obj;

		static ABC obj;

	}


	cout << "end of main function";

	return 0;


}