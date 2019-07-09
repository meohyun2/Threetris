#ifndef __CONSTANT_H__

enum Direction
{
	UP=1,RIGHT=2,DOWN=3,LEFT=4
};

enum ProcessType
{
	DIRECTION=0,// ����Ű �̿�
	DIRECTION_DOWN=1,// �����̽� �ٸ� ������ ��
	AUTO =2, //��Ʈ���� ���� �ڵ����� ������ ��
};

enum KeyCode
{
	UP_KEY_CODE=72,// Ű���� ���� ������ ��,
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

	//��ó[kkikkodev �� IT �̾߱�]
};

#define MAX_SPEED 10
#define MIN_SPEED 1

#endif // !__CONSTANT_H__
