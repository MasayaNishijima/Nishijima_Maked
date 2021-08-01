
#include "../../../../../Desktop/CandC++/Scrap/defs.h"

/*メイン関数*/
int main(void) {
	static struct S1 /*構造体S1を定義します*/ {
		char c[4], *s; //構造体S1はchar型のc[4](配列)、*s(ポインタ)を持ちます
	}s1 = { "abc", "def" };//構造体S1型のs1を定義しますc[4]="abc" *s="def"
	static struct S2 /*構造体S2を定義します*/ {
		char *cp;       /*構造体S2はchar型の*cp(ポインタ)と*/
		struct S1 ss1;  /*      構造体S1型のss1を持ちます*/
	}s2 = { "ghi",{ "jkl", "mno" } };
	/*構造体S2型のs2を定義します*cp="ghi" ss1.c[4]="jkl" ss1.*s="mno*/

	PRINT2(c, s1.c[0], *s1.s);
	/*(1バイトの文字を表示しなさい、s1のc[0]と*s1のsを)*/
	PRINT2(s, s1.c, s1.s);
	/*(文字列を\0まで表示しなさい、s1のcとs1のsを始点として)*/

	PRINT2(s, s2.cp, s2.ss1.s);
	/*(文字列を\0まで表示しなさい、s2のcpとs2のss1のsを始点として)*/
	PRINT2(s, ++s2.cp, ++s2.ss1.s);
	/*(文字列を\oまで表示しなさい、s2のcpの次の文字とs2のss1のsの次の文字を始点として)*/
}
