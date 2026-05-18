/*Bài toán: Bot Tự Động Nhặt Vật Phẩm (Auto-Bot Navigation)
Mô tả:Bạn đang lập trình logic di chuyển cho một con bot trên một bản đồ game. 
Bản đồ là một lưới 2 chiều (mảng 2 chiều) có kích thước $N \times M$ (N hàng, M cột). 
Các ô trên bản đồ được đánh dấu bằng các số nguyên
0: Đường đi trống, bot có thể di chuyển vào.
1: Vật cản (đá, tường), bot không thể đi qua.
2: Vật phẩm (coin/item). Khi đi vào ô này, bot nhặt vật phẩm (biến ô đó thành 0) và điểm cộng thêm 
1.Bot bắt đầu tại vị trí tọa độ $(x, y)$ (với $x$ là chỉ số hàng, $y$ là chỉ số cột, tính từ 0). 
Hệ thống truyền cho bot một chuỗi các lệnh di chuyển bao gồm các ký tự:
U (Up - Lên trên): Hàng giảm 1.D (Down - Xuống dưới): Hàng tăng 1.L (Left - Sang trái): Cột giảm 1.R (Right - Sang phải): Cột tăng 
1.Quy tắc di chuyển:Nếu lệnh di chuyển đưa bot đâm vào tường (ô 1) hoặc vượt ra ngoài ranh giới của bản đồ, lệnh đó bị bỏ qua, bot đứng im tại chỗ và chờ thực hiện lệnh tiếp theo.
Yêu cầu:Viết chương trình đọc vào bản đồ, vị trí bắt đầu và chuỗi lệnh. In ra tọa độ cuối cùng của bot và tổng số vật phẩm bot đã nhặt được.
Đầu vào (Input):Dòng 1: Hai số nguyên $N$ và $M$ ($1 \le N, M \le 100$).Dòng 2: Hai số nguyên $x, y$ là tọa độ xuất phát của bot (đảm bảo ô xuất phát không phải là 1)
.$N$ dòng tiếp theo: Mỗi dòng chứa $M$ số nguyên (0, 1 hoặc 2) biểu diễn bản đồ.
Dòng cuối cùng: Một chuỗi ký tự $S$ biểu diễn các lệnh di chuyển (độ dài không quá 1000 ký tự).Đầu ra (Output):
In ra một dòng duy nhất theo định dạng: Toa do cuoi: (X, Y) - Tong vat pham: K. Trong đó X, Y là vị trí kết thúc, K là số vật phẩm nhặt được
.Ví dụ:Input:
4 5
0 0
0 2 0 1 0
1 0 2 1 2
0 0 0 0 0
2 1 1 2 0
R R D D L U
Output:PlaintextToa do cuoi: (1, 1) - Tong vat pham: 2
Giải thích ví dụ:Vị trí ban đầu: (0, 0)R: Sang phải -> (0, 1). Nhặt được vật phẩm (Tổng = 1). Ô (0, 1) biến thành 0.R: Sang phải -> (0, 2). Đường trống.D: Xuống dưới -> (1, 2). Nhặt được vật phẩm (Tổng = 2). Ô (1, 2) biến thành 0.D: Xuống dưới -> (2, 2). Đường trống.L: Sang trái -> (2, 1). Đường trống.U: Lên trên -> (1, 1). Đường trống.(Vị trí kết thúc: 1, 1 và nhặt được 2 vật phẩm).*/
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int m,n,x_ini,y_ini,x,y;
    cin>>m,n;
    int a[m][n];
    cin>>x_ini>>y_ini;
    for (auto &i:a){
        for (int j:i){
            cin>>j;
        }
    }
    char move[100];
    cin.ignore();
    getline(cin,move[100]);
    return 0;
}