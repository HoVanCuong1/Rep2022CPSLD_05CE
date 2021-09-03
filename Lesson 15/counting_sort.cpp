
// thuật toán counting sort
function[] countingSort(input[]) { // input: mảng input
    n = input.length; // lấy số phần tử mảng
    k = max(input); // tìm phần tử có giá trị max trong mảng
    count[] = new [k + 1]; // tạo mảng count có k + 1 phần tử
    output = new [n]; // tạo mảng output có n phần tử

    for(i = 0; i < n; i++) { // đếm số lần xuất hiện của 
        j = input[i]; // phần tử tại vị trí i trong mảng input
        count[j] += 1; // tăng biến đếm tại vị trí j lên 1
    }

    for(i = 1; i <= k; i++) { // tính tổng tiền tố cho p.tử vị trí i
        count[i] += count[i-1]; 
    }
    // đưa các phần tử vào đúng vị trí của nó
    for(i = n - 1; i >= 0; i--) {
        j = input[i]; // lấy phần tử tại vị trí i của mảng input
        count[j] -= 1; // giảm biến đếm của nó đi 1
        output[count[j]] = input[i]; // gán phần tử vào vị trí
    }
    return output;
}

