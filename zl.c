#include <stdlib.h>
#include <iostream>

using namespace std;

void selectSort(int* array,int len)
{
	int min = 0;
	for(int i = 0;i<len-1;i++)
        {	min = i;
		for(int j=i;j<len-1;j++)
                {
		if(array[min]>array[j])
                        { 
		            min = j;
                        }
                }


	if(min!=i)
{
	int temp = array[min];
	array[min] = array[i];
	array[i] = temp;
}

         }
}


/*void bubbleSort(int* array,int len)
{
	int flag = 0;
	for(int i =0;i<len-1&&flag==0;i++)
 	{
		flag = 1;
		for(int j = len-1;i<j;j--)
		{	
				
			if(array[j-1]>array[j])
			{
				int temp = array[j-1];
				array[j-1]=array[j];
				array[j] = temp;
				flag = 0;				

			}
			
		}



	}
		


}*/


/*void insertSort(int *array, int len)
{
	int j = 0;
	int temp = 0;	// 基准数
	// 遍历无需序列
	for (int i = 1; i < len; ++i)
	{
		// 无需序列的第一个和有序序列的最后一个比较
		if (array[i] < array[i - 1])
		{
			temp = array[i];	// 挖坑
			// 移动
			for (j = i - 1; j >= 0 && array[j] > temp; --j)
			{
				// 元素的移动
				array[j + 1] = array[j];
			}
			// 填坑
			array[j + 1] = temp;
		}
	}
}
*/
void print(char* p, int* a, int len)
{
	cout << p << endl;
	for (int i = 0; i < len; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


int main(void)
{
	// Enter your code
	int len;
	int array[] = {92,18,75,16,35,14,23,27,11};
    char p[128]= "select sort";
	len = sizeof(array) / sizeof(int);
	selectSort(array, len);
	print(p, array, len);

	//bubbleSort(array, len);
	//print(p, array, len);

	//insertSort(array, len);
	//print(p, array, len);

	//shellSort(array, len);
	//print(p, array, len);

	//quickSort(array, 0, len - 1);
	//print(p, array, len);

	//int temp[9];
	//mergeSort(array, 0, len - 1, temp);
	//print(p, array, len);

	
	cout << "----------- The End -----------" << endl;
	system("pause");


}
