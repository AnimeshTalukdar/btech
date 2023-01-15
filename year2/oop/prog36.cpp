#include<iostream>
using namespace std;
class Table {
private:
int rows, cols;
int** data;
public:
Table(int r, int c) : rows(r), cols(c) {
data = new int*[rows];
for (int i = 0; i < rows; i++) {
data[i] = new int[cols];
}
}

~Table() {
for (int i = 0; i < rows; i++) {
delete[] data[i];
}
delete[] data;
}


int* operator[](int i) {
return data[i];
}


friend std::istream& operator>>(std::istream& in, Table& t) {
for (int i = 0; i < t.rows; i++) {
for (int j = 0; j < t.cols; j++) {
in >> t.data[i][j];
}
}
return in;
}
friend std::ostream& operator<<(std::ostream& out, const Table& t) {
for (int i = 0; i < t.rows; i++) {
for (int j = 0; j < t.cols; j++) {
out << t.data[i][j] << " ";
}
out << std::endl;
}
return out;
}

Table& operator=(const Table& t) {
if (this != &t) {
if (rows != t.rows || cols != t.cols) {

for (int i = 0; i < rows; i++) {
delete[] data[i];
}
delete[] data;
rows = t.rows;
cols = t.cols;
data = new int*[rows];
for (int i = 0; i < rows; i++) {
data[i] = new int[cols];
}
}
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
data[i][j] = t.data[i][j];
}
}
}
return *this;
}
};
int main()
{
Table t(4, 5), t1(4, 5);
cin >> t;
t[0][0] = 5;
int x = t[2][3];
t1 = t;
cout << t << "\n" << t1;

}
