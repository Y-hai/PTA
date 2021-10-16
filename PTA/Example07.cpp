#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

typedef struct
{
    char ID[10];
    int clas;
    int de_s, cai_s;
    int sum;
} STU;

bool cmp(STU &x, STU &y) // 取地址能加快计算速度
{
    if (x.clas != y.clas)
        return x.clas < y.clas;
    else if (x.sum != y.sum)
        return x.sum > y.sum;
    else if (x.de_s != y.de_s)
        return x.de_s > y.de_s;
    else
        return strcmp(x.ID, y.ID) < 0;
}

int main()
{
    int N, L, H;
    cin >> N >> L >> H;
    int cnt = N;

    STU stu[100000];
    for (int i = 0; i < N; i++)
    {
        cin >> stu[i].ID >> stu[i].de_s >> stu[i].cai_s;
        stu[i].sum = stu[i].de_s + stu[i].cai_s;
        if (stu[i].de_s < L || stu[i].cai_s < L)
        {
            stu[i].clas = 5;
            cnt--;
        }
        else if (stu[i].de_s >= H && stu[i].cai_s >= H)
            stu[i].clas = 1;
        else if (stu[i].de_s >= H && stu[i].cai_s < H)
            stu[i].clas = 2;
        else if (stu[i].de_s < H && stu[i].de_s >= stu[i].cai_s)
            stu[i].clas = 3;
        else
            stu[i].clas = 4;
    }

    sort(stu, stu + N, cmp); // 左闭右开，这里的N是按单位加的

    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
        cout << stu[i].ID << " " << stu[i].de_s << " " << stu[i].cai_s << endl;

    return 0;
}