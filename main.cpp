#include "GL/gl.h"
#include "GL/glut.h"
#include <string>

void drawText( const std::string &text );

/**
 * Main draw loop
 */
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    // - main loop ------------
    glColor3f( 0xff, 0xff, 0xff );
    glRasterPos2f( 0, 0 );
    drawText( "Simple GLUT Skeleton" );
    // - main loop ------------

    glutSwapBuffers();
}

/**
 * Set up glut window
 * @param argc
 * @param argv
 */
void init( int &argc, char *argv[] )
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE );
    glutInitWindowSize( 400, 300 );
    glutCreateWindow( "GLUT Skeleton" );

    glClearColor( 0x00, 0x00, 0x00, 0xff );
    glutDisplayFunc( display );
}

/**
 * Drawing text is weird in glut
 * @param text
 */
void drawText( const std::string &text )
{
    for ( int i = 0; i < text.length(); i++ )
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10, text[ i ] );
    }
}


int main( int argc, char *argv[] )
{
    init( argc, argv );

    glutMainLoop();

    return 0;
}
