#include<iostream>
using namespace std;
class box{
	float len,bre,hei;
	public:
	box(float a,float b,float c)
	{
		len=a;
		bre=b;
		hei=c;
	}
	float volume()
	{
		return len*bre*hei;
	}
};
int main(){
	box b(7.1,5.6,5);
	cout<<"the volume of the box is: "<<b.volume();
	return 0;
}