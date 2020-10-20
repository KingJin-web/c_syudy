#include <bits/stdc++.h>
using namespace std;

void sort(string str[5])
{
    string a;
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = i + 1; j <= 4; j++)
        {
            if (str[i] > str[j])
            {
                a = str[i];
                str[i] = str[j];
                str[j] = a;
            }
        }
    for (i = 0; i < 5; i++)
        cout << str[i] << " ";
    cout<<endl;
}

int main()
{
    int i;
    string str[5];
    for (int i = 0; i < 5; i++)
        cin >> str[i];
    sort(str);
    return 0;
}