#include <iostream>

using namespace std;

int main(){
	int luachon;
    cout <<"tinh dien tich va chu vi cac hinh"<< endl;
    cin>>luachon;
	switch(luachon)
    {
    	case 1:
    	{

       		int a,b;
    		cin>>a;
    		cin>>b;
    		cout<<"dien tich hinh chu nhat la:"<<(a*b);
    		cout<<"chu vi hinh chu nhat la:"<<((a+b)*2);
        	break;
		}
		case 2:
    	{
      		int c,d;
    		cin>>c;
    		cout<<"chu vi hinh vuong la:"<<c*4<<endl;
    		cout<<"dien tich hinh vuong la:"<<c*c;
        }
    	return 0;
	}
}

