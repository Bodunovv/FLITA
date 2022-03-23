#include <stdio.h>
#include <stdlib.h>
void InputGraf(const int N, int Graf[][N], int Vis[]);
void OutputGrafStreet(const int N, const int Graf[][N]);
void OutputGrafTab(const int N, const int Graf[][N]);
void SvyzGraf(const int N, int const Graf[][N], int Vis[], int v);
int main()
{
int N;
 printf(" Input kol-vo verchin grafa ");
scanf("%d", &N);
 int Graf[N][N];
int Vis[N];
 InputGraf(N, Graf, Vis);
 OutputGrafStreet(N, Graf);
 OutputGrafTab(N, Graf);
SvyzGraf(N, Graf, Vis, 0);
for (int i = 0; i < N; i++)
if (Vis[i] != 1)
{
printf("\n Gran ne svyznyi ");
return 0;
}
printf("\n Graf svyznyi ");
return 0;
}
void OutputGrafTab(const int N, const int Graf[][N])
{
 for(int i = 0; i < N; i++)
 {
 printf("\n");
 for(int j = 0; j < N; j++)
 printf(" %d", Graf[i][j]);
 }
 printf("\n");
}
void OutputGrafStreet(const int N, const int Graf[][N])
{
 for (int i = 0; i < N; i++)
 for (int j = 0; j < N; j++)
 if (Graf[i][j] != 0)
printf("\n %d - %d", i + 1, j + 1);
 printf("\n");
}
void InputGraf(const int N, int Graf[][N], int Vis[])
{
 printf(" Zapolnite Graf \n");
for (int i = 0; i < N; i++)
{
for (int j = 0; j < N; j++)
scanf("%d", &Graf[i][j]);
}
printf("\n");
for(int i = 0; i < N; i++)
 Vis[i] = 0;
}
void SvyzGraf(const int N, int const Graf[][N], int Vis[], int v)
{
//Связный граф - графк который имеет путь из любой вершины, в любую другую
if (Vis[v] == 1)
return;
Vis[v] = 1;
for (int i = 0; i < N; i++)
if (Graf[v][i])
SvyzGraf(N, Graf, Vis, i);
}




