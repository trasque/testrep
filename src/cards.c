/*
* カードの値を評価するプログラム
* ベガスパブリックライセンスの下に公開されています。
* (c)2014 カレッジブラックジャックチーム
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	puts("カード名を入れて下さい：");
	scanf("%2s", card_name);
	int val = 0;
	
/*	if (card_name[0] == 'K') {
		val = 10;
	} else if (card_name[0] == 'Q') {
		val = 10;
	} else if (card_name[0] == 'J') {
		val = 10;
	} else if (card_name[0] == 'A') {
		val = 11;
	} else {
		val = atoi(card_name);
	}
*/

	switch(card_name[0]) {
	case 'K':
	case 'Q':
	case 'J':
		val = 10;
		break;
	case 'A':
		val = 11;
		break;
	default:
		val = atoi(card_name);
	}
		

	/* 値が3から6かどうかを調べる */
	if ((card_name[0] >= '3') && (card_name[0] <= '6'))
		puts("カウントが増えます");
	else if (val == 10)
		puts("カウントが減ります");
	
	printf("カードの値：%i\n", val);
	return 0;
}

