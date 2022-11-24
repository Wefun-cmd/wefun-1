#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
	{
		if (rotateArrayLen == 0)
			return 0;
		int left = 0, right = rotateArrayLen - 1, mid;
		if (rotateArray[right] > rotateArray[left])
			return rotateArray[0];
		while (left < right)
		{
			mid = left + (right - left) / 2;
			if (rotateArray[mid] > rotateArray[right])
			{
				left = mid + 1;
			}
			else if (rotateArray[mid] == rotateArray[right])
				right--;
			else
				right = mid;
		}
		return rotateArray[left];
	}
	/*int n;
	while (~scanf("%d", &n))
	{
		int count1 = 0, count2 = 0, tmp;
		float sum = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &tmp);
			if (tmp < 0)
			{
				count1++;
			}
			else if (tmp > 0)
			{
				sum += tmp;
				count2++;
			}
		}
		if (count2 == 0)
		{
			printf("%d %.1lf\n", count1, count2 / 1.0);
		}
		else
		{
			printf("%d %.1lf\n", count1, sum / count2);
		}
	}
	return 0;*/
	/*int m;
	while (~scanf("%d", &m))
	{
		int start = m * (m - 1) + 1;
		char buf[10240] = { 0 };
		sprintf(buf, "%d", start);
		for (int i = 1; i < m; i++)
		{
			sprintf(buf, "%s+%d", buf, start += 2);
		}
		printf("%s\n", buf);
	}
	return 0;*/
	/*int n;
	while (~scanf("%d", &n))
	{
		for (int i = 0; i < n; i++)
		{
			char password[101] = { 0 };
			int upper = 0, lower = 0, digit = 0, other = 0;
			scanf_s("%s", password);
			if (strlen(password) < 8)
			{
				printf("NO\n");
				continue;
			}
			if (password[0] >= '0' && password[0] <= '9')
			{
				printf("NO\n");
				continue;
			}
			char* ptr = password;
			while (*ptr != '\0')
			{
				if (*ptr >= 'a' && *ptr <= 'z')
					lower++;
				else if (*ptr >= 'A' && *ptr <= 'Z')
					upper++;
				else if (*ptr >= '0' && *ptr <= '9')
					digit++;
				else
					other++;
				ptr++;
			}
			if (other > 0)
			{
				printf("NO\n");
				continue;
			}
			if ((upper > 0) + (lower > 0) + (digit > 0) < 2)
			{
				printf("NO\n");
				continue;
			}
			printf("YES\n");
		}
	}
	return 0;*/

	/*char ch;
	while ((ch= getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;*/
}
