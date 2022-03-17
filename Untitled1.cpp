#include<iostream>

using namespace std; 
int main()
{ int a, b, c;
//nhap du lieu
cout<<"Nhap vao 3 so nguyen duong a, b, c "<<endl;
cout<<"a= "; cin>>a;
cout<<"\nb= "; cin>>b;
cout<<"\nc= " ; cin>>c;
if ((a+b > c) && (b+c > a) && (a+c > b))
{ cout<<"Thoa man la 3 canh tam giac"<<endl;
if ((a==b) && (b==c))
cout<<"Do la tam giac deu"<<endl;
else
if ((a==b)||(b==c)||(c==a))
cout<<"Do la tam giac can"<<endl;
else
if ((a*a + b*b == c*c)||(b*b+c*c==a*a)
||(a*a + c*c == b*b))
cout<<"Do la tam giac vuong"<<endl;
else
cout<<"Do la tam giac thuong"<<endl;
}
else
cout<<"Khong la 3 canh tam giac"<<endl;
return 0;
}

