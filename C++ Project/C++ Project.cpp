#include <iostream>
#include <conio.h>

using namespace std;

void SetOurMat(char x[][125])
{
	for (int r = 0; r < 35; r++)
	{
		for (int c = 0; c < 125; c++)
		{
			x[r][c] = ' ';
		}
	}
}

void SetGround(char x[][125], int rG, int cG, int rE, int cE, int rE2, int cE2)
{
	int a, b, ct;
	a = 3;
	b = 0;
	ct = 0;

	//normal ground filling:
	for (int i = 0; i < 125; i++)
	{
		x[rG][cG + b] = 37;
		x[rG - 1][cG + b] = 37;
		b++;
	}

	//straight:
	for (int i = 0; i < 40; i++)
	{
		x[rG - a][cG + b] = 95;
		b++;
	}

	ct = b;
	//normal ground filling:
	for (int i = 0; i < 26; i++)
	{
		x[rG - a][cG + ct] = 37;
		ct++;
	}

	//up:
	x[rG - a][cG + b] = 47;
	a++;
	b++;

	//straight:
	for (int i = 0; i < 10; i++)
	{
		x[rG - a][cG + b] = 95;
		b++;
	}

	//up:
	x[rG - a][cG + b] = 47;
	a++;
	b++;

	ct = b;
	//normal ground filling:
	for (int i = 0; i < 10; i++)
	{
		x[rG - a + 1][cG + ct] = 37;
		ct++;
	}

	//straight:
	for (int i = 0; i < 10; i++)
	{
		x[rG - a][cG + b] = 95;
		b++;
	}
	a--;

	//down:
	x[rG - a][cG + b] = 92;
	b++;

	//straight:
	for (int i = 0; i < 3; i++)
	{
		x[rG - a][cG + b] = 95;
		b++;
	}
	a--;

	//down:
	x[rG - a][cG + b] = 92;
	b++;

	//straight:
	for (int i = 0; i < 8; i++)
	{
		x[rG - a][cG + b] = 95;
		b++;
	}

	//up:
	x[rG - a][cG + b] = 47;
	a++;
	b++;

	ct = b;
	//normal ground filling:
	for (int i = 0; i < 15; i++)
	{
		x[rG - a + 1][cG + ct] = 37;
		ct++;
	}

	//straight:
	for (int i = 0; i < 15; i++)
	{
		x[rG - a][cG + b] = 95;
		b++;
	}
	a--;

	//down:
	x[rG - a][cG + b] = 92;
	b++;

	//straight:
	for (int i = 0; i < 10; i++)
	{
		x[rG - a][cG + b] = 95;
		b++;
	}

	//up:
	x[rG - a][cG + b] = 47;
	a++;
	b++;

	ct = b;
	//normal ground filling:
	for (int i = 0; i < 21; i++)
	{
		x[rG - a + 1][cG + ct] = 37;
		ct++;
	}

	//straight:
	for (int i = 0; i < 10; i++)
	{
		x[rG - a][cG + b] = 95;
		b++;
	}

	//up:
	x[rG - a][cG + b] = 47;
	a++;
	b++;

	ct = b;
	//normal ground filling:
	for (int i = 0; i < 8; i++)
	{
		x[rG - a + 1][cG + ct] = 37;
		ct++;
	}

	//straight:
	for (int i = 0; i < 8; i++)
	{
		x[rG - a][cG + b] = 95;
		b++;
	}
	a--;

	//down:
	x[rG - a][cG + b] = 92;
	b++;

	//straight:
	for (int i = 0; i < 2; i++)
	{
		x[rG - a][cG + b] = 95;
		b++;
	}
	a--;

	x[rE][cE] = 1;
	x[rE + 1][cE] = 219;
	x[rE + 1][cE - 1] = 180;
	x[rE + 2][cE] = 207;

	x[rE2][cE2] = 1;
	x[rE2 + 1][cE2] = 219;
	x[rE2 + 1][cE2 - 1] = 180;
	x[rE2 + 2][cE2] = 207;
}

void MoveGround(int& cB, int &cE, int &cE2)
{
	cB--;
	cE--;
	cE2--;
	/*if (cB == -1)
	{
		cB = 0;
	}*/
}

void SetBackground(char x[][125], int rB, int cB)
{
	int a, b;
	a = 0;
	b = 7;

	//up:
	for (int i = 0; i < 6; i++)
	{
		x[rB - a][cB + a] = 47;
		a++;
	}

	x[rB - a][cB + a] = 95;
	a--;

	//down:
	for (int i = 0; i < 6; i++)
	{
		x[rB - a][cB + b] = 92;
		a--;
		b++;
	}
	a++;

	//straight:
	for (int i = 0; i < 3; i++)
	{
		x[rB - a][cB + b] = 95;
		b++;
	}
	a--;

	//down:
	for (int i = 0; i < 4; i++)
	{
		x[rB - a][cB + b] = 92;
		a--;
		b++;
	}
	a++;

	//straight:
	for (int i = 0; i < 5; i++)
	{
		x[rB - a][cB + b] = 95;
		b++;
	}

	//up:
	for (int i = 0; i < 7; i++)
	{
		x[rB - a][cB + b] = 47;
		a++;
		b++;
	}

	//straight:
	for (int i = 0; i < 2; i++)
	{
		x[rB - a][cB + b] = 95;
		b++;
	}

	//up:
	for (int i = 0; i < 4; i++)
	{
		x[rB - a][cB + b] = 47;
		a++;
		b++;
	}

	//straight:
	for (int i = 0; i < 2; i++)
	{
		x[rB - a][cB + b] = 95;
		b++;
	}

	//up:
	for (int i = 0; i < 3; i++)
	{
		x[rB - a][cB + b] = 47;
		a++;
		b++;
	}

	x[rB - a][cB + b] = 95;
	b++;
	a--;

	//down:
	for (int i = 0; i < 6; i++)
	{
		x[rB - a][cB + b] = 92;
		a--;
		b++;
	}
	a++;

	x[rB - a][cB + b] = 95;
	b++;
	a--;

	//down:
	for (int i = 0; i < 3; i++)
	{
		x[rB - a][cB + b] = 92;
		a--;
		b++;
	}
	a++;

	//straight:
	for (int i = 0; i < 6; i++)
	{
		x[rB - a][cB + b] = 95;
		b++;
	}

	//up:
	for (int i = 0; i < 5; i++)
	{
		x[rB - a][cB + b] = 47;
		a++;
		b++;
	}

	x[rB - a][cB + b] = 95;
	b++;
	a--;

	//down:
	for (int i = 0; i < 13; i++)
	{
		x[rB - a][cB + b] = 92;
		a--;
		b++;
	}
	a++;

	//straight:
	for (int i = 0; i < 5; i++)
	{
		x[rB - a][cB + b] = 95;
		b++;
	}

	//up:
	for (int i = 0; i < 6; i++)
	{
		x[rB - a][cB + b] = 47;
		a++;
		b++;
	}

	x[rB - a][cB + b] = 95;
	b++;
	a--;

	//down:
	for (int i = 0; i < 3; i++)
	{
		x[rB - a][cB + b] = 92;
		a--;
		b++;
	}
	a++;

	x[rB - a][cB + b] = 95;
	b++;

	//up:
	for (int i = 0; i < 13; i++)
	{
		x[rB - a][cB + b] = 47;
		a++;
		b++;
	}

	x[rB - a][cB + b] = 95;
	b++;
	a--;

	//down:
	for (int i = 0; i < 11; i++)
	{
		x[rB - a][cB + b] = 92;
		a--;
		b++;
	}
	a++;

	x[rB - a][cB + b] = 95;
	b++;

	x[rB - a][cB + b] = 95;
	b++;

	//up:
	for (int i = 0; i < 4; i++)
	{
		x[rB - a][cB + b] = 47;
		a++;
		b++;
	}
}

void MoveBackground(int &cB)
{
	cB--;
}

void SetCar(char x[][125], int &rC, int &cC, int& rW, int& cW)
{
	int c = 1;

	//car body:
	x[rC][cC] = 47;
	x[rC + 1][cC] = 92;
	for (int i = 0; i < 10; i++)
	{
		x[rC - 1][cC + c] = 95;
		c++;
	}
	c = 1;
	for (int i = 0; i < 9; i++)
	{
		x[rC][cC + c] = 177;
		c++;
	}
	x[rC][cC + c] = 173;
	c = 1;
	for (int i = 0; i < 9; i++)
	{
		x[rC + 1][cC + c] = 178;
		c++;
	}
	for (int i = 0; i < 3; i++)
	{
		x[rC + 1][cC + c] = 176;
		c++;
	}
	x[rC - 1][cC + 3] = 186;
	x[rC][cC + 11] = 92;
	x[rC][cC + 12] = 95;
	x[rC + 1][cC + 13] = 92;
	// 47='/' , 92='\' , 95='_'

	if (rC - rW == -1)
	{
		x[rC + 2][cC + 2] = 179;
		x[rC + 2][cC + 3] = 179;
		x[rC + 2][cC + 9] = 179;
		x[rC + 2][cC + 10] = 179;
	}
	if (rC - rW == -2)
	{
		x[rC + 2][cC + 2] = 179;
		x[rC + 2][cC + 3] = 179;
		x[rC + 2][cC + 9] = 179;
		x[rC + 2][cC + 10] = 179;
		x[rC + 3][cC + 2] = 179;
		x[rC + 3][cC + 3] = 179;
		x[rC + 3][cC + 9] = 179;
		x[rC + 3][cC + 10] = 179;
	}
	if (rC - rW == -3)
	{
		x[rC + 2][cC + 2] = 179;
		x[rC + 2][cC + 3] = 179;
		x[rC + 2][cC + 9] = 179;
		x[rC + 2][cC + 10] = 179;
		x[rC + 3][cC + 2] = 179;
		x[rC + 3][cC + 3] = 179;
		x[rC + 3][cC + 9] = 179;
		x[rC + 3][cC + 10] = 179;
		x[rC + 4][cC + 2] = 179;
		x[rC + 4][cC + 3] = 179;
		x[rC + 4][cC + 9] = 179;
		x[rC + 4][cC + 10] = 179;
	}
}

void wheels(char x[][125], int& rW, int& cW)
{
	//first wheel:
	x[rW + 2][cW + 2] = 95;
	x[rW + 2][cW + 3] = 95;
	x[rW + 3][cW + 1] = 47;
	x[rW + 3][cW + 4] = 92;
	x[rW + 4][cW + 1] = 92;
	x[rW + 4][cW + 4] = 47;
	x[rW + 4][cW + 2] = 95;
	x[rW + 4][cW + 3] = 95;
	//second wheel:
	x[rW + 2][cW + 9] = 95;
	x[rW + 2][cW + 10] = 95;
	x[rW + 3][cW + 8] = 47;
	x[rW + 4][cW + 8] = 92;
	x[rW + 3][cW + 11] = 92;
	x[rW + 4][cW + 11] = 47;
	x[rW + 4][cW + 9] = 95;
	x[rW + 4][cW + 10] = 95;
}

void setdrone(char x[][125], int rD, int cD)
{
	x[rD][cD] = 190;
	x[rD][cD + 1] = 175;
	x[rD][cD - 1] = 174;
	x[rD + 1][cD - 1] = '/';
	x[rD + 1][cD + 1] = '\\';
}

void bullets(char x[][125], int rBullets, int cBullets)
{
	x[rBullets][cBullets + 3] = '|';
	for (int i = 0; i < 27; i++)
	{
		rBullets--;
	}
}

void MoveCarRight(char x[][125], int &rC, int &cC, int& rB, int& cB, int& rG, int& cG, int &cW)
{
	cC++;
	cW++;
}

void MoveCarLeft(char x[][125], int &rC, int &cC, int& rB, int& cB, int& rG, int& cG, int& cW)
{
	cC--;
	cB+=2;
	cG+=2;
	cW--;
}

void MoveCarUp(char x[][125], int &rC, int &cC, int& cW, int& rW)
{
	rC--;
	rW--;
}
void CarJump(char x[][125], int& rC, int& cC, int& cW, int& rW)
{
	rC -= 3;
	cC++;
	rW -= 3;
	cW++;
}
void CarComeBack(char x[][125], int& rC, int& cC, int& cW, int& rW)
{
	rC += 3;
	cC++;
	rW += 3;
	cW++;
}
void MoveCarDown(char x[][125], int& rC, int& cC, int& rW)
{
	rC++;
	rW++;
}

void dbullet(char x[][125], int& rD, int& cD)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 34; j++)
		{
			x[j][cD] = 42;
		}
	}
}

void CheckMat(char x[][125], int rC)
{

	for (int r = 0; r < 35; r++)
	{
		for (int c = 0; c < 125; c++)
		{
			if (x[r][c] == 47 && x[r][c + 1] == 47)
			{
				rC--;
			}
		}
	}
}

void cout_mat_to_screen(char x[][125])
{
	system("cls");
	for (int r = 0; r < 35; r++)
	{
		for (int c = 0; c < 125; c++)
		{
			cout << x[r][c];
		}
	}
}

void main()
{
	char x[35][125];
	int ct = 0;
	int lost = 0;
	int won = 0;

	//drone row and column
	int rD = 2;
	int cD = 10;

	//background row and column
	int rB = 15;
	int cB = 0;

	//ground row and column
	int rG = 34;
	int cG = 0;

	//enemys rows and columns
	int rE = 28;
	int cE = 118;
	int rE2 = 28;
	int cE2 = 55;

	//car row and column
	int rC = 28;
	int cC = 4;

	//wheels row and column
	int rW = 28;
	int cW = 4;

	//bullets row and column
	int rBullets = 25;
	int cBullets = 7;

	int bump = 0;
	for (;; )
	{
		for (; !_kbhit();)
		{
			SetOurMat(x);
			SetBackground(x, rB, cB);
			MoveBackground(cB);
			SetGround(x, rG, cG, rE, cE, rE2, cE2);
			MoveGround(cG, cE, cE2);
			SetCar(x, rC, cC, rW, cW);
			wheels(x, rW, cW);
			setdrone(x, rD, cD);
			//dbullet(x, rD, cD);
			CheckMat(x, rC);
			cout_mat_to_screen(x);
			if (_kbhit())
			{
				char ch = _getch();
				if (ch == 'w' && (rC - (rB + 6)) > 0)
				{
					MoveCarUp(x, rC, cC, cW, rW);
					break;
				}
				if (ch == 's' && (rG - (rC + 6)) > 0)
				{
					MoveCarDown(x, rC, cC, rW);
					break;	
				}
				if (ch == 'd')
				{
					MoveCarRight(x, rC, cC, rB, cB, rG, cG, cW);
					break;
				}
				if (ch == 'a')
				{
					MoveCarLeft(x, rC, cC, rB, cB, rG, cG, cW);
					break;
				}
				if (ch == 'j' && (rG - (rC + 6)) > 0)
				{
					CarJump(x, rC, cC, cW, rW);
					break;
				}
				if (ch == 'h')
				{
					bullets(x, rBullets, cBullets);
					break;
				}
				if (ch == 'b')
				{
					x[rC + 1][cC] = '$';
				}
			}
			for (int r = 0; r < 35; r++)
			{
				for (int c = 0; c < 125; c++)
				{
					if (x[r][c] == 47 && x[r][c + 1] == 47)
					{
						MoveCarUp(x, rC, cC, cW, rW);
					}
					if (x[r][c] == 92 && x[r - 1][c] == 92)
					{
						MoveCarDown(x, rC, cC, rW);
					}
				}
			}


			if (bump == 0)
			{
				rC--;
			}
			if (bump == 1)
			{
				rC--;
			}
			if (bump == 2)
			{
				rC--;
			}
			if (bump == 3)
			{
				rC++;
			}
			if (bump == 4)
			{
				rC++;
			}
			if (bump == 5)
			{
				rC++;
				bump = -1;
			}
			bump++;

			//checker if lost
			for (int r = 0; r < 35; r++)
			{
				for (int c = 0; c < 125; c++)
				{
					if ((x[r][c] == 47 && x[r][c + 1] == 1) || (x[r][c] == 95 && x[r + 1][c] == 1) || (x[r][c] == 95 && x[r][c + 1] == 1))
					{
						lost = 1;
						break;
					}
				}
			}
			if (lost == 1)
			{
				break;
			}

			//check if won
			ct++;
			if (ct == 125)
			{
				won = 1;
				break;
			}
		}

		//check if lost
		if (lost == 1)
		{
			cout << endl << endl << endl << "You lost! Better luck next time" << endl;
			break;
		}

		//check if won
		if (won == 1)
		{
			cout << endl << endl << endl << "Congratulations! You won!" << endl << endl << endl;
			break;
		}
	}

	system("pause");
}