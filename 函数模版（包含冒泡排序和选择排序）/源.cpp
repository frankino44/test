#include<iostream>

using namespace std;

template<typename T>
void mySwap(T charArr[],int len) {
	for(int i=0;i<len;i++)
		for (int j = 0; j <len-i; j++) {
			if (charArr[j] < charArr[j + 1]) {
				T temp = charArr[j];
				charArr[j] = charArr[j + 1];
				charArr[j + 1] = temp;
			}
		}
}
template<typename T>
void mySwap1(T charArr[], int len) {
	for (int i = 0; i < len; i++) {
		int max = i;
		for (int j = i + 1; j < len; j++) {
			if (charArr[max]<charArr[j]) {
				max = j;
			}
		}
		if (max != i) {
			T temp = charArr[i];
			charArr[i] = charArr[max];
			charArr[max] = temp;
		}

	}
}


template<class T>
void printArr(T arr[],int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
}
int main() {
	char charArr[] = "badcfe";

	 mySwap1<char>(charArr, sizeof(charArr) / sizeof(charArr[0]));

	 printArr<char>(charArr, sizeof(charArr) / sizeof(charArr[0]));
	
	 int Intarr[] = { 1,2,3,4,5 };

	 int len = sizeof(Intarr) / sizeof(Intarr[0]);

	 mySwap1<int>(Intarr, len);
	 printArr<int>(Intarr, len);
	return 0;
}