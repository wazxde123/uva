// uva-10071.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

1. 兩個物理公式
V = V0 + a*t(V0為初速度, a 為加速度, t 為時間, V 為當前速度)

S = (V + V0) * t / 2 (V0為初速度, V 為末速度, t 為時間)

2. 由题目可知, 輸入的是 t 和 t 時間處的 V, 则2t時間處的 S = ((V0 + a * 2 * t) + V0) * 2 * t / 2 = (V0 + a*t) * 2 * t

即所求 S = V * 2 * t(V 为 t 時間處的速度)

*/

int main()
{
	int v, t;
	while (scanf("%d%d", &v, &t) != EOF)
		printf("%d\n", 2 * v*t);
	return 0;
}

