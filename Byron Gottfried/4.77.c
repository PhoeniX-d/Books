#include<stdio.h>
int main()
{
	/*int i = 12345, j = -13579, k = -24680;
	long lx = 123456789;
	short sx = -2222;
	unsigned ux = 5555;

	printf(":%d:%d:%d:%ld:%d:%u:\n",i, j, k, lx, sx, ux);
	printf(":%3d:%3d:%3d:%3ld:%3d:%3u:\n",i, j, k, lx, sx, ux);
	printf(":%8d:%8d:%8d:%15ld:%8d:%8u:\n",i, j, k, lx, sx, ux);
	printf(":%-8d:%-8d:%-8d:%-15ld:%-8d:%-8u:\n",i, j, k, lx, sx, ux);
	printf(":%+8d:%+8d:%+8d:%+15ld:%+8d:%+8u:\n",i, j, k, lx, sx, ux);
	printf(":%08d:%08d:%08d:%015ld:%08d:%08u:\n",i, j, k, lx, sx, ux);*/

	int j = 19;
	char s[12] = "hexadecimal";
	float a = 22222.5, b = 0.0005, c = 3000.;

	/*printf(":%08d:\n", j);
	printf(":%.1d:\n", j);
	printf(":%12.1f:\n", a);
	printf(":%12.12s:\n", s);*/

	/*printf("1:%f:%f:%f:\n",a, b, c);
	printf("2:%lf:%lf:%lf:\n",a, b, c);
	printf("3:%3f:%3f:%3f:\n",a, b, c);
	printf("4:%8f:%8f:%8f:\n",a, b, c);
	printf("5:%8.4f:%8.4f:%8.4f:\n",a, b, c);
	printf("6:%.3f:%.3f:%.3f:\n",a, b, c);
	printf("7:%e:%e:%e:\n",a, b, c);
	printf("8:%3e:%3e:%3e:\n",a, b, c);
	printf("9:%12e:%12e:%12e:\n",a, b, c);
	printf("10:%12.4e:%12.4e:%12.4e:\n",a, b, c);
	printf("11:%.2e:%.2e:%.2e:\n",a, b, c);
	printf("12:%3f:%3f:%3f:\n",a, b, c);
	printf("13:%-8f:%-8f:%-8f:\n",a, b, c);
	printf("14:%+8f:%+8f:%+8f:\n",a, b, c);
	printf("15:%08f:%08f:%08f:\n",a, b, c);
	printf("16:%#8f:%#8f:%#8f:\n",a, b, c);
	printf("17:%g:%g:%g:\n",a, b, c);
	printf("18:%#g:%#g:%#g:\n",a, b, c);*/

	/*char text[20] = "NowisTimeForGoodMen";
	printf(":%s:\n",text);
	printf(":%10s:\n",text);
	printf(":%25s:\n",text);
	printf(":%.8s:\n",text);
	printf(":%13.8s:\n",text);
	printf(":%-13.8s:\n",text);*/
	return 0;
}

/*
:12345:-13579:-24680:123456789:-2222:5555:
:12345:-13579:-24680:123456789:-2222:5555:
:   12345:  -13579:  -24680:      123456789:   -2222:    5555:
:12345   :-13579  :-24680  :123456789      :-2222   :5555    :
:  +12345:  -13579:  -24680:     +123456789:   -2222:    5555:
:00012345:-0013579:-0024680:000000123456789:-0002222:00005555:
*/

/*
:2.500000:0.000500:3000.000000:
:2.500000:0.000500:3000.000000:
:2.500000:0.000500:3000.000000:
:2.500000:0.000500:3000.000000:
:  2.5000:  0.0005:3000.0000:
:   2.500:   0.001:3000.000:
:2.500000e+00:5.000000e-04:3.000000e+03:
:2.500000e+00:5.000000e-04:3.000000e+03:
:2.500000e+00:5.000000e-04:3.000000e+03:
:  2.5000e+00:  5.0000e-04:  3.0000e+03:
:2.50e+00:5.00e-04:3.00e+03:
:2.500000:0.000500:3000.000000:
:+2.500000:+0.000500:+3000.000000:
:2.500000:0.000500:3000.000000:
:2.500000:0.000500:3000.000000:
:2.5:0.0005:3000:
:2.50000:0.000500000:3000.00:
*/