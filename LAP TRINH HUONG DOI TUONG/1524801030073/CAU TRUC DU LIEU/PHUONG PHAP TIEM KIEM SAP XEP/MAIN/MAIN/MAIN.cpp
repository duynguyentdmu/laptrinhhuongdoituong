#include <iostream>
#define max 100
using namespace std;
void nhapmang(int m[], int n)
{
	cout << "   == VUI LONG NHAP MANG == \n";
	for (int i = 0; i < n; i++)
	{
		cout <<"\tNHAP PHAN TU THU "<< "[" << i << "]=";
		cin >> m[i];
	}
}
void xuatmang(int m[], int n)
{
	cout << "-------";
	cout << "\n   == XUAT MANG == \n\t";
	for (int i = 0; i < n; i++)
	{
		cout << m[i] << "  ";
	}
	cout << endl;
}
void InterchangeSort(int m[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (m[i]>m[j])
			{
				int temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
}
void SelectionSort(int m[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int vt = i;
		for (int j = i; j < n; j++)
			if (m[j] < m[vt]) vt = j;
		swap(m[i], m[vt]);
	}
}
void BubbleSort(int m[], int n);
void InsertionSort(int m[], int n);
void MergeSort(int m[], int n);
void QuickSort(int m[], int l, int r);
void ShellSort(int m[], int n);
void HeapSort(int m[], int n);

int main()
{
	int a[max], n, chon, b[max];
	cout << "\t---------------------------------";
	cout << "\n\t == CAC PHUONG PHAP SAP XEP ==";
	cout << "\n\t---------------------------------\n";
	cout << "\n   NHAP SO PHAN TU CUA MANG : ";
	cin >> n;
	cout << "\n";
	nhapmang(a, n);
	xuatmang(a, n);
	do
	{
		for (int i = 0; i < n; i++)
			b[i] = a[i];
		cout << "\n--------- CAC PHUONG PHAP SAP XEP ----------" << endl;
		cout << "\n1. Interchange sort.             6. Quick sort.\n";
		cout << "2. Selection sort.               7. Shell sort.\n";
		cout << "3. Bubble sort.                  8. Heap sort.\n";
		cout << "4. Insertion sort.               0. Thoat.\n";
		cout << "5. Merge sort.";
		cout << "\n\n\tVUI LONG CHON CHUC NANG CAN THUC HIEN : ";
		cin >> chon;
		switch (chon)
		{
		case 0:
			return 0;
		case 1:
			InterchangeSort(b, n);
			break;
		case 2:
			SelectionSort(b, n);
			break;
		case 3:
			BubbleSort(b, n);
			break;
		case 4:
			InsertionSort(b, n);
			break;
		case 5:
			MergeSort(b, n);
			break;
		case 6:
			QuickSort(b, 0, n - 1);
			break;
		case 7:
			ShellSort(b, n);
			break;
		case 8:
			HeapSort(b, n);
			break;
		default:
			cout << " == NHAP SAI! VUI LONG NHAP LAI GIA TRI DUNG! == \n";
		}
		xuatmang(b, n);
		system("pause");
	} while (chon != 0);
}

void BubbleSort(int m[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int j = n - 1;
		while (j > i)
		{
			if (m[j] < m[i]) swap(m[i], m[j]);
			j--;
		}
	}
}
void InsertionSort(int m[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int x = m[i], pos = -1;
		for (int j = 0; j < i; j++)
			if (m[i] < m[j])
			{
				pos = j;
				break;
			}
		if (pos != -1)
		{
			for (int z = i; z > pos; z--)
				m[z] = m[z - 1];
			m[pos] = x;
		}
	}
}
void MergeSort(int m[], int n)
{
	int i, j, k, low1, up1, low2, up2, size;
	int dstam[max];
	size = 1;
	while (size < n)
	{
		low1 = 0;
		k = 0;
		while (low1 + size < n)
		{
			low2 = low1 + size;
			up1 = low2 - 1;
			up2 = (low2 + size - 1) < n ? low2 + size - 1 : n - 1;
			for (i = low1, j = low2; i <= up1 && j <= up2; k++)
				if (m[i] <= m[j]) dstam[k] = m[i++];
				else dstam[k] = m[j++];
				for (; i <= up1; k++)
					dstam[k] = m[i++];
				for (; j <= up2; k++)
					dstam[k] = m[j++];
				low1 = up2 + 1;
		}
		for (i = low1; k < n; i++)
			dstam[k++] = m[i];
		for (i = 0; i < n; i++)
			m[i] = dstam[i];
		size *= 2;
	}
}
void QuickSort(int m[], int l, int r)
{
	int i, j, x;
	x = m[(l + r) / 2];
	i = l;
	j = r;
	do
	{
		while (m[i] < x) i++;
		while (m[j] > x) j--;
		if (i <= j)
		{
			if (i<j)
				swap(m[i], m[j]);
			i++;
			j--;
		}
	} while (i < j);
	if (l < j)
		QuickSort(m, l, j);
	if (i < r)
		QuickSort(m, i, r);
}
void ShellSort(int m[], int n)
{
	//int h[max] = { 7,5,3,1 }, k=7;
	int h[max] = { 0 }, k = 0, t, u = 0;
	if (n % 2 == 0) t = n - 1;
	else t = n;
	for (int z = t; z >= 1; z = z - 2)
	{
		h[u] = z;
		u++;
	}
	k = h[0];
	int step, i, j;
	int x, len;
	for (step = 0; step < k; step++)
	{
		len = h[step];
		for (i = len; i < n; i++)
		{
			x = m[i];
			j = i - len;
			while ((x < m[j]) && (j >= 0))
			{
				m[j + len] = m[j];
				j = j - len;
			}
			m[j + len] = x;
		}
	}
}
void heapify(int m[], int n, int i)
{
	int l = 2 * (i + 1) - 1;
	int r = 2 * (i + 1);
	int ln;
	if (l<n && m[l]>m[i])
		ln = l;
	else
		ln = i;
	if (r<n && m[r]>m[ln])
		ln = r;
	if (i != ln)
	{
		swap(m[i], m[ln]);
		heapify(m, n, ln);
	}
}

void HeapSort(int m[], int n)
{
	int i, x, s, f, gt;
	for (i = 1; i<n; i++)
	{
		x = m[i];
		s = i;
		f = (s - 1) / 2;
		while (s>0 && m[f]<x)
		{
			m[s] = m[f];
			s = f;
			f = (s - 1) / 2;
		}
		m[s] = x;
	}
	for (i = n - 1; i>0; i--)
	{
		gt = m[i];
		m[i] = m[0];
		f = 0;
		if (i == 1)
			s = -1;
		else
			s = 1;
		if (i>2 && m[2]>m[1])
			s = 2;
		while (s >= 0 && gt<m[s])
		{
			m[f] = m[s];
			f = s;
			s = 2 * f + 1;
			if (s + 1 <= i - 1 && m[s]<m[s + 1])
				s = s + 1;
			if (s>i - 1)
				s = -1;
		}
		m[f] = gt;
	}

	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(m, n, i);
	for (int i = n - 1; i > 0; i--)
	{
		swap(m[0], m[i]);
		heapify(m, i, 0);
	}
}