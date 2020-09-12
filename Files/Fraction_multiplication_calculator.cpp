#include<bits/stdc++.h>
using namespace std;
int Gcd(int x,int y){//求最大公约数（辗转相除法）
	int z=y;
	while(x%y!=0){
		z=x%y;
		x=y;
		y=z;	
	}
	return z;
}
int main(){
    int Den1,Mol1,Den2,Mol2;//表示分母1、分子1、分母2、分子2
    int ResDen,ResMol;//表示结果分母和结果分子
    int gcd,gcd1,gcd2;//存储最大公约数
    cin>>Mol1; cout<<"----"; cin>>Den1; cout<<endl;//输入第一个分数
    cout<<" "<<"*";//输出乘号
    cin>>Mol2; cout<<"----"; cin>>Den2; cout<<endl;//输入第二个分数
    gcd=Gcd(Mol1,Den2);
    gcd1=Gcd(Mol2,Den1);
    Den1/=gcd1; Mol1/=gcd;
    Den2/=gcd; Mol2/=gcd1;
    ResDen=Den1*Den2;
    ResMol=Mol1*Mol2;
    gcd2=Gcd(ResDen,ResMol);
    ResDen/=gcd2;
    ResMol/=gcd2;
    cout<<" "<<"="<<endl<<endl;
    cout<<" "<<ResMol<<endl;
    cout<<"----"<<endl;
    cout<<" "<<ResDen<<endl;
    return 0;
}
