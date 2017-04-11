#include <stdio.h>
#define swap(a,b) {int temp=0;temp=b;b=a;a=temp;}

int cal_score(int score[], int judge_type[], int n)
{
	int sum_pro;
	int sum_fun;
	int num_pro;
	int num_fun;
	int score_final;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if (judge_type[i] == 1)
		{
			sum_pro += score[i];
			++num_pro;
		} else {
			sum_fun += score[i];
			++num_fun;
		}
	}
	score_final = sum_pro / num_pro * 0.6 + sum_fun / num_fun * 0.4;
	return score_final;
}

int main(int argc, char const *argv[])
{
	int a1 = 1, a2 = 2;
	swap(a1, a2);
	printf("%d,%d\n", a1, a2);
	return 0;
}

