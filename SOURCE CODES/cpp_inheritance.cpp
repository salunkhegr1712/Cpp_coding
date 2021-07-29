#include<iostream>
using namespace std;
class animal{
    public:
        void sleep(){
            cout<<"animal sleeps"<<endl;
        }
        void leg_count(){
            cout<<"leg count is 4"<<endl;
        }
        void eye_count(){
            cout<<"eye count is 2"<<endl;
        }

};
class mammal: public animal{
    public:
        void reproduction(){
            cout<<"give birth from stomach"<<endl;
        }       
        
};
class herbivorous: public animal{
    public:
        void food(){
            cout<<"eat vegaterian food"<<endl;
        }
};
class cornivorous: public animal{
    public:
        void food(){
            cout<<"eat non-vegaterian food"<<endl;
        }
};
class non_mammal: public animal{
    public:
        void reproduction(){
            cout<<"give birth via eggs"<<endl;
        }

};
class wild: public animal{
    public:
        void resident(){
            cout<<"They live in jungle"<<endl;
        }

};

class domestic: public animal{
    public:
        void resident(){
            cout<<"They live in Man territory"<<endl;
        }
};
class reptile: public animal{
    public:
        void walk(){
            cout<<"They cant walk"<<endl;
        }
};
class non_reptile: public animal{
    public:
        void walk(){
            cout<<"They can walk"<<endl;
        }
};
class tiger:public mammal,public cornivorous,public wild,public non_reptile{
    public:
        void sleep(){
            cout<<"animal sleeps"<<endl;
        }
        void leg_count(){
            cout<<"leg count is 4"<<endl;
        }
        void eye_count(){
            cout<<"eye count is 2"<<endl;
        }

};
class lion:public mammal,public cornivorous,public wild,public non_reptile{
public:
        void sleep(){
            cout<<"animal sleeps"<<endl;
        }
        void leg_count(){
            cout<<"leg count is 4"<<endl;
        }
        void eye_count(){
            cout<<"eye count is 2"<<endl;
        }
};
class elephant:public mammal,public herbivorous,public wild,public non_reptile{
public:
        void sleep(){
            cout<<"animal sleeps"<<endl;
        }
        void leg_count(){
            cout<<"leg count is 4"<<endl;
        }
        void eye_count(){
            cout<<"eye count is 2"<<endl;
        }
};
class birds:public non_mammal,public cornivorous,public wild,public non_reptile{
public:
        void sleep(){
            cout<<"animal sleeps"<<endl;
        }
        void leg_count(){
            cout<<"leg count is 4"<<endl;
        }
        void eye_count(){
            cout<<"eye count is 2"<<endl;
        }
};
class cat:public mammal,public cornivorous,public domestic,public non_reptile{
public:
        void sleep(){
            cout<<"animal sleeps"<<endl;
        }
        void leg_count(){
            cout<<"leg count is 4"<<endl;
        }
        void eye_count(){
            cout<<"eye count is 2"<<endl;
        }
};
class dog:public mammal,public cornivorous,public domestic,public non_reptile{
public:
        void sleep(){
            cout<<"animal sleeps"<<endl;
        }
        void leg_count(){
            cout<<"leg count is 4"<<endl;
        }
        void eye_count(){
            cout<<"eye count is 2"<<endl;
        }
};
class hen:public non_mammal,public cornivorous,public domestic,public non_reptile{
public:
        void sleep(){
            cout<<"animal sleeps"<<endl;
        }
        void leg_count(){
            cout<<"leg count is 4"<<endl;
        }
        void eye_count(){
            cout<<"eye count is 2"<<endl;
        }
};
class buffelo :public mammal,public herbivorous,public domestic,public non_reptile{
public:
        void sleep(){
            cout<<"animal sleeps"<<endl;
        }
        void leg_count(){
            cout<<"leg count is 4"<<endl;
        }
        void eye_count(){
            cout<<"eye count is 2"<<endl;
        }
};
class snake:public non_mammal,public cornivorous,public wild,public reptile{
public:
        void sleep(){
            cout<<"animal sleeps"<<endl;
        }
        void leg_count(){
            cout<<"leg count is 4"<<endl;
        }
        void eye_count(){
            cout<<"eye count is 2"<<endl;
        }
};
int main()
{
    tiger a;
    a.sleep();
    a.eye_count();
    a.leg_count();
    a.food();
    a.reproduction();
    a.resident();
    a.walk();
    return 0;
}