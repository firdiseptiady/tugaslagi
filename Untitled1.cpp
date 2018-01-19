#include <iostream>
#include <string>
using namespace std;

class sepatu {
    public:
        void jenissepatu(string sepatu);
        string merksepatu;
        void ukuransepatu(string ukuran);
    
                
        };
        int main(){
    sepatu boots,sneakers,loafers; 

	boots.merksepatu	="nike ";
	sneakers.merksepatu	="adidas ";
	loafers.merksepatu  ="vans ";

	
	cout << "boots: \n\n";
	cout << (boots.merksepatu);
	boots.ukuransepatu("40 ");
	cout <<"===================================\n\n";
	
	cout << "sneakers: \n\n";
	cout << (sneakers.merksepatu);
	sneakers.ukuransepatu("39 ");
	cout <<"===================================\n\n";
	
	cout << "loafers: \n\n";
	cout << (loafers.merksepatu);
	loafers.ukuransepatu("43 ");
	cout <<"===================================\n\n";
	

	}
