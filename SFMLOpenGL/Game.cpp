#include <Game.h>

// // Uncomment for Part 2
// // ********************
bool flip = false;
int current = 1;
// // ********************

Game::Game() : window(VideoMode(800, 600), "OpenGL"),
primatives(2)
{
	// // Uncomment for Part 2
	// // ********************
	 index = glGenLists(primatives);
	// // ********************
}

Game::~Game() {}

void Game::run()
{

	initialize();

	Event event;

	while (isRunning) {

		cout << "Game running..." << endl;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}
}

void Game::initialize()
{
	isRunning = true;
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
}

void Game::update()
{
	cout << "Update up" << endl;
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		glRotatef(rotationAngle, 5.0f, 0.0f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		glRotatef(rotationAngle, -5.0f, 0.0f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		glRotatef(rotationAngle, 0.0f, -5.0f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		glRotatef(rotationAngle, 0.0f, 5.0f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Delete))
	{
		glRotatef(rotationAngle, 0.0f, 0.0f, 5.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::PageDown))
	{
		glRotatef(rotationAngle, 0.0f, 0.0f, -5.0f);
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
	{
		glTranslatef(0.0f, 0.0f, -0.0069f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
	{
		glTranslatef(0.0f, 0.0f, 0.0069f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		glTranslatef(-0.0069f, 0.0f, -0.00f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		glTranslatef(0.0069f, 0.0f, 0.0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		glTranslatef(0.0f, 0.0069f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		glTranslatef(0.0f, -0.0069, 0.0f);
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
	{
		glScalef(1.0005f, 1.0f, 1.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
	{
		glScalef(1.f, 1.0005, 1.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
	{
		glScalef(1.f, 1.0f, 1.0005f);
	}
	

}

void Game::draw()
{
//	cout << "Draw up" << endl;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	glBegin(GL_POINTS);
	{glVertex3f(2.0,0.0,-5.0); }
	glEnd();

	glBegin(GL_LINES);
	{glVertex3f(-2.0, 2.0, -5.0); glVertex3f(-2.0, 1.0, -5.0); }
	glEnd();

	glBegin(GL_LINE_STRIP);
	{glVertex3f(-1.9, 2.0, -5.0); glVertex3f(-1.9, 1.0, -5.0); glVertex3f(-1.8, 1.0, -5.0); }
	glEnd();

	glBegin(GL_LINE_LOOP);
	{glVertex3f(-1.7, 2.0, -5.0); glVertex3f(-1.7, 1.0, -5.0); glVertex3f(-1.6, 1.5, -5.0); }
	glEnd();
	
	glBegin(GL_TRIANGLES);
	{ glVertex3f(-1.5, 2.0, -5.0); glVertex3f(-1.5, 1.0, -5.0); glVertex3f(-1.4, 1.5, -5.0); }
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	{glVertex3f(-1.3, 2.0, -5.0); glVertex3f(-1.1, 2.0, -5.0); glVertex3f(-1.1, 1.0, -5.0); glVertex3f(-1.3, 1.0, -5.0);}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);{
	glVertex3f(1.0, 1.5, -5.0); 
	glVertex3f(1.5, 1.5, -5.0);
	glVertex3f(1.25, 1.75, -5.0);
	glVertex3f(.75, 1.75, -5.0);
	glVertex3f(.5, 1.5, -5.0);
	glVertex3f(1.0, 1., -5.0);
	glVertex3f(1.25, 1., -5.0);}
	glEnd();

	glBegin(GL_QUADS);
	{
	glVertex3f(-1.0, 2.0, -5.0);
	glVertex3f(-1.0, 1.0, -5.0);
	glVertex3f(-0.5, 1.0, -5.0);
	glVertex3f(-0.5, 2.0, -5.0);
	}
	glEnd();

	glBegin(GL_QUAD_STRIP);
	{
	glVertex3f(-.4, 1.0, -5.0);
	glVertex3f(-.4, 2.0, -5.0);
	glVertex3f(-.2, 1.0, -5.0);
	glVertex3f(-.2, 2.0, -5.0);
	glVertex3f(0.0, 1.0, -5.0);
	glVertex3f(0.0, 2.0, -5.0);
	}
	glEnd();
	
	glBegin(GL_POLYGON);
	{glVertex3f(0.0, 0.6, -5.0);
	glVertex3f(0.25, 0.25, -5.0);
	glVertex3f(0.6, 0.0, -5.0);
	glVertex3f(0.25, -0.25, -5.0);
	glVertex3f(0.0, -0.6, -5.0);
	glVertex3f(-.25, -.25, -5.0);
	glVertex3f(-.6, 0.0, -5.0);
	glVertex3f(-.25, .25, -5.0);
	}
	glEnd();


	

	
	
	
	
	//Invesitgation into gl stuff and such.
	//Conclusion: Lots of fun and random stuff to do.
	//Victum: my future
	//Suspect: Pete, Phill, 3rd level education system
	//Method: Blunt force trauma to the head/ slow torture
	//Motive: they got paid
	//Known witnesses: most of the 2a CW_208 class(Don't ask Dylan he wont remember), My innocence(missing)
	// Designation : COLD CASE

	// Officer: Gen. Madness

	window.display();

}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}