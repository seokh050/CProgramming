#include "Header.h"

//정수 3개를 입력받아서 입력한 숫자 중에서 가장 큰 수를
//화면에 출력합니다.

//힌트) scanf("%d %d %d", &a,&b,&c);
//를 사용시 1 2 3 과 같이 한번에 적어놓은 수만큼 입력이 가능합니다.

int main()
{
	int a, b, c;
	int largest; //가장 큰 수
	printf("정수 3개를 입력하세요 >>\n");
	scanf("%d %d %d", &a, &b, &c);
	
	largest = a;
	//첫번째 값을 가장 큰 값으로 잡겠습니다.
	//그리고 값을 비교해 더 큰 값이 나온다면 그 값으로 변경하겠습니다.

	if (largest < b)
	{
		largest = b;
	}
	if (largest < c)
	{
		largest = c;
	}
	printf("가장 큰 수 = %d입니다.\n", largest);

	return 0;
}

//int main()
//{
	//조건을 2개 이상 붙이는 방법
	//if (a > 0 && b > 0) //a가 0보다 크면서 b가 0보다 크다면(AND)
	//{

	//}
	//if (a > 0 || b > 0) //a가 0보다 크거나 b가 0보다 크다면
	//{

	//}
	//AND 와 OR이 같이 쓰이는 경우
	//a가 0보다 크면서 b가 0보다 크거나 c가 0보다 크다면

	//문제) 세 변의 길이로 유효한 삼각형인지를 조사하는 프로그램을 구현합니다

	//힌트) 두 변의 길이의 합이 나머지 한 변의 길이보다 커야 합니다.

	//출력 예시)
	//변 A,B,C의 길이를 순서대로 입력해주세요 5 4 6
	//삼각형이 성립합니다.

	//변 A,B,C의 길이를 순서대로 입력해주세요 1 0 1
	//삼각형이 아닙니다.
//	int a, b, c;
//	printf("변 A,B,C의 길이를 순서대로 입력해주세요 >> ");
//	scanf("%d""%d""%d", &a, &b, &c);
//	if (a + b > c && c != 0)
//	{
//		printf("삼각형이 성립합니다.");
//	}
//	else if (b + c > a && a != 0)
//	{
//		printf("삼각형이 성립합니다.");
//	}
//	else if (a + c > b && b != 0)
//	{
//		printf("삼각형이 성립합니다.");
//	}
//	else
//	{
//		printf("삼각형이 아닙니다.");
//	}
//	return 0;
//}

