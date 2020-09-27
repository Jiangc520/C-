#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define maxsize 1000  //表示两点间不可达，距离为无穷远
//#define n 6  //结点的数目
//void dijkstra(int C[][n], int v);//求原点v到其余顶点的最短路径及其长度
//
//void main()
//{
//	printf("                          ——Dijkstra算法——\n");
//	int C[n][n] = {
//		{ maxsize, maxsize, 10, maxsize, 30, 100 },
//		{ maxsize, maxsize, 5, maxsize, maxsize, maxsize },
//		{ maxsize, maxsize, maxsize, 50, maxsize, maxsize },
//		{ maxsize, maxsize, maxsize, maxsize, maxsize, 10 },
//		{ maxsize, maxsize, maxsize, 20, maxsize, 60 },
//		{ maxsize, maxsize, maxsize, maxsize, maxsize, maxsize }
//	}, v = 1, i, j;
//	printf("【打印有向图的邻接矩阵】\n");
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			printf("\t%d", C[i][j]);
//		}
//		printf("\n");
//	}
//	printf("【打印原点1到其他各点的最短路径及其长度】\n");
//	dijkstra(C, v);
//}
//
//void dijkstra(int C[][n], int v)//求原点v到其余顶点的最短路径及其长度
////C为有向网络的带权邻接矩阵
//{
//	int D[n];
//	int P[n], S[n];
//	int i, j, k, v1, pre;
//	int min, max = maxsize, inf = 1200;
//	v1 = v - 1;
//	for (i = 0; i<n; i++)
//	{
//		D[i] = C[v1][i];  //置初始距离值
//		if (D[i] != max)
//			P[i] = v;
//		else
//			P[i] = 0;
//	}
//	for (i = 0; i<n; i++)
//		S[i] = 0;     //红点集S开始为空
//	S[v1] = 1; D[v1] = 0;   //开始点v送S
//	for (i = 0; i<n - 1; i++)  //扩充红点集
//	{
//		min = inf;//令inf>max，保证距离值为max的蓝点能扩充到S中
//		for (j = 0; j<n; j++)//在当前蓝点中选距离值最小的点k+1
//		{
//			if ((!S[j]) && (D[j]<min))
//			{
//				min = D[j];
//				k = j;
//			}
//		}
//		S[k] = 1;   //将k+1加入红点集
//		for (j = 0; j<n; j++)
//		{
//			if ((!S[j]) && (D[j]>D[k] + C[k][j]))//调整各蓝点的距离值
//			{
//				D[j] = D[k] + C[k][j]; //修改蓝点j+1的距离
//				P[j] = k + 1;    //k+1是j+1的前趋
//			}
//		}
//	}  //所有顶点均已扩充到S中
//	for (i = 0; i<n; i++)
//	{
//		printf("%d到%d的最短距离为", v-1, i);
//		printf("%d\n", D[i]); //打印结果
//		pre = P[i];
//		printf("路径：%d", i);
//		while (pre != 0) //继续找前趋顶点
//		{
//			printf("<——%d", pre-1);
//			pre = P[pre - 1];
//		}
//		printf("\n");
//	}
//}  //dijkstra