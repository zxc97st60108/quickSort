// quickSort.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <stdio.h>
#include <iostream>
int quickSort(int A[], int p, int q );
int Partition(int A[], int p, int q);
void swap(int *x,int *y);
int quickSort(int A[],int p,int q)
{
	int r = 0;
	if (p < q) {
		r = Partition(A, p, q);
		quickSort(A, p, r - 1);
		quickSort(A, r + 1, q);
		
	}
	return 0;
}
int Partition(int A[], int p, int q)
{
	int x = A[q];
	int i = p - 1;
	for (int j = p;j <= q - 1;j++)
	{
		if (A[j] <= x)
		{
			i++;
			swap(&A[i], &A[j]);
		}
	}
	swap(&A[q], &A[i + 1]);
	return (i + 1);
}
void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int A[] = { 5,61,2,97,46,74 };
	int q = sizeof(A) / sizeof(A[0]);
	quickSort(A, 0, q-1);
	for (int i = 0;i < q;i++)
		printf("%d, ",A[i]);
}


// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
