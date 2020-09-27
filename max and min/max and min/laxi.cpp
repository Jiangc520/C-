#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include<string.h>

#define MaxTableSize 20 /*散列表的最大长度*/
typedef int ElemType; /*关键词的数据类型为整型*/
typedef int Index; /*散列表的地址类型为整型*/
typedef int Position; /*数据所在的位置类型与散列表的地址类型一致*/

/*散列表中单元格的状态类型,Legitimate为有合法元素;Empty为空单元格;Deleted为有已删除元素*/
typedef enum {
	Legitimate, Empty, Deleted
} EntryType;

/*散列表单元格的存储结构*/
typedef struct HashEntry Cell;
struct HashEntry {
	ElemType Data; /*单元格存放的元素*/
	EntryType Info; /*单元格的状态*/
};

/*散列表的存储结构*/
typedef struct TableNode *HashTable;
struct TableNode {
	Cell *Cells; /*存放散列表数据的数组*/
	int TableSize; /*散列表的最大长度*/
};

/*函数声明*/
int NextPrime(int N); /*返回大于N且不超过MaxTableSize的最小素数*/
HashTable CreateTable(int TableSize); /*创建并初始化散列表*/
void BuildHashTable(HashTable H); /*构建散列表*/
void PrintHashTable(HashTable H); /*输出散列表*/
int Hash(ElemType Data, int TableSize); /*散列函数*/
Position LinearFind(HashTable H, ElemType Data); /*线性探测查找*/
bool Insert(HashTable H, ElemType Data); /*散列表的插入操作*/
void Find(HashTable H); /*用户使用线性探测查找*/

/*散列函数*/
int Hash(ElemType Data, int TableSize)
{
	return (int)(Data%TableSize);
}

/*线性探测查找*/
Position LinearFind(HashTable H, ElemType Data)
{
	Position currentPos, newPos; /*一个指示初始插入位置,一个指示新位置*/
	int collisionNum = 0; /*记录发生冲突的次数*/
	if (Data != -1) {
		/*根据散列函数找到该元素应该放的初始位置*/
		newPos = currentPos = Hash(Data, H->TableSize);
		/*如果该位置的单元格非空,并且不是要找的元素时,即发生了冲突*/
		while (H->Cells[newPos].Info != Empty && H->Cells[newPos].Data != Data) {
			/*冲突次数+1*/
			collisionNum++;
			/*线性探测,增量+1*/
			newPos = currentPos + collisionNum; /*!!!!*/
			/*特殊情况判断看位置下标是否越界,是就调整成正确位置*/
			if (newPos >= H->TableSize) {
				newPos = newPos%H->TableSize;
			}
		}
		printf("元素%d插入操作:\t散列地址=%d\t实际地址=%d\t冲突次数=%d\n", Data, currentPos, newPos, collisionNum);
	}

	return newPos; /*此时的newPos位置是Data的位置,或者是一个空单元格的位置*/
}

/*散列表的插入操作*/
bool Insert(HashTable H, ElemType Data)
{
	Position Pos = LinearFind(H, Data); /*探测Data是否已存在散列表中*/

	if (Data != -1 && H->Cells[Pos].Info != Legitimate) {
		/*如果这个单元格没有被占用,说明Data可以插入在这个Pos位置*/
		/*插入*/
		H->Cells[Pos].Data = Data;
		H->Cells[Pos].Info = Legitimate;
		return true;
	}
	else if (Data == -1) {
		return;
	}
	else {
		printf("该元素已存在于散列表中.\n");
		return false;
	}
}

/*散列函数*/
int Hash(ElemType Data[], int TableSize)
{
	int Pos = Data[0] - 'a'; //字符串首字母转换成数字 

	return (int)(Pos%TableSize);
}

/*线性探测查找*/
Position LinearFind(HashTable H, ElemType Data[])
{
	Position currentPos, newPos; /*一个指示初始插入位置,一个指示新位置*/
	int collisionNum = 0; /*记录发生冲突的次数*/
	if (strcmp(Data, "-1") != 0) {
		/*根据散列函数找到该元素应该放的初始位置*/
		newPos = currentPos = Hash(Data, H->TableSize);
		/*如果该位置的单元格非空,并且不是要找的元素时,即发生了冲突*/
		while (H->Cells[newPos].Info != Empty && strcmp(H->Cells[newPos].Data, Data) != 0) {
			/*冲突次数+1*/
			collisionNum++;
			/*线性探测,增量+1*/
			newPos = currentPos + collisionNum; /*!!!!*/
			/*特殊情况判断看位置下标是否越界,是就调整成正确位置*/
			if (newPos >= H->TableSize) {
				newPos = newPos%H->TableSize;
			}
		}
		//puts(Data);
		printf("元素插入操作:\t散列地址=%d\t实际地址=%d\t冲突次数=%d,\n", currentPos, newPos, collisionNum);
	}
	return newPos; /*此时的newPos位置是Data的位置,或者是一个空单元格的位置*/
}

/*散列表的插入操作*/
bool Insert(HashTable H, ElemType Data[])
{
	Position Pos = LinearFind(H, Data); /*探测Data是否已存在散列表中*/

	if (strcmp(Data, "finish") != 0 && H->Cells[Pos].Info != Legitimate) {
		/*如果这个单元格没有被占用,说明Data可以插入在这个Pos位置*/
		/*插入*/
		strcpy(H->Cells[Pos].Data, Data); /*字符串复制进去*/
		H->Cells[Pos].Info = Legitimate;
		return true;
	}
	else if (strcmp(Data, "finish") == 0) {
		return;
	}
	else {
		printf("该元素已存在于散列表中.\n");
		return false;
	}
}

