

#include <iostream>
using namespace std;
int main()
{
	struct {;
	public:
		float pris;
		int hylla;
 		char namn[50];
	} vara[50];
	
	int x=0;
	int y;
	int prisTemp=0;
	
	cout << "Hur många varor: ";
	cin >> y;
	y--;

	for (x=0; x<=y; x++) 
	{
		cout << "Ange varans namn: ";
		cin >> vara[x].namn;
		cout << endl << "Ange varans pris: ";
		cin >> vara[x].pris;
		cout << endl << "Ange varans hylla: ";
		cin >> vara[x].hylla;
		cout << endl;
	
	}
	
	
	
	for (x=0; x<=y; x++)
	{
			cout << endl << "Varans namn är: " << vara[x].namn << " kostar " << vara[x].pris << ":- och står på hylla nummer: " << vara[x].hylla;
	}
	
	
	for (x=0; x<=y; x++)
	{
		prisTemp+=vara[x].pris;
	}
	
	cout << endl << "Sammanlagda priset för varorna är: " << prisTemp << ":-"<< endl;
	
	
	return 0;
}
