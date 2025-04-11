#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long k, n, i, j, counter = 0, temp;
    cin >> n >> k;
    long long arr[n];
    //    counter;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp = 1;
        for (j = 0; arr[i] > k; j++)
        {
            if (arr[i] % 2 != 0)
            {
                arr[i]--;
                if (arr[i] == k)
                {
                    break;
                }
            }
            arr[i] /= 2;
            temp *= 2;
        }
        counter += temp;
    }
    cout << counter;
    return 0;
}
// #include <iostream>

// using namespace std;

// int main() {
//     long long n, k;
//     cin >> n >> k;
//     long long totalParts = 0;
//     for (long long i = 0; i < n; i++) {
//         long long a;
//         cin >> a;
//         long long parts = 1;
//         while (a > k) {
//             if (a%2!=0) {
//                 a--;
//             }
//             a/=2;
//             parts*=2;
//         }
//         totalParts+=parts;
//     }
//     cout<<totalParts <<endl;

//     return 0;
// }

// // 0 1 1 2 3 5 8 13 21 34 55 89
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>
// #include <cmath>

// using namespace std;
// constexpr auto nf = string::npos;

// bool isprime(int a)
// {
//     if (a < 2)
//         return 0;
//     else if (a == 2)
//         return 1;
//     else
//     {
//         for (int i = 0; i * i < a; i++)
//             if (a % i == 0)
//             {
//                 return 0;
//             }
//         return 1;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int q, n, idx, primeidx = 0, f0 = 0, f1 = 1, f2;
//     long long prime[1000] = {};
//     cin >> q;
//     while (primeidx < 100)
//     {
//         f2 = (f0 + f1) % ((int)1e9 + 7);
//         f0 = f1;
//         f1 = f2;
//         if (isprime(f2))
//         {
//             prime[primeidx] = f2;
//             primeidx++;
//         }
//     }

//     while (q--)
//     {
//         cin >> idx;
//         cout << prime[idx - 1] << "\n";
//     }
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// bool found(int arr[], int n, int a)
// {
//     for (int i = 0; i < n; i++)
//         if (a == arr[i])
//         {

//             arr[i] = 0;
//         }
//     return 0;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int n, m, flag = 0;
//     cin >> n >> m;
//     if (m > n)
//     {
//         cout << "No";
//         return 0;
//     }
//     int arr[n], day[m];
//     // int f[(int)1e9] = {};
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         // f[arr[i]]++;
//     }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << arr[i] << "\t";
//     //     cout << f[arr[i]] << "\n";
//     // }
//     for (int j = 0; j < m; j++)
//     {
//         flag = 0;
//         cin >> day[j];
//         // f[day[j]]--;
//         for (int i = 0; i < n; i++)
//         {
//             if (day[j] == arr[i])
//             {
//                 flag = 1;
//                 arr[i] = 0;
//                 break;
//             }
//         }

//         if (flag == 0)
//         {
//             cout << "No";
//             return 0;
//         }
//     }

//     cout << "Yes";
// }

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int t, q, idx, flag = 1;
//     char c;
//     string s1, s2;
//     int f[123] = {};
//     int f2[123] = {};
//     getline(cin, s1);
//     for (int i = 0; i < s1.length(); i++)
//         f[s1[i]]++;
//     // for (int i = 0; i < s1.length(); i++)
//     //     cout << f[s1[i]] << "\t";
//     cin >> t;
//     while (t--)
//     {
//         cin >> q;
//         flag = 1;
//         if (q == 1)
//         {
//             cin >> idx >> c;
//             f[s1[idx - 1]]--;
//             f[c]++;
//             s1.replace(idx - 1, 1, 1, c);
//         }
//         else if (q == 2)
//         {
//             cin.ignore();
//             getline(cin, s2);
//             copy(f, f + 123, f2);
//             for (int i = 0; i < s2.length(); i++)
//             {

//                 f2[s2[i]] -= 1;
//                 // cout << "\n"
//                 //      << f[s2[i]] << "\n";
//                 if (!(f2[s2[i]] >= 0))
//                 {
//                     flag = 0;
//                     break;
//                 }
//             }
//             if (flag)
//                 cout << "YES\n";
//             else
//                 cout << "NO\n";
//         }
//         // cout << s1 << "\n";
//     }
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int t, q, idx, flag = 1;
//     char c;
//     string s1, s2;
//     int f[123] = {};
//     getline(cin, s1);
//     for (int i = 0; i < s1.length(); i++)
//         f[s1[i]]++;
//     // for (int i = 0; i < s1.length(); i++)
//     //     cout << f[s1[i]] << "\t";
//     cin >> t;
//     while (t--)
//     {
//         cin >> q;
//         flag = 1;
//         fill(f, f + 123, 0);
//         for (int i = 0; i < s1.length(); i++)
//             f[s1[i]]++;
//         if (q == 1)
//         {
//             cin >> idx >> c;
//             s1.replace(idx - 1, 1, 1, c);
//         }
//         else if (q == 2)
//         {
//             cin.ignore();
//             getline(cin, s2);
//             for (int i = 0; i < s2.length(); i++)
//             {
//                 f[s2[i]] -= 1;
//                 // cout << "\n"
//                 //      << f[s2[i]] << "\n";
//                 if (!(f[s2[i]] >= 0))
//                 {
//                     flag = 0;
//                     break;
//                 }
//             }
//             if (flag)
//                 cout << "YES\n";
//             else
//                 cout << "NO\n";
//         }
//         // cout << s1 << "\n";
//     }
// }

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int n, t, r, l;
//     cin >> n >> t;
//     int arr[n];
//     long long sumA[n], xorA[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (i)
//         {
//             sumA[i] = sumA[i - 1] + arr[i];
//             xorA[i] = xorA[i - 1] ^ arr[i];
//         }
//         else
//         {
//             sumA[i] = arr[i];
//             xorA[i] = arr[i];
//         }
//         // cout << sumA[i] << "\t" << sumI[i] << "\n";
//     }

//     while (t--)
//     {
//         cin >> l >> r;
//         l--;
//         r--;
//         if (((sumA[r] - ((l > 0) * sumA[l - 1])) & (xorA[r] ^ ((l > 0) * xorA[l - 1]))) % 2)
//             cout << "ODD" << "\n";
//         else
//             cout << "EVEN" << "\n";

//         // cout << sumA[r] << "\t" << (sumA[l - 1] * (l > 0)) << "\t" << sumI[r - l + 1] << "\n";
//     }
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int n, m, flag = 1;
//     cin >> n >> m;
//     int arr[n], day[m], f[(int)1e9] = {};
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         f[arr[i]]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << "\t";
//         cout << f[arr[i]] << "\n";
//     }
//     // for (int j = 0; j < m; j++)
//     // {
//     //     cin >> day[j];
//     //     f[day[j]]--;
//     //     if (f[day[j]] < 0)
//     //         flag = 0;
//     // }
//     if (flag)
//         cout << "Yes";
//     else
//         cout << "No";
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int n, m;
//     cin >> n >> m;
//     char arr[n][m];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < m; j++)
//             cin >> arr[i][j];

//     for (int j = 0; j < m; j++)
//         if (j % 2)
//             for (int i = 0; i < n; i++)
//                 cout << arr[i][j];
//         else
//             for (int i = n - 1; i >= 0; i--)
//                 cout << arr[i][j];
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// bool found(int arr[], int n, int a)
// {
//     for (int i = 0; i < n; i++)
//         if (a == arr[i])
//             return 1;
//     return 0;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int g1[] = {1, 3, 5, 7, 8, 10, 12}, g2[] = {4, 6, 9, 11}, g3[] = {2};
//     int x, y;
//     cin >> x >> y;
//     if (found(g1, sizeof(g1) / sizeof(g1[0]), x) && found(g1, sizeof(g1) / sizeof(g1[0]), y) || found(g2, sizeof(g2) / sizeof(g2[0]), x) && found(g2, sizeof(g2) / sizeof(g2[0]), y) || found(g3, sizeof(g3) / sizeof(g3[0]), x) && found(g3, sizeof(g3) / sizeof(g3[0]), y))
//         cout << "Yes";
//     else
//         cout << "No";
// }
// getline(cin, s);
// cin >> t;

// Problem 3

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int t, q, idx;
//     char c;
//     string s, sub = "", maxsub = "";
//     getline(cin, s);
//     cin >> t;
//     while (t--)
//     {
//         cin >> q;
//         if (q == 1)
//         {
//             cin >> idx >> c;
//             s.replace(idx - 1, 1, 1, c);
//         }
//         else if (q == 2)
//         {
//             sub = s[0];
//             maxsub = "";
//             for (int i = 1; i < s.length(); i++)
//             {
//                 if (i == s.length() - 1 && s[i] - s[i - 1] == 1)
//                 {
//                     sub.append(1, s[i]);
//                     maxsub = (maxsub.length() < sub.length()) ? sub : maxsub;
//                     break;
//                 }

//                 if (s[i] - s[i - 1] != 1)
//                 {
//                     maxsub = (maxsub.length() < sub.length()) ? sub : maxsub;
//                     sub = "";
//                 }
//                 sub.append(1, s[i]);
//             }

//             cout << maxsub.length() << "\n";
//         }
//     }
//     // cout << s;
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int n, x, p = 1;
//     cin >> n >> x;

//     while (p <= n)
//     {
//         cout << p << " ";
//         p += x;
//     }
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     string s;
//     int n;
//     cin >> n;
//     cin.ignore();
//     getline(cin, s);

//     if (n < 27)
//     {
//         cout << "NO";
//         return 0;
//     }

//     int f[123] = {};
//     for (int i = 0; i < s.length(); i++)
//     {
//         f[(s[i] < 97) ? (s[i] + 32) : s[i]] = 1;
//     }
//     for (int i = 97; i < 123; i++)
//     {
//         if (f[i] == 0)
//         {
//             cout << "NO";
//             return 0;
//         }
//     }
//     cout << "YES";
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     string s;
//     int count = 0;
//     int f[123] = {};
//     getline(cin, s);
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (f[s[i]] == 0)
//             count++;
//         f[s[i]] = 1;
//     }
//     if (count % 2)
//         cout << "IGNORE HIM!";
//     else
//         cout << "CHAT WITH HER!";
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     // int n, t, r, l, sum_a, sum_i;
//     // cin >> n;
//     // int arr[n];
//     // long long count[n];

//     // ------------------------------------
//     int n, q, x;
//     cin >> n >> q;
//     int arr[n];
//     int f[(int)1e5 + 1] = {};
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         f[arr[i]]++;
//     }

//     while (q--)
//     {
//         cin >> x;
//         cout << f[x] << "\n";
//     }
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int n, t, r, l, sum_a, sum_i;
//     cin >> n;
//     int arr[n];
//     long long sumA[n], sumI[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (i)
//         {
//             sumA[i] = sumA[i - 1] + arr[i];
//             sumI[i] = sumI[i - 1] + i + 1;
//         }
//         else
//         {
//             sumA[i] = arr[i];
//             sumI[i] = i + 1;
//         }
//         // cout << sumA[i] << "\t" << sumI[i] << "\n";
//     }
//     cin >> t;
//     while (t--)
//     {
//         cin >> l >> r;
//         l--;
//         r--;
//         // cout << sumA[r] << "\t" << (sumA[l - 1] * (l > 0)) << "\t" << sumI[r - l + 1] << "\n";
//         cout << (sumA[r] - (sumA[l - 1] * (l > 0))) + sumI[r - l] << "\n";
//     }
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int n, m, si, sj, ei, ej;
//     cin >> n >> m;
//     char arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//             if (arr[i][j] == 'S')
//             {
//                 si = i;
//                 sj = j;
//             }
//         }
//     }
//     while (arr[si][sj] != 'E')
//     {
//         arr[si][sj] = '#';
//         if (si > 0 && arr[si - 1][sj] == '.' || arr[si - 1][sj] == 'E')
//         {
//             si--;
//             cout << 'U';
//         }
//         else if (si < n - 1 && arr[si + 1][sj] == '.' || arr[si + 1][sj] == 'E')
//         {
//             si++;
//             cout << 'D';
//         }
//         else if (sj > 0 && arr[si][sj - 1] == '.' || arr[si][sj - 1] == 'E')
//         {
//             sj--;
//             cout << 'L';
//         }
//         else if (sj < m - 1 && arr[si][sj + 1] == '.' || arr[si][sj + 1] == 'E')
//         {
//             sj++;
//             cout << 'R';
//         }
//     }
// }

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int n, m, si, sj;
//     cin >> n >> m;
//     char arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//             if (arr[i][j] == 'S')
//             {
//                 si = i;
//                 sj = j;
//             }
//         }
//     }
//     while (arr[si][sj] != 'E')
//     {
//         arr[si][sj] = '#';
//         if (arr[si - 1][sj] == '.' || arr[si - 1][sj] == 'E')
//         {
//             si--;
//             printf("U");
//         }
//         else if (arr[si + 1][sj] == '.' || arr[si + 1][sj] == 'E')
//         {
//             si++;
//             printf("D");
//         }
//         else if (arr[si][sj - 1] == '.' || arr[si][sj - 1] == 'E')
//         {
//             sj--;
//             printf("L");
//         }
//         else if (arr[si][sj + 1] == '.' || arr[si][sj + 1] == 'E')
//         {
//             sj++;
//             printf("R");
//         }
//     }
// }

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     long long n, m, x;
//     int flag = 1;
//     cin >> n >> m >> x;
//     char arr[n][m];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < m; j++)
//             cin >> arr[i][j];

//     while (x--)
//     {
//         flag = 1;

//         for (int i = n - 1; i >= 0; i--)
//         {
//             for (int j = m - 1; j >= 0; j--)
//             {
//                 if (i)
//                     if (arr[i][j] == '.' && arr[i - 1][j] == 'B')
//                     {
//                         swap(arr[i][j], arr[i - 1][j]);
//                         flag = 0;
//                     }
//                 // if ._° & B_↑ → B
//             }
//         }
//         if (flag)
//             break;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//             cout << arr[i][j];
//         cout << "\n";
//     }
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     long long n, sum = 0;
//     cin >> n;
//     long long arr[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//             if (j == 0 || j == n - 1 || (i == j && i <= n / 2) || (i == n - 1 - j && i <= n / 2))
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }
//     cout << sum;
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string.h>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int n, m;
//     cin >> n >> m;
//     int arr[n + 1][m + 1];
//     memset(arr, 0, sizeof(arr));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//             arr[i][m] += arr[i][j];
//             arr[n][m] = max(arr[i][m], arr[n][m]);
//             arr[n][j] += arr[i][j];
//             arr[n][m] = max(arr[n][j], arr[n][m]);
//         }
//     }
//     cout << arr[n][m];
// }
// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;
// constexpr auto nf = string::npos;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int t;
//     cin >> t;
//     // scanf(" ");
//     cin.ignore();
//     string s;
//     while (t--)
//     {
//         getline(cin, s);
//         if (s.find("00") != nf || s.find("11") != nf)
//             cout << "Bad" << "\n";
//         else
//             cout << "Good" << "\n";
//     }
// }
