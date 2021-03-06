#ifndef GLUTILS_H
#define GLUTILS_H

#include "cookbookogl.h"

namespace GLUtils
{
    int checkForOpenGLError(const char *, int);
    
    void dumpGLInfo(bool dumpExtensions = false);
    
    void debugCallback( GLenum source, GLenum type, GLuint id,
		GLenum severity, GLsizei length, const GLchar * msg, void * param );
}

#endif // GLUTILS_H
