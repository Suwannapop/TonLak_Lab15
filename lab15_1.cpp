#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	int max = d[0] , loc , x;
	for (int index = 1; index <= N-1; index++)
	{
		if (d[index]>max)
		{
			max = d[index];
			loc = index ;
		}
		cout << "Pass " << index << ":" << max << " " ;

		for (int run = 0; run < N; run++)
		{
			if (run == loc)
			{
				continue;
			}
			cout << d[run] << " ";
		}
		
		/เหลือการสลับ

		cout << endl ;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
