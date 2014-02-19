#ifndef _CERts_H_
    #define _CERts_H_
 
#include <SDL2/SDL.h>
 
class CERts {
	private:
		bool _running;
	
    public:
        CERts();
        int on_execute();
		bool on_init();
		void on_event(SDL_Event* Event);
		void on_loop();
		void on_render();
		void on_cleanup();
 
};
 
#endif