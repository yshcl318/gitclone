/*#include <iostream>

using namespace std;

int main()
{
    cout <<"               ********\n";
    cout <<"           ************\n";
    cout <<"           ####....#.\n";
    cout <<"         #..###.....##....\n";
    cout <<"         ###.......######              ###            ###\n";
    cout <<"            ...........               #...#          #...#\n";
    cout <<"           ##*#######                 #.#.#          #.#.#\n";
    cout <<"        ####*******######             #.#.#          #.#.#\n";
    cout <<"       ...#***.****.*###....          #...#          #...#\n";
    cout <<"       ....**********##.....           ###            ###\n";
    cout <<"       ....****    *****....\n";
    cout <<"         ####        ####\n";
cout <<"           ######        ######\n";
cout <<"##############################################################\n";
cout <<"#...#......#.##...#......#.##...#......#.##------------------#\n";
cout <<"###########################################------------------#\n";
cout <<"#..#....#....##..#....#....##..#....#....#####################\n";
cout <<"##########################################    #----------#\n";
cout <<"#.....#......##.....#......##.....#......#    #----------#\n";
cout <<"##########################################    #----------#\n";
cout <<"#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n";
cout <<"##########################################    ############\n";
    return 0;
}*/
/*#include <iostream>
using namespace std;

bool  tree[10010];

int main()
{
    int l,m,u,v;
    int sum=0;
    cin >> l >> m;
    while(m--)
    {
        cin >> u >> v;
        for (int i=u;i<=v;i++){
            tree[i]=true;}
    }
    for(int i=0;i<=l;i++){
        if(tree[i]==false)sum++;
    }
    cout << sum;
    return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;
 string s;
  int q;
  int main()
   { cin >> q;
    cin >> s;
    while (q--)
        { int c;
    cin >> c;
     if (c == 1)
        { string str;
     cin >> str;
     s += str;
     cout << s << endl; }
      else if (c == 2)
        {int a, b;
      cin >> a >> b;
       s=s.substr(a, b)
       cout << s << endl; }
       else if (c == 3)
            { int a;
            string str;
            cin >> a >> str;
        s=s.insert(a, str);
        cout << s << endl; }
    else if (c == 4)
        { string str;
    cin >> str;
    int pos = s.find(str);
     std::string::npos if (pos == string::npos)
     { cout << -1 << endl; }
      else
        { cout << pos << endl; }
         }
      }
      return 0;
}*/
#include<iostream>
#include<string>
 using namespace std;
 int b,g;
  string st;
  int main()
  { cin>>st;
   for(int i=0;i<=st.length();i++)
    { if (st[i]=='b'||st[i+1]=='o'||st[i+2]=='y')
     b++;
   if (st[i]=='g'||st[i+1]=='i'||st[i+2]=='r'||st[i+3]=='l')
        g++;
   }
    cout<<b<<endl;
    cout<<g<<endl;
    return 0;
    }
