#include <stdio.h>
#include <cstdint>

#define ROW		3
#define COL		3

void showGrid(void);


int main(void)
{
	short tic_AS[ROW][COL];
	//int16_t row, col;

	printf("���� ���� Ƚ�� ���� : �� 9 ȸ\n\n");
	showGrid();

	/*������ �ʱ�ȭ*/

	for (int row = 0; row < ROW ; row++)
	{
		for (int col = 0; col < COL; col++)
			tic_AS[row][col] = ' ';

		/*����ڷ� ��ġ�� �޾� �����ǿ� ǥ��*/
		printf("���ӿ�� -> Ȧ�� Ƚ���� ¦�� Ƚ���� ����� ����\n");
		printf("[����� 1] : Ȧ�� Ƚ�� ���\n");
		printf("[����� 2] : ¦�� Ƚ�� ���\n");
		printf("[��� ����] : 0 ~ 2������ ���!\n");
	}
}

//ȭ�鿡 �������� ����ϴ� �Լ�
void showGrid(void)
{
	printf("|---|---|---|\n");
	printf("| 1 | 2 | 3 |\n");
	printf("|---|---|---|\n");
	printf("| 4 | 5 | 6 |\n");
	printf("|---|---|---|\n");
	printf("| 7 | 8 | 9 |\n");
	printf("|---|---|---|\n");

}