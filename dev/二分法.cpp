/*���ɴ�С��˳������10��int���͵����ݽ�������һ��һά�����У�
������һ������������x���ö��ַ�(?)����x�Ƿ��������е�Ԫ�أ����ǣ�������������е�λ�ã�����������������е���ʾ��*/
#include<iostream>
#define N 10
using namespace std;
int main()
{
    
	//������ֵ����
	int a[N],i,p;
	cout<<"���ɴ�С��˳������10��int���͵�����"<<endl;
	for(i=0;i<N;i++)//����10���������������a[N]
	{
		cout<<"�����"<<i+1<<"����"<<endl;
		cin>>p;
		a[i]=p;
	}
   

	//����
	int high(N-1),low(0),mid,x;
	
	cout<<"�����������ֵ"<<endl;
	cin>>x;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(x==a[mid])
		{
			cout<<"�������У�λ�ڵ�"<<mid+1<<"��"<<endl;
			break;
		}
		else if(x>a[mid])
			low=mid+1;
		else
			high=mid-1;
	}
	if(low>high)
		cout<<"��������������"<<endl;
    system("pause");
    return 0;
}