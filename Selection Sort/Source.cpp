#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
	int min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i; j < n; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
}

int main() {
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr) / sizeof(int);
	selection_sort(arr, n);

	for (int x : arr) {
		cout << x << " ";
	}
}