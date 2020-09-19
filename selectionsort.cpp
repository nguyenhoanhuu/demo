#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void nhapmang(int a[],int n)
{	srand(time(NULL));
	for(int i=0;i<n;i++)
	{a[i]=+rand()%100;
	}

	
 } 
 void xuat(int a[],int n)
 {
 	for(int i=0;i<n;i++)
 	{
 		cout<<a[i]<<"\t";
	 }
 }
 void bubblesort(int a[],int n)
 {
 	for(int i=0;i<n-1;i++)
 	{
 		for(int j=n-1;j>i;j--)
 		{
 			if(a[j]<a[j-1])
 			{
 				int temp;
 				temp=a[j];
 				a[j]=a[j-1];
 				a[j-1]=temp;
			 }
		 }
	 }
 }
 void selectionsort(int a[],int n)
 {
 	for(int i=0;i<n-1;i++)
 	{
 		int min=i;
 		for(int j=i+1;j<n;j++)
 		{
 			if(a[j]<a[min])
 			{
 				min=j;
			 }
		 }
		if(min!=i)
		{
			int temp;
			temp=a[i];
			a[i]=a[min];
			a[min]=a[i];
		}
	 }
 }
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int a[n];
	cout<<"Nhap vao phan tu n :"<<endl;
	cin>>n;
	nhapmang(a,n);
	xuat(a,n);
	cout<<"\n";
	bubblesort(a,n);
		xuat(a,n);
		cout<<"\n Mang sau khi sap xep tuchon :";
		
	selectionsort(a,n);
	xuat(a,n);
		
	return 0;
}