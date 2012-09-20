#ifndef CONTACTLISTENER_H
#define CONTACTLISTENER_H

#include "Box2D/Box2D.h"

class ContactListener : public b2ContactListener
{
    public:
        ContactListener() : b2ContactListener() {}
        virtual ~ContactListener() {};

        virtual void BeginContact( b2Contact * contact );
        virtual void EndContact( b2Contact * contact );
    protected:
    private:
};

#endif // CONTACTLISTENER_H

