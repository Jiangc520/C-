#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define maxsize 1000  //��ʾ����䲻�ɴ����Ϊ����Զ
//#define n 6  //������Ŀ
//void dijkstra(int C[][n], int v);//��ԭ��v�����ඥ������·�����䳤��
//
//void main()
//{
//	printf("                          ����Dijkstra�㷨����\n");
//	int C[n][n] = {
//		{ maxsize, maxsize, 10, maxsize, 30, 100 },
//		{ maxsize, maxsize, 5, maxsize, maxsize, maxsize },
//		{ maxsize, maxsize, maxsize, 50, maxsize, maxsize },
//		{ maxsize, maxsize, maxsize, maxsize, maxsize, 10 },
//		{ maxsize, maxsize, maxsize, 20, maxsize, 60 },
//		{ maxsize, maxsize, maxsize, maxsize, maxsize, maxsize }
//	}, v = 1, i, j;
//	printf("����ӡ����ͼ���ڽӾ���\n");
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			printf("\t%d", C[i][j]);
//		}
//		printf("\n");
//	}
//	printf("����ӡԭ��1��������������·�����䳤�ȡ�\n");
//	dijkstra(C, v);
//}
//
//void dijkstra(int C[][n], int v)//��ԭ��v�����ඥ������·�����䳤��
////CΪ��������Ĵ�Ȩ�ڽӾ���
//{
//	int D[n];
//	int P[n], S[n];
//	int i, j, k, v1, pre;
//	int min, max = maxsize, inf = 1200;
//	v1 = v - 1;
//	for (i = 0; i<n; i++)
//	{
//		D[i] = C[v1][i];  //�ó�ʼ����ֵ
//		if (D[i] != max)
//			P[i] = v;
//		else
//			P[i] = 0;
//	}
//	for (i = 0; i<n; i++)
//		S[i] = 0;     //��㼯S��ʼΪ��
//	S[v1] = 1; D[v1] = 0;   //��ʼ��v��S
//	for (i = 0; i<n - 1; i++)  //�����㼯
//	{
//		min = inf;//��inf>max����֤����ֵΪmax�����������䵽S��
//		for (j = 0; j<n; j++)//�ڵ�ǰ������ѡ����ֵ��С�ĵ�k+1
//		{
//			if ((!S[j]) && (D[j]<min))
//			{
//				min = D[j];
//				k = j;
//			}
//		}
//		S[k] = 1;   //��k+1�����㼯
//		for (j = 0; j<n; j++)
//		{
//			if ((!S[j]) && (D[j]>D[k] + C[k][j]))//����������ľ���ֵ
//			{
//				D[j] = D[k] + C[k][j]; //�޸�����j+1�ľ���
//				P[j] = k + 1;    //k+1��j+1��ǰ��
//			}
//		}
//	}  //���ж���������䵽S��
//	for (i = 0; i<n; i++)
//	{
//		printf("%d��%d����̾���Ϊ", v-1, i);
//		printf("%d\n", D[i]); //��ӡ���
//		pre = P[i];
//		printf("·����%d", i);
//		while (pre != 0) //������ǰ������
//		{
//			printf("<����%d", pre-1);
//			pre = P[pre - 1];
//		}
//		printf("\n");
//	}
//}  //dijkstra