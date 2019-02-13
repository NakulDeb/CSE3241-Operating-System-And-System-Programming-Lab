#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cylinder_time[1000],t[1000];
	int collection,head,thm =0,sum = 0,temp;

	cout<<"Enter the collection number : ";
	cin>>collection;

	cout<<"Enter the position of head  : ";
	cin>>head;

	cout<<"Enter the Elements : ";
	for(int i =0;i<collection;i++){
		cin>>cylinder_time[i];
	}


	for(int i=0;i<collection;i++)
	t[i]=abs(head-cylinder_time[i]);

	for(int i=0;i<collection;i++){
		for(int j=i+1;j<collection;j++){
			if(t[i]>t[j]){
				temp=t[i];
				t[i]=t[j];
				t[j]=temp;
				temp=cylinder_time[i];
				cylinder_time[i]=cylinder_time[j];
				cylinder_time[j]=temp;
			}
		}
	}
	//cout<<"Head :"<<head;//<<"-->"<< cylinder_time[0];
	cout<<endl<<"Served order sequence :"<<head;
	for(int i=0;i<collection;i++){
		thm=thm+abs(head-cylinder_time[i]);
		head=cylinder_time[i];
		cout<<"-->"<< cylinder_time[i];
	}
	cout<<endl;

	cout<<"Total head movement of "<<thm<<" cylinders "<<endl;




	return 0;
}
