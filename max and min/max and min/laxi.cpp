#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include<string.h>

#define MaxTableSize 20 /*ɢ�б����󳤶�*/
typedef int ElemType; /*�ؼ��ʵ���������Ϊ����*/
typedef int Index; /*ɢ�б�ĵ�ַ����Ϊ����*/
typedef int Position; /*�������ڵ�λ��������ɢ�б�ĵ�ַ����һ��*/

/*ɢ�б��е�Ԫ���״̬����,LegitimateΪ�кϷ�Ԫ��;EmptyΪ�յ�Ԫ��;DeletedΪ����ɾ��Ԫ��*/
typedef enum {
	Legitimate, Empty, Deleted
} EntryType;

/*ɢ�б�Ԫ��Ĵ洢�ṹ*/
typedef struct HashEntry Cell;
struct HashEntry {
	ElemType Data; /*��Ԫ���ŵ�Ԫ��*/
	EntryType Info; /*��Ԫ���״̬*/
};

/*ɢ�б�Ĵ洢�ṹ*/
typedef struct TableNode *HashTable;
struct TableNode {
	Cell *Cells; /*���ɢ�б����ݵ�����*/
	int TableSize; /*ɢ�б����󳤶�*/
};

/*��������*/
int NextPrime(int N); /*���ش���N�Ҳ�����MaxTableSize����С����*/
HashTable CreateTable(int TableSize); /*��������ʼ��ɢ�б�*/
void BuildHashTable(HashTable H); /*����ɢ�б�*/
void PrintHashTable(HashTable H); /*���ɢ�б�*/
int Hash(ElemType Data, int TableSize); /*ɢ�к���*/
Position LinearFind(HashTable H, ElemType Data); /*����̽�����*/
bool Insert(HashTable H, ElemType Data); /*ɢ�б�Ĳ������*/
void Find(HashTable H); /*�û�ʹ������̽�����*/

/*ɢ�к���*/
int Hash(ElemType Data, int TableSize)
{
	return (int)(Data%TableSize);
}

/*����̽�����*/
Position LinearFind(HashTable H, ElemType Data)
{
	Position currentPos, newPos; /*һ��ָʾ��ʼ����λ��,һ��ָʾ��λ��*/
	int collisionNum = 0; /*��¼������ͻ�Ĵ���*/
	if (Data != -1) {
		/*����ɢ�к����ҵ���Ԫ��Ӧ�÷ŵĳ�ʼλ��*/
		newPos = currentPos = Hash(Data, H->TableSize);
		/*�����λ�õĵ�Ԫ��ǿ�,���Ҳ���Ҫ�ҵ�Ԫ��ʱ,�������˳�ͻ*/
		while (H->Cells[newPos].Info != Empty && H->Cells[newPos].Data != Data) {
			/*��ͻ����+1*/
			collisionNum++;
			/*����̽��,����+1*/
			newPos = currentPos + collisionNum; /*!!!!*/
			/*��������жϿ�λ���±��Ƿ�Խ��,�Ǿ͵�������ȷλ��*/
			if (newPos >= H->TableSize) {
				newPos = newPos%H->TableSize;
			}
		}
		printf("Ԫ��%d�������:\tɢ�е�ַ=%d\tʵ�ʵ�ַ=%d\t��ͻ����=%d\n", Data, currentPos, newPos, collisionNum);
	}

	return newPos; /*��ʱ��newPosλ����Data��λ��,������һ���յ�Ԫ���λ��*/
}

/*ɢ�б�Ĳ������*/
bool Insert(HashTable H, ElemType Data)
{
	Position Pos = LinearFind(H, Data); /*̽��Data�Ƿ��Ѵ���ɢ�б���*/

	if (Data != -1 && H->Cells[Pos].Info != Legitimate) {
		/*��������Ԫ��û�б�ռ��,˵��Data���Բ��������Posλ��*/
		/*����*/
		H->Cells[Pos].Data = Data;
		H->Cells[Pos].Info = Legitimate;
		return true;
	}
	else if (Data == -1) {
		return;
	}
	else {
		printf("��Ԫ���Ѵ�����ɢ�б���.\n");
		return false;
	}
}

/*ɢ�к���*/
int Hash(ElemType Data[], int TableSize)
{
	int Pos = Data[0] - 'a'; //�ַ�������ĸת�������� 

	return (int)(Pos%TableSize);
}

/*����̽�����*/
Position LinearFind(HashTable H, ElemType Data[])
{
	Position currentPos, newPos; /*һ��ָʾ��ʼ����λ��,һ��ָʾ��λ��*/
	int collisionNum = 0; /*��¼������ͻ�Ĵ���*/
	if (strcmp(Data, "-1") != 0) {
		/*����ɢ�к����ҵ���Ԫ��Ӧ�÷ŵĳ�ʼλ��*/
		newPos = currentPos = Hash(Data, H->TableSize);
		/*�����λ�õĵ�Ԫ��ǿ�,���Ҳ���Ҫ�ҵ�Ԫ��ʱ,�������˳�ͻ*/
		while (H->Cells[newPos].Info != Empty && strcmp(H->Cells[newPos].Data, Data) != 0) {
			/*��ͻ����+1*/
			collisionNum++;
			/*����̽��,����+1*/
			newPos = currentPos + collisionNum; /*!!!!*/
			/*��������жϿ�λ���±��Ƿ�Խ��,�Ǿ͵�������ȷλ��*/
			if (newPos >= H->TableSize) {
				newPos = newPos%H->TableSize;
			}
		}
		//puts(Data);
		printf("Ԫ�ز������:\tɢ�е�ַ=%d\tʵ�ʵ�ַ=%d\t��ͻ����=%d,\n", currentPos, newPos, collisionNum);
	}
	return newPos; /*��ʱ��newPosλ����Data��λ��,������һ���յ�Ԫ���λ��*/
}

/*ɢ�б�Ĳ������*/
bool Insert(HashTable H, ElemType Data[])
{
	Position Pos = LinearFind(H, Data); /*̽��Data�Ƿ��Ѵ���ɢ�б���*/

	if (strcmp(Data, "finish") != 0 && H->Cells[Pos].Info != Legitimate) {
		/*��������Ԫ��û�б�ռ��,˵��Data���Բ��������Posλ��*/
		/*����*/
		strcpy(H->Cells[Pos].Data, Data); /*�ַ������ƽ�ȥ*/
		H->Cells[Pos].Info = Legitimate;
		return true;
	}
	else if (strcmp(Data, "finish") == 0) {
		return;
	}
	else {
		printf("��Ԫ���Ѵ�����ɢ�б���.\n");
		return false;
	}
}

