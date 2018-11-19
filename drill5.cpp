 #include "std_lib_facilities.h"
 #include <string.h>
 
int main()
try {
//1.
cout << "Success!\n";

//2. 
cout << "Success!\n";

//3. 
cout << "Success" << "!\n";

//4. 
cout << "Success!" << "\n";

//5. 
int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";

//6.
vector<int> v0(10); v0[5] = 7; if (v0[5]==7) cout << "Success!\n";

//7. 
bool cond=true; if (cond) cout << "Success!\n"; else cout << "Fail!\n";

//8. 
bool c0 = true; if (c0) cout << "Success!\n"; else cout << "Fail!\n";

//9. 
string s = "ape"; bool c = true; if (c) cout << "Success!\n";

//10. 
string s1 = "ape"; if (s1=="ape") cout << "Success!\n";

//11. 
string s2 = "ape"; if (s2!="fool") cout << "Success!\n";

//12. 
string s3 = "ape"; if (s3!="fool") cout << "Success!\n";

//13. 
vector<char> v7(5); for (int i=0; i<v7.size(); ++i) ; cout << "Success!\n";

//14. 
vector<char> v1(5); for (int i=0; i<=v1.size(); ++i) ; cout << "Success!\n";

//15. 
string s4 = "Success!"; for (int i=0; i<8; ++i) cout << s4[i];cout<<"\n";

//16. 
if (true) cout << "Success!\n"; else cout << "Fail!\n";

//17. 
int x = 2000; int c1 = x; if (c1==2000) cout << "Success!\n";

//18. 
string s5 = "Success!"; for (int i=0; i<8; ++i) cout << s5[i];cout<<"\n";

//19. 
vector<int> v2(5); for (int i=0; i<=v2.size(); ++i) ; cout << "Success!\n";

//20. 
int i=0; int j = 9; while (i<15) ++i; if (j<i) cout << "Success!\n";

//21. 
int x1 = 3; double d1 = 5/(x1-2); if (d1==2*x1-1) cout << "Success!\n";

//22. 
string s6 = "Success!"; for (int i1=0; i1<=7; ++i1) cout << s6[i1];cout<<"\n";

//23. 
int i2=0,j2=1; while (i2<10) ++i2; if (j2<i2) cout << "Success!\n";

//24. 
int x2 = 4; double d2 = 5/(x2-2); if (d2!=2*x2+0.5) cout << "Success!\n";

//25.
cout << "Success!\n";

          keep_window_open();
          return 0;
}
catch (exception& e) {
          cerr << "error: " << e.what() << '\n';
          keep_window_open();
          return 1;
}
catch (...) {
          cerr << "Oops: unknown exception!\n";
          keep_window_open();
          return 2;
}