#ifndef __SIGTRANSFORM__
#define __SIGTRANSFORM__

#include <stdlib.h>
#include <cstdlib>
//#include <map>
#include "property.hh"
#include "sigtyperules.hh"
#include "tree.hh"

//------------------------------------------------------------------------------
// Recursive transformation
//------------------------------------------------------------------------------

// An abstract "transformation" class. Implement the
// `transformation()` method in the derived class. The `transformation()` method
// should not call itself recursively directly, but via`self()` (or `mapself()` for a list).
class Transform {
    property<Tree> fResult;

   public:
    virtual Tree transformation(Tree) = 0;
    Tree         self(Tree t);
    Tree         mapself(Tree lt);
};

// A "useless" identity transformation on signals. Can be used to test
// that the everything works, and as a pattern for real transformations.
class SignalIdentity : public Transform {
    bool fVisitGen;

   public:
    SignalIdentity() : fVisitGen(false) {}
    virtual Tree transformation(Tree t);
};

// Make explicit automatic promotion to float
class SignalPromotion : public Transform {
    bool fVisitGen;

   public:
    SignalPromotion() : fVisitGen(true) {}
    virtual Tree transformation(Tree sig);
    Tree         smartIntCast(Type t, Tree sig);
    Tree         smartFloatCast(Type t, Tree sig);
};

#endif