#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

#define LOW 0
#define HIGH 199

int main(){
  int queue[20], head, q_size, i,j, seek=0, diff, max, temp, queue1[20], queue2[20], temp1=0, temp2=0;
  float avg;

	cout<<"Enter the collection number : ";
	cin>>q_size;

	cout<<"Enter the initial head position : ";
	cin>>head;

	cout<<"Enter the Elements : ";
	for(i=0; i<q_size; i++){
		scanf("%d", &temp);
		if(temp >= head){
			queue1[temp1] = temp;
			temp1++;
		}
		else {
			queue2[temp2] = temp;
			temp2++;
		}
	}

  //sort queue1 - increasing order
	for(i=0; i<temp1-1; i++){
		for(j=i+1; j<temp1; j++){
			if(queue1[i] > queue1[j]){
				temp = queue1[i];
				queue1[i] = queue1[j];
				queue1[j] = temp;
			}
		}
	}

  //sort queue2 - decreasing order
	for(i=0; i<temp2-1; i++){
		for(j=i+1; j<temp2; j++){
			if(queue2[i] < queue2[j]){
				temp = queue2[i];
				queue2[i] = queue2[j];
				queue2[j] = temp;
			}
		}
	}

	//if(abs(head-LOW) >= abs(head-HIGH)){
	if(abs(head-HIGH) >= abs(head-LOW)){
		for(i=1,j=0; j<temp1; i++,j++){
			queue[i] = queue1[j];
		}

		for(i=temp1+1, j=0; j<temp2; i++, j++){
			queue[i] = queue2[j];
		}

	}
	else {
		for(i=1,j=0; j<temp2; i++,j++){
			queue[i] = queue2[j];
		}

		for(i=temp2+1, j=0; j<temp1; i++, j++){
          queue[i] = queue1[j];
		}

	}
	cout<<endl<<"Served order sequence :"<<head;
	queue[0] = head;

	for(j=0; j<q_size; j++){
		diff=abs(queue[j+1] - queue[j]);
		seek += diff;
        cout<<"-->"<<queue[j+1];

	}

	cout<<endl;
	cout<<"Total head movement of "<<seek<<" cylinders "<<endl;

  return 0;
}
