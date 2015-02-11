#ifndef BALL_H
#define BALL_H

#include<SDL.h>

#include<vector>

class Platform;

class Ball
{
	int x,y,size;
	float vx,vy;

public:

	Ball(int x,int y,int size)
	{
		this->x=x;
		this->y=y;
		this->size=size;
		this->vx=3;
		this->vy=2;
	}
	void update(std::vector<Platform*> platforms);
	void draw(SDL_Renderer* renderer);
};

#endif