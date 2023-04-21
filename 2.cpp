#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct stu
{
    string name;
    int age;
    string date;
};
bool cmp(stu x,stu y)
{
    if(x.date!=y.date)
        return x.date<y.date;
    else if(x.age!=y.age)
        return x.age<y.age;
    else
        return x.name<y.name;
}
int  main()
{
    stu excel[3];
    for(int i=0;i<3;i++)
        cin >> excel[i].date >> excel[i].name >> excel[i].age;
    sort(excel,excel+3,cmp);
    for(int i=0;i<3;i++)
        cout << excel[i].date << " " << excel[i].name << " " <<excel[i].age << endl;
    return 0;
}
