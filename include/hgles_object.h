#pragma once
#include <glad/glad.h>
#include "hgles_dll.h"

namespace hgles
{
class ContextState;
class MGL_DLL_PUBLIC Object
{
protected:

	ContextState* m_context;

public:
	Object(ContextState* origin_context = nullptr, GLuint name=0):m_context(origin_context),name(name)
	{

	}
	GLuint name;
};
}