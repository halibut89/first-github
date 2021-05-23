#include <stdio.h>
#include <cstdint>

#define ROW		3
#define COL		3

void showGrid(void);


int main(void)
{
	short tic_AS[ROW][COL];
	//int16_t row, col;

	printf("게임 실행 횟수 제한 : 총 9 회\n\n");
	showGrid();

	/*게임판 초기화*/

	for (int row = 0; row < ROW ; row++)
	{
		for (int col = 0; col < COL; col++)
			tic_AS[row][col] = ' ';

		/*사용자로 위치를 받아 게임판에 표시*/
		printf("게임요령 -> 홀수 횟수와 짝수 횟수로 상대편 구분\n");
		printf("[사용자 1] : 홀수 횟수 사용\n");
		printf("[사용자 2] : 짝수 횟수 사용\n");
		printf("[허용 범위] : 0 ~ 2까지만 허용!\n");
	}
}

//화면에 게임판을 출력하는 함수
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