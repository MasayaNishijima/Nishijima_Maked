//�^�����Ֆʂɑ΂���4���Ԃ��Ƃ�h�����T��

#include<stdio.h>
#include<stdlib.h>

#define Size 12

//�Ֆʓ��͊֐�
int Input_Board();
//�����J�E���g�֐�
void Count_Box();
//�ЂƂu���ď��������i�Ֆʁj��S�ĕ\������֐�.�����͂ǂ��炪��s��������"First"�ϐ�
int Game_Start_Win(int which);
//�ЂƂu�����Ə������m�肷��ꏊ��T��.�����͌��ݔ����ǂ��炪�u���̂�
int Find_Win_Point(int which);

//�Q�[���I���t���O
int Game_End_Flag = 10;

//���݂̔Ֆʂ��i�[
int Current_Board[Size][Size];

//�ςݏd�ˋL���|�C���^�[����ϐ�
int BP0 = Size - 1, BP1 = Size - 1, BP2 = Size - 1, BP3 = Size - 1, BP4 = Size - 1, BP5 = Size - 1, BP6 = Size - 1,
BP7 = Size - 1, BP8 = Size - 1, BP9 = Size - 1, BP10 = Size - 1, BP11 = Size - 1;

//�ǂݍ��ݎ����ɑł̂͂ǂ��炩�𔻒f���邽�߂ɏ��߂ɊePlayer�̔������J�E���g����
int P1_Number = 0;
int P2_Number = 0;
//�ǂ��炪���ɂȂ邩�𔻒�(0:��1:��)
int First = -1;


int main()
{
	//���͔Ֆʂɂ��ď���������
	Input_Board();
	//�Ֆʏ�����s�A��U�𔻒�
	Count_Box();
	//�Q�[���X�^�[�g������������
	Game_Start_Win(First);
	return 0;

}

int Input_Board()
{
	//���[�v����ϐ�
	int i = 0, j = 0;
	FILE *fp;
	char file_name[128];
	int Number;

	printf("File Name:");
	scanf("%s", &file_name);

	//�Ֆʏ��ǂݍ���(�t�@�C���ǂݍ���)
	fp = fopen(file_name, "r");
	if (fp == NULL)
	{
		printf("�Ֆʏ��ǂݍ��ݎ��s");
		exit(0);
		return 0;

	}

	//�{�[�h����\��
	for (i = 0; i<Size; i++)
	{
		for (j = 0; j<Size; j++)
		{
			fscanf(fp, "%d", &Current_Board[i][j]);
			switch (Current_Board[i][j])
			{

			case -1:
				printf(".");
				break;

			case 0:
				printf("0");
				break;

			case 1:
				printf("X");
				break;


			}
			//	printf("%d",Current_Board[i][j]);

		}

		printf("\n");

	}

	printf("0123456789AB\n");

	//�ςݏd�ː���ϐ�����͔Ֆʂɍ��킹��
	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][0] == -1)
		{
			BP0 = i;
			break;
		}
	}


	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][1] == -1)
		{
			BP1 = i;
			break;
		}
	}


	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][2] == -1)
		{
			BP2 = i;
			break;
		}
	}


	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][3] == -1)
		{
			BP3 = i;
			break;
		}
	}

	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][4] == -1)
		{
			BP4 = i;
			break;
		}
	}


	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][5] == -1)
		{
			BP5 = i;
			break;
		}
	}


	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][6] == -1)
		{
			BP6 = i;
			break;
		}
	}

	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][7] == -1)
		{
			BP7 = i;
			break;
		}
	}


	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][8] == -1)
		{
			BP8 = i;
			break;
		}
	}


	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][9] == -1)
		{
			BP9 = i;
			break;
		}
	}

	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][10] == -1)
		{
			BP10 = i;
			break;
		}
	}


	for (i = Size - 1; i >= 0; i -= 1)
	{
		if (Current_Board[i][11] == -1)
		{
			BP11 = i;
			break;
		}
	}


	return;



}

void Count_Box()
{
	//���[�v����֐�
	int i = 0, j = 0;

	//���͔Ֆʂ��������A�ǂ��炪���ɂȂ邩�𔻒肷��
	for (i = 0; i<Size; i++)
	{
		for (j = 0; j<Size; j++)
		{
			if (Current_Board[i][j] == 0)
			{
				P1_Number += 1;

			}
			else if (Current_Board[i][j] == 1)
			{
				P2_Number += 1;

			}

		}

	}
	//�������Ȃ���΍�����X�^�[�g
	if (P1_Number > P2_Number)
	{
		First = 1;
	}
	else if (P1_Number <= P2_Number)
	{
		//�������Ȃ��A�������͓������̏ꍇ������X�^�[�g
		First = 0;

	}


}

//�ЂƂu���ď���������S�ĕ\������֐�.�����͂ǂ��炪��s��������"First"�ϐ�
//�u���ď��Ȃ�A���̏ꏊ�ɋt�̐F��u���Ζh�����Ƃ��\
//���X�^�[�g�Ȃ�΁A����u���ď��Ƃ���ɔ���u���l��
int Game_Start_Win(int which)
{
	//�u���F���t�]
	if (which == 0)
	{
		which = 1;
	}
	else if (which == 1) {
		which = 0;
	}

	printf("�h����\n");

	/*************************set***************************/
	Current_Board[BP0][0] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("0\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("0�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP0][0] = -1;//������
							   /********************************************************/

							   /*************************set***************************/
	Current_Board[BP1][1] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("1\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("1�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP1][1] = -1;
	/********************************************************/

	/*************************set***************************/
	Current_Board[BP2][2] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("2\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("2�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP2][2] = -1;
	/********************************************************/

	/*************************set***************************/
	Current_Board[BP3][3] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("3\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("3�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP3][3] = -1;
	/********************************************************/

	/*************************set***************************/
	Current_Board[BP4][4] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("4\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("4�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP4][4] = -1;
	/********************************************************/

	/*************************set***************************/
	Current_Board[BP5][5] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("5\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("5�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP5][5] = -1;
	/********************************************************/

	/*************************set***************************/
	Current_Board[BP6][6] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("6\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("6�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP6][6] = -1;
	/********************************************************/

	/*************************set***************************/
	Current_Board[BP7][7] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("7\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("7�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP7][7] = -1;
	/********************************************************/

	/*************************set***************************/
	Current_Board[BP8][8] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("8\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("8�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP8][8] = -1;
	/********************************************************/

	/*************************set***************************/
	Current_Board[BP9][9] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("9\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("9�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP9][9] = -1;
	/********************************************************/

	/*************************set***************************/
	Current_Board[BP10][10] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("A\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("A�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP10][10] = -1;
	/********************************************************/

	/*************************set***************************/
	Current_Board[BP11][11] = which;//8�Ԗڂ̐������ʒu�u��(�b��)�c����ϓ�������H
	Find_Win_Point(which);//�u�����Ƃ������������ǂ���
	if (Game_End_Flag == 0 || Game_End_Flag == 1)//���Ă΂��̈ʒu
	{
		//�������Ƃ����̏ꏊ�̔ԍ���\������
		printf("B\n");
		Game_End_Flag = 10;//���ɂ����ꏊ������\�������邽�ߏ��������Ă���
	}
	else {//�u���Ă������ĂȂ�
		  //printf("B�͏�����ł͂Ȃ�\n");//�����Ȃ��ꍇ������0���炂�܂ŕ\�������(�b��)
	}
	Current_Board[BP11][11] = -1;
	/********************************************************/


}

//��u���ď��ꏊ��T��
int Find_Win_Point(int which)
{
	//���[�v����ϐ�
	int i = 0, j = 0;



	//�E������
	for (i = 0; i<Size; i++)
	{
		for (j = 0; j<Size - 3; j++)
			if (Current_Board[i][j] == which &&Current_Board[i][j + 1] == which &&Current_Board[i][j + 2] == which &&Current_Board[i][j + 3] == which)
			{
				Game_End_Flag = which;
				return;
			}
	}
	//��������
	for (i = 0; i<Size; i++)
	{
		for (j = Size - 1; j>4; j -= 1)
			if (Current_Board[i][j] == which &&Current_Board[i][j - 1] == which &&Current_Board[i][j - 2] == which &&Current_Board[i][j - 3] == which)
			{
				Game_End_Flag = which;
				return;
			}
	}
	//�����
	for (i = Size - 1; i>Size - 3; i -= 1)
	{
		for (j = 0; j<Size; j++)
			if (Current_Board[i][j] == which &&Current_Board[i - 1][j] == which &&Current_Board[i - 2][j] == which &&Current_Board[i - 3][j] == which)
			{
				Game_End_Flag = which;
				return;
			}
	}
	//������
	for (i = 0; i<Size - 3; i++)
	{
		for (j = 0; j<Size; j++)
			if (Current_Board[i][j] == which &&Current_Board[i + 1][j] == which &&Current_Board[i + 2][j] == which &&Current_Board[i + 3][j] == which)
			{
				Game_End_Flag = which;
				return;
			}
	}
	//�E�����
	for (i = Size - 1; i>Size - 3; i -= 1)
	{
		for (j = 0; j<Size - 3; j++)
			if (Current_Board[i][j] == which &&Current_Board[i - 1][j + 1] == which &&Current_Board[i - 2][j + 2] == which &&Current_Board[i - 3][j + 3] == which)
			{
				Game_End_Flag = which;
				return;
			}
	}
	//�������
	for (i = Size - 1; i>Size - 3; i -= 1)
	{
		for (j = Size - 1; j>3; j -= 1)
			if (Current_Board[i][j] == which && Current_Board[i - 1][j - 1] == which && Current_Board[i - 2][j - 2] == which && Current_Board[i - 3][j - 3] == which)
			{
				Game_End_Flag = which;
				return;
			}
	}
	//�E������
	for (i = 0; i<Size - 3; i++)
	{
		for (j = 0; j<Size - 3; j++)
			if (Current_Board[i][j] == which &&Current_Board[i + 1][j + 1] == which &&Current_Board[i + 2][j + 2] == which &&Current_Board[i + 3][j + 3] == which)
			{
				Game_End_Flag = which;
				return;
			}
	}
	//��������
	for (i = 0; i<Size - 3; i++)
	{
		for (j = Size - 1; j>Size - 3; j -= 1)
			if (Current_Board[i][j] == which &&Current_Board[i + 1][j - 1] == which &&Current_Board[i + 2][j - 2] == which &&Current_Board[i + 3][j - 3] == which)
			{
				Game_End_Flag = which;
				return;
			}
	}


}
