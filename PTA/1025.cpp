#include <cstdio>
#include <vector>
using namespace std;

struct node
{
    int add, data, next; //当前结点地址，权值，下一个结点的地址
};

int main()
{
    vector<node> vin(100000); //初始数组
    vector<node> vsorted;     //经过链接后的数组
    vector<node> vout;        //经过反转后的最终数组
    node temp;
    int first, n, k;
    scanf("%d %d %d", &first, &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &temp.add, &temp.data, &temp.next);
        vin[temp.add] = temp;
    }
    if (first == -1)
        printf("-1\n");
    else
    {
        int nextadd = first;
        while (nextadd != -1)
        {
            vsorted.push_back(vin[nextadd]); //第一个结点
            nextadd = vin[nextadd].next;     //第一个结点的下一个结点
        }
        int N = vsorted.size();
        int pos = k - 1;
        while (pos < N)
        {
            for (int i = pos; i >= pos - k + 1; i--)
                vout.push_back(vsorted[i]);
            pos += k;
        }
        for (int i = pos + 1 - k; i < N; i++)
            vout.push_back(vsorted[i]);
        for (int i = 0; i < N - 1; i++)
        {
            vout[i].next = vout[i + 1].add;
            printf("%05d %d %05d\n", vout[i].add, vout[i].data, vout[i].next);
        }
        printf("%05d %d %d\n", vout[N - 1].add, vout[N - 1].data, -1);
    }
    return 0;
}
