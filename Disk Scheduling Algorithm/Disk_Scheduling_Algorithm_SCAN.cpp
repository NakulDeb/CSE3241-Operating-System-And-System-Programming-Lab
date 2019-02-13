#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,sum=0,n;
	int d[20];
	int disk;   //loc of head
	int temp,max;
	int dloc;   //loc of disk in array

	cout<<"Enter the collection number : ";
	cin>>n;

	cout<<"Enter the initial head position : ";
	cin>>disk;

	cout<<"Enter the Elements : ";
	for(i=0;i<n;i++){
		scanf("%d",&d[i]);
	}
	d[n]=disk;
	n=n+1;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(d[i]>d[j]){
				temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	cout<<endl<<"Served order sequence head :";
	max=d[n-1];
	for(i=0;i<n;i++){
		if(disk==d[i]){
			dloc=i;
			break;
		}
	}
	for(i=dloc;i>=0;i--){
		printf("%d -->",d[i]);
	}
	printf("0 -->");
	for(i=dloc+1;i<n;i++){
		printf("%d-->",d[i]);
	}
	sum=disk+max;
       printf("\nmovement of total cylinders %d",sum);

 return 0;
}

//98 183 37 122 14 124 65 67
