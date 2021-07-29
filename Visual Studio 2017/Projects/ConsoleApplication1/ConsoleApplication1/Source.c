#include<stdio.h>

int ct_x, ct_y, ct_w;
int st;
int ct_z[7][100];
char *strings[100];

int a[7] = { 1,0, 2,2,2,2 };
int b[7] = { 0,1,1,1,2,2 };
int c[7] = { 0,1,0,1,2,2 };
int d[7] = { 0,1,1,2,2,2 };
int e[7] = { 1,2,2,2,2,2 };
int f[7] = { 1,1,0,1,2,2 };
int g[7] = { 0,0,1,2,2,2 };
int h[7] = { 1,1,1,1,2,2 };
int i[7] = { 1,1,2,2,2,2 };
int j[7] = { 1,0,0,0,2,2 };
int k[7] = { 0,1,0,2,2,2 };
int l[7] = { 1,0,1,1,2,2 };
int m[7] = { 0,0,2,2,2,2 };
int n[7] = { 0,1,2,2,2,2 };
int o[7] = { 0,0,0,2,2,2 };
int p[7] = { 1,0,0,1,2,2 };
int q[7] = { 0,0,1,0,2,2 };
int r[7] = { 1,0,1,2,2,2 };
int s[7] = { 1,1,1,2,2,2 };
int t[7] = { 0,2,2,2,2,2 };
int u[7] = { 1,1,0,2,2,2 };
int v[7] = { 1,1,1,0,2,2 };
int w[7] = { 1,0,0,2,2,2 };
int x[7] = { 0,1,1,0,2,2 };
int y[7] = { 0,1,0,0,2,2 };
int z[7] = { 0,0,1,1,2,2 };
int n1[7] = { 1,0,0,0,0,2 };
int n2[7] = { 1,1,0,0,0, 2 };
int n3[7] = { 1,1,1,0,0, 2 };
int n4[7] = { 1,1,1,1,0, 2 };
int n5[7] = { 1,1,1,1,1, 2 };
int n6[7] = { 0,1,1,1,1, 2 };
int n7[7] = { 0,0,1,1,1, 2 };
int n8[7] = { 0,0,0,1,1, 2 };
int n9[7] = { 0,0,0,0,1, 2 };
int n0[7] = { 0,0,0,0,0, 2 };
int conma[7] = { 1,0,1,0,1,0 };
int kanma[7] = { 0,0,1,1,0,0 };
int hihun[7] = { 0,1,1,1,0,2 };
int que[7] = { 1,1,0,0,1,1 };
int at[7] = { 1,0,0,1,0,1 };
int surash[7] = { 0,1,1,0,1,2 };


int main(void)
{
	while (1)
	{
		printf("Put strings:");
		scanf_s("%s", &strings);
		printf("%s", strings); getchar();
		for (ct_x = 0; *strings[ct_x] != '\n'&&ct_x <= 100; ct_x++)
		{
			ct_y = *strings[ct_x];
			switch (ct_y)
			{
			case'A':case 'a':ct_z[6][ct_x] = *a; continue;
			case'B':case 'b':ct_z[6][ct_x] = *b; continue;
			case'C':case 'c':ct_z[6][ct_x] = *c; continue;
			case'D':case 'd':ct_z[6][ct_x] = *d; continue;
			case'E':case 'e':ct_z[6][ct_x] = *e; continue;
			case'F':case 'f':ct_z[6][ct_x] = *f; continue;
			case'G':case 'g':ct_z[6][ct_x] = *g; continue;
			case'H':case 'h':ct_z[6][ct_x] = *f; continue;
			case'I':case 'i':ct_z[6][ct_x] = *i; continue;
			case'J':case 'j':ct_z[6][ct_x] = *j; continue;
			case'K':case 'k':ct_z[6][ct_x] = *k; continue;
			case'L':case 'l':ct_z[6][ct_x] = *l; continue;
			case'M':case 'm':ct_z[6][ct_x] = *m; continue;
			case'N':case 'n':ct_z[6][ct_x] = *n; continue;
			case'O':case 'o':ct_z[6][ct_x] = *o; continue;
			case'P':case 'p':ct_z[6][ct_x] = *p; continue;
			case'Q':case 'q':ct_z[6][ct_x] = *q; continue;
			case'R':case 'r':ct_z[6][ct_x] = *r; continue;
			case'S':case 's':ct_z[6][ct_x] = *s; continue;
			case'T':case 't':ct_z[6][ct_x] = *t; continue;
			case'U':case 'u':ct_z[6][ct_x] = *u; continue;
			case'V':case 'v':ct_z[6][ct_x] = *v; continue;
			case'W':case 'w':ct_z[6][ct_x] = *w; continue;
			case'X':case 'x':ct_z[6][ct_x] = *x; continue;
			case'Y':case 'y':ct_z[6][ct_x] = *y; continue;
			case'Z':case 'z':ct_z[6][ct_x] = *z; continue;
			case '1':ct_z[6][ct_x] = *n1; continue;
			case '2':ct_z[6][ct_x] = *n2; continue;
			case '3':ct_z[6][ct_x] = *n3; continue;
			case '4':ct_z[6][ct_x] = *n4; continue;
			case '5':ct_z[6][ct_x] = *n5; continue;
			case '6':ct_z[6][ct_x] = *n6; continue;
			case '7':ct_z[6][ct_x] = *n7; continue;
			case '8':ct_z[6][ct_x] = *n8; continue;
			case '9':ct_z[6][ct_x] = *n9; continue;
			case '0':ct_z[6][ct_x] = *n0; continue;
			case '.':ct_z[6][ct_x] = *conma; continue;
			case ',':ct_z[6][ct_x] = *kanma; continue;
			case '?':ct_z[6][ct_x] = *que; continue;
			case '-':ct_z[6][ct_x] = *hihun; continue;
			case '/':ct_z[6][ct_x] = *surash; continue;
			case '@':ct_z[6][ct_x] = *at; continue;
			case' ':continue;
			default:
				printf("Error : Application Forced termination\n");
				break;
			}
			goto end;
		}
		for (ct_x = 0; *strings[ct_x] != '\n'&&ct_x <= 100; ct_x++)
		{
			if ('a' <= *strings[ct_x] && 'z' >= *strings[ct_x]) *strings[ct_x] = *strings[ct_x] - 32;
			printf("%c\t", strings[ct_x]);
			for (ct_w = 0; ct_w <= 6; ct_w++)
			{
				if (ct_z[ct_w][ct_x] == 1)
				{
					printf("E ");
				}
				if (ct_z[ct_w][ct_x] == 0)
				{
					printf("[ ");
				}
				if (ct_z[ct_w][ct_x] == 2) continue;
			}
			putchar('\n');
		}

		printf("Contnue?\n1.Yes\n2.No\n");
		scanf_s("%d", &st);
		if (st == 1) continue;
		else break;
	}
end:
	return 0;
}