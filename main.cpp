//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    char a,b,c,s,x;
//    cin >> a >> b >> c >>s >> x;
//    cout << x << s << c << b << a;
//    return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int main(){
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		int a;
//		cin>>a;
//		int x[40];
//		x[1]=x[2]=1;
//		for(int i=3;i<=a;i++)
//      x[i]=x[i-1]+x[i-2];
//		cout<<x[a]<<endl;
//	}
//	return 0;
//}
/*#include <iostream>
using namespace std;
    int main(){
    int a, b, x;
    cin >> a >> b;
    x=(a+b*0.1)/1.9;
    cout << x;
    return 0;
}*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(char a:s)
    {
        a=a-'a'+'A';
        cout << a;
    }
    return 0;
}
