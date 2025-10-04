#include <iostream>
using namespace std;

// void myfunction() {
//     int a,b;
//     cin>>a>>b;
//     cout<<a*b;
// }
//
// int main() {
//     myfunction();
//     return 0;
// }

// void acc() {
//     int a,b,t;
//     cin>>a>>b>>t;
//     cout<<(b-a)/t<<endl;
// }
//
// int main() {
//     acc();
//     return 0;
// }



// void fun() {
//     int r;
//     float pi=3.141592653589;
//     cin>>r;
//     cout<<"Circumferance"<<2*pi*r<<endl;
//     cout<<'Area'<<pi*r*r<<endl;
// }
//
// int main() {
//     fun();
//     return 0;
// }

// // Problem 4
// #include <iostream>
// using namespace std;
//
// float boko(float a, float b) { return a * b; }
// int boko(int a, int b) { return 2 * (a + b); }
//
// int main() {
//     int x, y;
//     cin >> x >> y;
//     cout << boko(x, y) << endl;
//     cout << boko((float)x, (float)y) << endl;
//     return 0;
// }
//
// // Problem 5
// #include <iostream>
// using namespace std;
//
// void nifa(int a, int b) {
//     int c = a + b;
//     a = c - a;
//     b = c - b;
//     cout << a << " " << b << endl;
// }
//
// int main() {
//     int x, y;
//     cin >> x >> y;
//     nifa(x, y);
//     return 0;
// }
//
// // Problem 6
// #include <iostream>
// using namespace std;
//
// int tari(int x = 1) { return x; }
//
// int main() {
//     cout << tari();
//     return 0;
// }
//
// // Problem 7
// #include <iostream>
// using namespace std;
//
// long long laru(long long a, long long b) {
//     if (b == 0) return a;
//     else return laru(b, a % b);
// }
//
// int main() {
//     long long x, y;
//     cin >> x >> y;
//     cout << "gcd is " << laru(x, y);
//     return 0;
// }
//
// // Problem 8
// #include <iostream>
// using namespace std;
//
// long long rino(long long a, long long b, long long c) {
//     if (a >= b && a >= c) return a;
//     else if (b >= c && b >= a) return b;
//     else return c;
// }
//
// int main() {
//     long long x, y, z;
//     cin >> x >> y >> z;
//     cout << "max num is " << rino(x, y, z);
//     return 0;
// }
//
// // Problem 9
// #include <iostream>
// using namespace std;
//
// long long mibo(long long a, long long b) { return a + b; }
// long long felo(long long a, long long b) { return a - b; }
// long long zuri(long long a, long long b) { return a * b; }
// long long soko(long long a, long long b) { return a / b; }
//
// int main() {
//     long long x, y;
//     cin >> x >> y;
//     cout << "sum " << mibo(x, y) << "\n";
//     cout << "subtract " << felo(x, y) << "\n";
//     cout << "product " << zuri(x, y) << "\n";
//     cout << "division " << soko(x, y) << "\n";
//     return 0;
// }
//
// // Problem 10
// #include <iostream>
// using namespace std;
//
// int juno(int n = 72) {
//     for (int i = 1; i <= 72; i++) {
//         cout << i * (i + 1) / 2 << " ";
//         if (i % 5 == 0) cout << endl;
//     }
//     return 0;
// }
//
// int main() {
//     juno();
//     return 0;
// }
//
// // Problem 11
// #include <iostream>
// #include <string>
// using namespace std;
//
// void pira(int n) {
//     string s = to_string(n);
//     for (int i = 0; i < s.size(); i++) {
//         if ((s[i] - '0') % 2 == 0 && s[i] != '0') cout << s[i];
//     }
// }
//
// int main() {
//     int x;
//     cin >> x;
//     pira(x);
//     return 0;
// }
//
// // Problem 12
// #include <iostream>
// #include <cmath>
// #include <string>
// using namespace std;
//
// int nemo(int x) {
//     string s = to_string(x);
//     int sum = 0;
//     for (int i = 0; i < s.size(); i++) sum += pow(s[i] - '0', 3);
//     return sum;
// }
//
// void rafi(int sum, int x) {
//     if (sum == x) cout << "armstrong";
//     else cout << "it is not armstrong";
// }
//
// int main() {
//     int x;
//     cin >> x;
//     rafi(nemo(x), x);
//     return 0;
// }
//
// // Problem 13
// #include <iostream>
// using namespace std;
//
// int fenu(int y) {
//     if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) return 29;
//     else return 28;
// }
//
// int main() {
//     for (int y = 1985; y <= 1993; y++) cout << y << " " << fenu(y) << endl;
//     return 0;
// }
//
// // Problem 14
// #include <iostream>
// #include <cmath>
// using namespace std;
//
// double mavi(double a, double r, int y) { return a * pow(1 + r, y * 12); }
//
// int main() {
//     double a, r;
//     int y;
//     cin >> a >> r >> y;
//     double mr = r / 1200;
//     cout << mavi(a, mr, y);
//     return 0;
// }
//
// // Problem 15
// #include <iostream>
// using namespace std;
//
// void zeko(char f, char s) {
//     int d = 1;
//     for (int i = f; i <= s; i++) {
//         cout << char(i) << " ";
//         if (d % 5 == 0) cout << endl;
//         d++;
//     }
// }
//
// int main() {
//     char x, y;
//     cin >> x >> y;
//     zeko(x, y);
//     return 0;
// }
//
// // Problem 16
// #include <iostream>
// using namespace std;
//
// void doro(int f) {
//     for (int i = 0; i <= f; i++) {
//         for (int j = 0; j <= f; j++) cout << j << " ";
//         cout << endl;
//     }
// }
//
// int main() {
//     int x;
//     cin >> x;
//     doro(x);
//     return 0;
// }
//
// // Problem 19
// #include <iostream>
// using namespace std;
//
// void lino(double a, double b, double c) {
//     double arr[] = {a, b, c};
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 2 - i; j++)
//             if (arr[j] > arr[j + 1]) {
//                 double t = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = t;
//             }
//     for (int i = 0; i < 3; i++) cout << arr[i] << " ";
//     cout << endl;
// }
//
// int main() {
//     double a, b, c;
//     cin >> a >> b >> c;
//     lino(a, b, c);
//     return 0;
// }
//
// // Problem 20
// #include <iostream>
// #include <string>
// using namespace std;
//
// string kero(long m) {
//     long s = m / 1000;
//     long sec = s % 60;
//     long tm = s / 60;
//     long min = tm % 60;
//     long hr = tm / 60;
//     return to_string(hr) + ":" + to_string(min) + ":" + to_string(sec);
// }
//
// int main() {
//     long x;
//     cin >> x;
//     cout << kero(x);
//     return 0;
// }
