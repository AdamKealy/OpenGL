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
}

void Game::draw()
{
//	cout << "Draw up" << endl;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	/*glBegin(GL_POINTS);
	{glVertex3f(0.0,2.0,-5.0); }
	glEnd();*/

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

	/*glBegin(GL_TRIANGLE_FAN);
	{glVertex3f(0.0, 2.0, -5.0); glVertex3f(2.0, -2.0, -5.0); glVertex3f(2.0, 0.0, -5.0); glVertex3f(0.0, -2.0, -5.0); glVertex3f(-2.0, 0.0, -5.0); glVertex3f(.0, 2.0, -5.0); }
	glEnd();*/

	/*glBegin(GL_QUADS);
	{glVertex3f(-2.0, 2.0, -5.0); glVertex3f(-2.0, -2.0, -5.0); glVertex3f(2.0, -2.0, -5.0); glVertex3f(2.0, 2.0, -5.0);}
	glEnd();*/

	//glBegin(GL_QUAD_STRIP);
	//{glVertex3f(-2.0, 2.0, -5.0); glVertex3f(-1.0, -1.0, -5.0); glVertex3f(0.0, 0.0, -5.0); glVertex3f(-1.0,0.0,-5.0); }
	//glEnd();

	//glBegin(GL_QUAD_STRIP);
	//{glVertex3f(2.0, 2.0, -5.0); glVertex3f(1.0, -1.0, -5.0); glVertex3f(0.0, 0.0, -5.0); glVertex3f(1.0, 0.0, -5.0); }
	//glEnd();

	//glBegin(GL_QUAD_STRIP);
	//{glVertex3f(-2.0, -2.0, -5.0); glVertex3f(-1.0, -1.0, -5.0); glVertex3f(0.0, -1.0, -5.0); glVertex3f(-1.0, -1.0, -5.0); }
	//glEnd();

	//glBegin(GL_QUAD_STRIP);
	//{glVertex3f(2.0, -2.0, -5.0); glVertex3f(1.0, -1.0, -5.0); glVertex3f(0.0, -1.0, -5.0); glVertex3f(1.0, -1.0, -5.0); }
	//glEnd();
	
	/*glBegin(GL_POLYGON);
	{glVertex3f(-2.0, 2.0, -5.0); glVertex3f(-2.0, -2.0, -5.0); glVertex3f(2.0, -2.0, -5.0); glVertex3f(2.0, 2.0, -5.0); }
	glEnd();*/


//	glRotatef(rotationAngle, 0.0f, 5.0f, 0.0f);

//	glTranslatef(0.0f, 0.0f, -0.0069f);

//	glScalef(1.0005f, 1.0f, 1.f);

	
	
	
	
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