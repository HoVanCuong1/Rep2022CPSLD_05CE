
// thuật toán sắp xếp shell sort
void shellSort(arr[]) {  // arr: mảng đầu vào
    interval = 1; // khoảng cách giữa 2 phần tử bắt đầu từ 1
    while(interval < arr.length/3) { // tìm khoảng cách lớn nhất giữa hai phần tử
        interval = interval * 3 + 1; // thỏa mãn 
    }
    while (interval > 0) { // thực hiện chừng nào interval còn lớn hơn 0
        for(outer = interval; outer < arr.length; outer++) {
            valueToInsert = arr[outer]; // lấy phần tử cần chèn
            inner = outer;
            while(inner > interval - 1 && arr[inner - interval] >= valueToInsert) {
                arr[inner] = arr[inner - interval]; // tráo đổi cặp phần tử ở khoảng cách interval
                inner = inner - interval; // đưa inner về vị trí phần tử cách nó 1 đoạn interval
            }
            arr[inner] = valueToInsert;  // cập nhật phần tử tại vị trí đầu bên trái
        }
        interval = (interval - 1)/3; // cập nhật khoảng cách giữa cặp phần tử kế tiếp
    }
}

