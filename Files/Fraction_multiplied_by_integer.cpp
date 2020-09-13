/*
 * @Author: Zona.
 * @Date: 2020-09-13 13:11:08
 * @LastEditors: Zona.
 * @LastEditTime: 2020-09-13 13:17:53
 * @FilePath: \Luogu\Class_Practice\Fraction_multiplied_by_integer.cpp
 */
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
    int Den,Mol,Inf;//表示分母、分子、整数
    int ResDen,ResMol;//表示结果分母和结果分子
    int gcd,gcd2;//存储最大公约数
    cin>>Mol; cout<<"----"; cin>>Den; cout<<endl;//输入第一个分数
    cout<<" "<<"*";//输出乘号
    cin>>Inf;//输入整数
    gcd=Gcd(Inf,Den);
    Den/=gcd; Inf/=gcd;
    ResDen=Den;
    ResMol=Mol*Inf;
    gcd2=Gcd(ResDen,ResMol);
    ResDen/=gcd2;
    ResMol/=gcd2;
    cout<<endl<<" "<<"="<<endl<<endl;
    cout<<" "<<ResMol<<endl;
    cout<<"----"<<endl;
    cout<<" "<<ResDen<<endl;
    return 0;
}
