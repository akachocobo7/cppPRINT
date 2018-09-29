#include <iostream>
#include <vector>
//#include <string> 
//#include <map>
//#include <set>

using namespace std;

template <class T>ostream &operator<<(ostream &o, const vector<T>&obj) {
	o << "{"; for (int i = 0; i < (int)obj.size(); ++i)o << (i > 0 ? ", " : "") << obj[i]; o << "}"; return o;
}

template <class T, class U>ostream &operator<<(ostream &o, const pair<T, U>&obj) {
	o << "{" << obj.first << ", " << obj.second << "}"; return o;
}

template <template <class tmp>  class T, class U> ostream &operator<<(ostream &o, const T<U> &obj) {
	o << "{"; for (auto itr = obj.begin(); itr != obj.end(); ++itr)o << (itr != obj.begin() ? ", " : "") << *itr; o << "}"; return o;
}

void print(void) {
	cout << endl;
}

template <class Head> void print(Head&& head) {
	cout << head;
	print();
}

template <class Head, class... Tail> void print(Head&& head, Tail&&... tail) {
	cout << head << " ";
	print(forward<Tail>(tail)...);
}


int main() {
	cout << "ok???" << endl;

	/*string s = "print";
	vector<double> v(5, 7.3);*/
	vector<vector<int>> vv(2, vector<int>(3, 8));
	print(vv);

	/*map<string, int> mp;
	mp["two"] = 2;
	mp["seven"] = 7;
	mp["ten"] = 10;
	mp["three"] = 3;

	set<int> st;
	st.insert(1);
	st.insert(5);
	st.insert(324);
	st.insert(34);

	vector<map<int, int>> vmp(4);
	vmp[0][2] = 9;
	vmp[1][5] = 3;
	vmp[3][1] = 3;
	vmp[1][6] = 2;

	print(s, v);
	print(vv);
	print();
	print(mp, st, vmp);*/

	int N;
	cin >> N;

	return 0;
}

