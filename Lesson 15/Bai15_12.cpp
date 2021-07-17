#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n <= 0) {
		cout << "INVALID" << endl;
	}
	else {
		// đảo số n, sau đó lần lượt tách lấy phần đơn vị rồi in ra
		// đảo n:, ví dụ n = 100 => 1001 => in ra 0 0 1
		// n = 253 => 352 => in ra 3 5 2
		// 
		// nếu đuôi có số 0, ta thêm số 1 vào trước
		int reverseN = (n % 10 == 0) ? 1 : 0; // khởi tạo giá trị cho n đảo
		bool endWith0 = (reverseN == 0) ? false : true; // biến đánh dấu kết thúc n bằng số 0
		for (int i = n; i > 0; i /= 10)
		{
			reverseN = reverseN * 10 + i % 10;
		}
		// tiến hành in ra các chữ số của n đảo từ chữ số cuối lên chữ số đầu
		int bound = endWith0 ? 9 : 0; // nếu n kết thúc bằng chữ số 0
		// ta chỉ in ra các chữ số của n đảo trừ chữ số đầu tiên
		for (int i = reverseN; i > bound; i /= 10)
		{
			cout << i % 10 << " ";
		}
		cout << endl;
	}
	return 0;
}