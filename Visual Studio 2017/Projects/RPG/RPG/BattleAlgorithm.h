#include<stdio.h>

int Sentou(char x[64], char y[64], char z[64],/*HP*/ int a, int b, int c,/*�U��*/ int d, int e, int f,/*��*/ int g, int h, int i, /*�G����f�[�^*/char j[64], int k,int l)
{
	int m, n, o;
	while ((k >= 0)&&(a >= 0) && (b >= 0) && (c >= 0)) {


		printf("%s�̃X�e�[�^�X\nHitPoint:%d\tAttackPoint;%d\tHealingPoint;%d\n",x,a,d,g);//�e�L�����f�[�^+�s���I��
		printf("%s�̃X�e�[�^�X\nHitPoint:%d\tAttackPoint;%d\tHealingPoint;%d\n",y,b,e,h);//�e�L�����f�[�^+�s���I��
		printf("%s�̃X�e�[�^�X\nHitPoint:%d\tAttackPoint;%d\tHealingPoint;%d\n",z,c,f,i);//�e�L�����f�[�^+�s���I��
		printf("%s�̃X�e�[�^�X\nHitPoint:%d\tAttackPoint;%d\n",j,k,l);//�e�L�����f�[�^+�s���I��
		printf("%s�̍s����I�����Ă�������\n1:�U��\t2:��\t3������(�S�L���������܂�)\n", x);

		scanf("%d", &m);
		if (m == 1) {
			printf("�U�������%s��%d�_���[�W�c��HitPoint%d\n",j,d,k=k-d);//�_���[�W�\��
		}
		else if (m == 2) {
			printf("�񕜑Ώۂ�I��ł�������\n1:%s\t2:%s\t3:%s\n",x,y,z);//�񕜑ΏۑI��
			scanf("%d", &m);
			if (m == 1) {
				a += g;
				printf("%s��%d�񕜌���HitPoint%d\n",x,g,a);//�񕜕\��
			}
			else if (m == 2) {
				b += g;
				printf("%s��%d�񕜌���HitPoint%d\n",x,g,b);//�񕜕\��
			}
			else if (m == 3) {
				c += g;
				printf("%s��%d�񕜌���HitPoint%d\n",x,g,c);//�񕜕\��
			}
			else {
				k += g;
				printf("�G������񕜂����\n");//�񕜕\��
			}

		}
		else if (m == 3) {
			return 0;
		}
		else {
			printf("�I�����~�X�����悱�̃^�[���͉����ł��Ȃ���\n");//�I���~�X
		}


		printf("%s�̍s����I�����Ă�������\n1:�U��\t2:��\t3������(�S�L���������܂�)\n", y);

		scanf("%d", &n);
		if (n == 1) {
			printf("�U�������%s��%d�_���[�W�c��HitPoint%d\n",j,e,k=k-e);//�_���[�W�\��
		}
		else if (n == 2) {
			printf("�񕜑Ώۂ�I��ł�������\n1:%s\t2:%s\t3:%s\n",x,y,z);//�񕜑ΏۑI��
			scanf("%d", &n);
			if (n == 1) {
				a += h;
				printf("%s��%d�񕜌���HitPoint%d\n",x,h,a);//�񕜕\��
			}
			else if (n == 2) {
				b += h;
				printf("%s��%d�񕜌���HitPoint%d\n",x,h,b);//�񕜕\��
			}
			else if (n == 3) {
				c += h;
				printf("%s��%d�񕜌���HitPoint%d\n",x,h,c);//�񕜕\��
			}
			else {
				k += h;
				printf("�G������񕜂����\n");//�񕜕\��
			}

		}
		else if (n == 3) {
			return 0;
		}
		else {
			printf("�I�����~�X�����悱�̃^�[���͉����ł��Ȃ���\n");//�I���~�X
		}

		printf("%s�̍s����I�����Ă�������\n1:�U��\t2:��\t3������(�S�L���������܂�)\n", x);

		scanf("%d", &o);
		if (o == 1) {
			printf("�U�������%s��%d�_���[�W�c��HitPoint%d\n",j,f,k=k-f);//�_���[�W�\��
		}
		else if (o == 2) {
			printf("�񕜑Ώۂ�I��ł�������\n1:%s\t2:%s\t3:%s\n",x,y,z);//�񕜑ΏۑI��
			scanf("%d", &o);
			if (o == 1) {
				a += i;
				printf("%s��%d�񕜌���HitPoint%d\n",x,i,a);//�񕜕\��
			}
			else if (o == 2) {
				b += i;
				printf("%s��%d�񕜌���HitPoint%d\n",x,i,b);//�񕜕\��
			}
			else if (o == 3) {
				c += i;
				printf("%s��%d�񕜌���HitPoint%d\n",x,i,c);//�񕜕\��
			}
			else {
				k += i;
				printf("�G������񕜂����\n");//�񕜕\��
			}

		}
		else if (o == 3) {
			return 0;
		}
		else {
			printf("�I�����~�X�����悱�̃^�[���͉����ł��Ȃ���\n");//�I���~�X
		}

		a -= l;
		b -= l;
		c -= l;
		printf("�G����̍U�����ׂẴL������%d�_���[�W\n",l);//�_���[�W�\��



	}
	if(k<=0){
        printf("�G��|������\n");
        return 1;
	}
	else{
        printf("�S�ł��Ă��܂���\n");
        return 2;
	}
}
