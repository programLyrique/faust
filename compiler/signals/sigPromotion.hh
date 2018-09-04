#ifndef __SIGPROMOTION__
#define __SIGPROMOTION__

#include "sigTransform.hh"

// Make explicit automatic promotion to float
class SignalPromotion : public SignalIdentity {
    bool fVisitGen;

   public:
    SignalPromotion() : fVisitGen(true) {}
    virtual Tree transformation(Tree sig);
    Tree         smartIntCast(Type t, Tree sig);
    Tree         smartFloatCast(Type t, Tree sig);
};

#endif