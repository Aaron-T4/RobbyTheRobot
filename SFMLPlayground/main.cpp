#include <iostream>
#include "graphicsmanager.h"	

//ignore this!!
Room* room;
Robot* robby;
GraphicsManager* picture;
//

int main()
{
	//declare the room, robby and picture objects here
	room = new Room(0);
	robby = new Robot();
	picture = new GraphicsManager(room, robby);

	//move robby 5 times

	for (int i = 0; i < 4; i++)
	{
		
		for (int j = 0; j < 17; j++)
		{
			robby->move();
			picture->draw();
		}
		robby->right();
		picture->draw();
	}

}

	//make robby turn right and draw it 
	//robby->right();
	//picture->draw();

	//move robby 5 times
	
/*
	for (int i = 0; i < 7; i++)
	{
		robby->move();
		picture->draw();
	}

	robby->left();
	picture->draw();

	for (int i = 0; i < 6; i++)
	{
		robby->move();
		picture->draw();
	}

	robby->right();
	picture->draw();

	for (int i = 0; i < 3; i++)
	{
		robby->move();
		picture->draw();
	}

	robby->right();
	picture->draw();

	for (int i = 0; i < 1; i++)
	{
		robby->move();
		picture->draw();
	}

	//we need system pause so that we can see where robby ends up
	system("pause");
}

*/