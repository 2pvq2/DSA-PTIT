#include <bits/stdc++.h>
using namespace std;
int n, m;

set<int> adj[1001];
void nhap()  //hàm nhập dữ liệu
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].insert(y); //nhập ma trận có hướng theo danh sách kề
  
    }
}
void euler(int v) //hàm tìm chu trình euler
{
    stack<int> st;  
    vector<int> EC; //vector kết quả 
    st.push(v);     // đưa đỉnh đầu tiên để tìm kiếm
    while (!st.empty())  //chừng nào chưa xét hết các cạnh 
    {
        int x = st.top(); // đưa đỉnh cần xét vào ngăn xếp
        if (adj[x].size() != 0)  //kiểm tra xem đã xét hết các cạnh của đỉnh chưa
        {
            int y= *adj[x].begin(); //chọn đỉnh kề đầu tiên với đỉnh đã xét
            st.push(y);
            adj[x].erase(y);
            // xóa cạnh đã xét
        }
        else
        {
            st.pop(); //nếu đã xét hết các cạnh của đỉnh
            EC.push_back(x); //đưa đỉnh đã xét hết các cạnh vào vector kết quả
        }
    }
    reverse(begin(EC),end(EC)); // đảo ngược lại vector để đúng thứ tự đường đi
    for (int x : EC)
        cout << x  << ' '; // in ra kết quả
}
int main()
{
    nhap();
    euler(1);
}