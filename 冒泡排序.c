#include <stdio.h>

void bubbleSort(int arr[], int n) {
int i, j, temp;
for (i = 0; i < n - 1; i++) {
for (j = 0; j < n - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
// 交换元素
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}

int main() {
int arr[5];
int i;

// 输入数组
for (i = 0; i < 5; i++) {
scanf("%d", &arr[i]);
}

// 调用冒泡排序函数
bubbleSort(arr, 5);

// 输出排序结果
for (i = 0; i < 5; i++) {
printf("%d ", arr[i]);
}

return 0;
}

