#include "EdtsBox.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// EdtsBox
EdtsBox::EdtsBox()
{
}

EdtsBox::~EdtsBox()
{
}

BaseBox* EdtsBox::CreateObject()
{
	return new EdtsBox();
}
