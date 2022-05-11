#include <bits/stdc++.h>
using namespace std;
double days [7 + 10];

int main()
{

    int n;
    double s = 0, d = 0, avg, temp = 0, sd;

    string st;

    for(int i = 0; i < 7; i++){

        cin >> st;
        d = 0;

        for(int j = 0; j < st.size(); j++){

            if(st[j] == '1') days[i]++;
        }

        s += days[i];
    }

    avg = s / 7.0;

    for(int i = 0; i < 7; i++){

        temp += (avg - days[i]) * (avg - days[i]);
    }

    sd = sqrt(temp / 7.0);

    printf("%.4lf\n", sd);

    return 0;
}