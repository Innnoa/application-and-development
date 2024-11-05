/**
 * ClassName: ${NAME}
 * package: ${PACKAGE_NAME}
 * Description:
 * @Author: innno
 * @Create: 2024/2/27 - 21:54
 * @Version: v1.0
 */
#include <bits/stdc++.h>
using namespace std;

int main()
    {
        ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
        int a;
        cin >> a;
        const char c = a == 90 ? 'a' : a == 91 ? 'b' : a == 92 ? 'c' : 'd';
        cout << c;
        return 0;
    }
