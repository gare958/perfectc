#include <stdio.h>

int wow = 100;

int main() {
	int score;
	printf("점수(0에서 100사이) 입력: ");
	scanf("%d", &score);
	switch (score / 10)	{
        case wow:
            printf("WOW!");
            break;
		default:
            if (score < 0 || score > 100)
                printf("점수 입력이 잘못되었습니다.\n");
            else
    			printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'F');	break;
		case 10: case 9:
			printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'A');	break;
		case 8:
			printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'B');	break;
		case 7:
			printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'C');	break;
		case 6:
			printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'D');	break;
	}
}