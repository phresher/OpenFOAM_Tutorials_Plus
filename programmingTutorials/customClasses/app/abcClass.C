#include "abcClass.H"

abcClass::abcClass()
{
    myInt_= 0;
}

abcClass::~abcClass()
{}

label abcClass::basicFunction() const
{
    Info << "Calling customClass::basicFunction()" << endl;
    return myInt_*2;
}

void abcClass::meshOpFunction(fvMesh& mesh)
{
    Info << "Custom class got a mesh with " << mesh.C().size() << " cells" << endl;
    myInt_ = mesh.C().size();
}
