#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<math.h>

float F(float x, float y, float z) {
	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}

float H(float x, float z) {
	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
		if (F(x, y, z) <= 0.0f)
			return y;
	return 0.0f;
}
int main()
{
	char a;
	printf("今天羊崽犯错了,来道歉啦\n");
	Sleep(1000);
	printf("Are you ready to accept my apologize?\n");
	Sleep(1000);
	printf("友情提示，先将窗口最大化\n");
	Sleep(2000);
	printf("Three!\n");
	Sleep(500);
	printf("Two!\n");
	Sleep(500);
	printf("One!\n");
	Sleep(500);
	printf("Go!\n");
	Sleep(500);
	for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
		for (float x = -1.5f; x < 1.5f; x += 0.05f) {
			float a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
			Sleep(5);
		}
		putchar('\n');
	}
	printf("还有哦~~\n");
	Sleep(1000);
	for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
		for (float x = -1.5f; x < 1.5f; x += 0.05f) {
			float z = x * x + y * y - 1;
			float f = z * z * z - x * x * y * y * y;
			putchar(f <= 0.0f ? ".:-=+*#%@"[(int)(f * -8.0f)] : ' ');
			Sleep(5);
		}
		putchar('\n');
	}

	printf("嘿嘿，你还要在看我的爱心嘛？\n");
	Sleep(1000);
	printf("如果还想看的话，请键盘输入一个Y~,再按一下 Enter键\n");
	scanf("%c", &a);
	printf("那我们继续咯，给你展示我的爱\n");
	Sleep(1000);

	for (float z = 1.5f; z > -1.5f; z -= 0.05f) {
		for (float x = -1.5f; x < 1.5f; x += 0.025f) {
			float v = F(x, 0.0f, z);
			if (v <= 0.0f) {
				float y0 = H(x, z);
				float ny = 0.01f;
				float nx = H(x + ny, z) - y0;
				float nz = H(x, z + ny) - y0;
				float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
				float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
				putchar(".:-=+*#%@"[(int)(d * 5.0f)]);
				//Sleep(50);
			}
			else
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
	printf("\n\n\n我以为\n");
	Sleep(2000);
	printf("日常的生活会使你褪去光芒\n");
	Sleep(2000);
	printf("然而我错了\n");
	Sleep(2000);
	printf("一个回眸就让我心动不已\n");
	Sleep(2000);
	printf("暗香涌动，是风吹过你的发梢\n");
	Sleep(2000);
	printf("星光黯淡，只因月亮在你的眼睛\n\n\n");
	Sleep(2000);
	printf("from 爱你的羊崽\n\n\n");
	system("pause");
	return 0;
}

