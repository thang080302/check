#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
	float x,y,z;
	cout << "Nhap 3 so thuc : ";
	cin >> x >> y >> z;
	int max = x;
	if(y > max)
      	max = y;
   	if(z > max)
      max = z;
    cout << "Max = " << max << endl;
    int min = z;
    if(y < min)
      	min = y;
   	if(x < max)
      min = x;
    cout << "Min = " << min ;
    return 0;
}
