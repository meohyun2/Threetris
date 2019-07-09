#ifndef __CONSTANT_H__

enum Direction
{
	UP=1,RIGHT=2,DOWN=3,LEFT=4
};

enum ProcessType
{
	DIRECTION=0,// 방향키 이용
	DIRECTION_DOWN=1,// 스페이스 바를 눌렀을 때
	AUTO =2, //테트리스 줄이 자동으로 내려올 때
};

enum KeyCode
{
	UP_KEY_CODE=72,// 키보드 위를 눌렀을 때,
	DOWN_KEY_CODE = 80,
	LEFT_KEY_CODE = 75,
	RIGHT_KEY_CODE = 77
};

enum BoardType
{
	EMPTY = 0,
	MOVING_BLOCK = 1,
	FIXED_BLOCK = 2,
	LEFT_WALL =10,RIGHT_WALL=11, TOP_WALL=12,BOTTOM_WALL=13,
	LEFT_TOP_EDGE, RIGHT_TOP_EDGE, LEFT_BOTTOM_EDGE, RIGHT_BOTTOM_EDGE

	//출처[kkikkodev 의 IT 이야기]
};

#define MAX_SPEED 10
#define MIN_SPEED 1

#endif // !__CONSTANT_H__
