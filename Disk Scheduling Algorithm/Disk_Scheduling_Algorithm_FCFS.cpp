#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cylinder_time[1000];
	int collection,head,thm =0,sum = 0;

	cout<<"Enter the collection number : ";
	cin>>collection;

	cout<<"Enter the position of head  : ";
	cin>>head;

	cout<<"Enter the Elements : ";
	for(int i =0;i<collection;i++){
		cin>>cylinder_time[i];
	}
	cout<<endl<<"Served order sequence :"<<head;
	cout<<"-->"<<cylinder_time[0];
	sum = abs(head-cylinder_time[0]);
	thm = thm+sum;
	for(int i =1;i<collection;i++){
		sum = abs(cylinder_time[i-1]-cylinder_time[i]);
		thm = thm+sum;
		cout<<"-->"<<cylinder_time[i];
	}

	cout<<endl<<"Total head movement of "<<thm<<" cylinders "<<endl;




	return 0;
}
