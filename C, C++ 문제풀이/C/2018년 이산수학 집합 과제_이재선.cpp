#include<stdio.h> 
#include<stdlib.h> 

void Input_element(int set[], int set1[], int set2[])
{
	printf("����1�� ������ ���� 10���� �Է��ϼ���\n");
	for (int i = 0; i < 10; i++)
	
		scanf_s("%d", &set1[i]);


	printf("����2�� ������ ���� 10���� �Է��ϼ���\n");

	for (int i = 0; i < 10; i++)
		scanf_s("%d", &set2[i]);
}


void output_element(int set[], int num)
{
	printf("������ ���Ҹ� ��� �մϴ�\n");
	for (int i = 0; i < num; i++)

		printf("[%d]", set[i]);
	printf("}\n");
}

void main()
{
	int set[20] = { 0 };
	int set1[10] = { 0 };
	int set2[10] = { 0 };
	int input = 0;
	int i, j, num;

	while (1)
	{
		printf("1.���տ��� ����/��� 2.������ ���ϱ� 3.������ ���ϱ� 4.������ ���ϱ� 5.���� : ");
		scanf_s("%d", &input);

		switch (input)
		{
		case 1:
			printf("������ ���� 10���� �Է��Ͻÿ�\n");
			for (i = 0; i < 10; i++)
			{
				scanf_s("%d", &set[i]);
			}

			printf("���Ե� ������ ���Ҹ� ����մϴ�\n");
			for (i = 0; i < 10; i++)
				printf("[%d]", set[i]);
			printf("}\n");
			break;

		case 2:
			num = 10;
				Input_element(set, set1, set2);
			for (i = 0; i < 10; i++)
				set[i] = set1[i];
			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 10; j++)
					if (set1[j] == set2[i])
						break;
				if (j >= 10)
					set[num++] = set2[i];

			}
			output_element(set, num);
			break;

		case 3:
			num = 0;
			Input_element(set, set1, set2);
			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 10; j++)
				{
					if (set1[j] == set2[i])
						set[num++] = set2[i];
				}
			}
			output_element(set, num);
			break;

		case 4:
			num = 0;
			Input_element(set, set1, set2);

			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 10; j++)
					if (set1[i] == set2[j])
						break;

				if (j >= 10)
					set[num++] = set1[i];
			}
			output_element(set, num);
			break;

		case 5:
			printf("�����մϴ�.\n");
			exit(1);
			break;



		}

	}
}
