/*按由大到小的顺序输入10个int类型的数据将其存放在一个一维数组中，
再输入一个整数到变量x，用二分法(?)查找x是否是数组中的元素，若是，输出其在数组中的位置，否则输出不在数组中的提示。*/
#include<iostream>
#define N 10
using namespace std;
int main()
{
    
	//数组数值输入
	int a[N],i,p;
	cout<<"按由大到小的顺序输入10个int类型的数据"<<endl;
	for(i=0;i<N;i++)//输入10个数并存放入数组a[N]
	{
		cout<<"输入第"<<i+1<<"个数"<<endl;
		cin>>p;
		a[i]=p;
	}
   

	//查找
	int high(N-1),low(0),mid,x;
	
	cout<<"输入待查找数值"<<endl;
	cin>>x;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(x==a[mid])
		{
			cout<<"在数组中，位于第"<<mid+1<<"个"<<endl;
			break;
		}
		else if(x>a[mid])
			low=mid+1;
		else
			high=mid-1;
	}
	if(low>high)
		cout<<"该数不在数组中"<<endl;
    system("pause");
    return 0;
}