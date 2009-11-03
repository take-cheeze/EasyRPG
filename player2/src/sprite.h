#ifndef __sprite__
#define __sprite__

#include <map>
#include "SDL.h"
#include "viewport.h"
#include "bitmap.h"
#include "rect.h"
#include "color.h"
#include "tone.h"
#include "graphics.h"
class Viewport;
class Sprite {
	
public:
	Sprite();
	Sprite(Viewport* iviewport);
	~Sprite();
	
	void dispose();
	bool is_disposed();
	void flash(Color *flash_color, int duration);
	void update();

	void draw(SDL_Surface *screen);

	Viewport* get_viewport();
	Bitmap* get_bitmap();
	Rect* get_src_rect();
	bool get_visible();
	int get_x();
	int get_y();
	int get_z();
	int get_ox();
	int get_oy();
	int get_zoom_x();
	int get_zoom_y();
	int get_angle();
	bool get_mirror_x();
	bool get_mirror_y();
	int get_bush_depth();
	int get_opacity();
	int get_blend_type();
	Color* get_color();
	Tone* get_tone();
	
	void set_viewport(Viewport* nviewport);
	void set_bitmap(Bitmap* nbitmap);
	void set_src_rect(Rect* nsrc_rect);
	void set_visible(bool nvisible);
	void set_x(int nx);
	void set_y(int ny);
	void set_z(int nz);
	void set_ox(int nox);
	void set_oy(int noy);
	void set_zoom_x(int nzoom_x);
	void set_zoom_y(int nzoom_y);
	void set_angle(int nangle);
	void set_mirror_x(bool nmirror_x);
	void set_mirror_y(bool nmirror_y);
	void set_bush_depth(int nbush_depth);
	void set_opacity(int nopacity);
	void set_blend_type(int nblend_type);
	void set_color(Color* ncolor);
	void set_tone(Tone* ntone);
	
	static std::map<int, Sprite*> sprites;
	static void add_sprite(int id, Sprite* sprite);
	static void remove_sprite(int id);
	
private:
	Viewport *viewport;
	Bitmap *bitmap;
	Rect *src_rect;
	bool visible;
	int x;
	int y;
	int z;
	int ox;
	int oy;
	int zoom_x;
	int zoom_y;
	int angle;
	bool mirror_x;
	bool mirror_y;
	int bush_depth;
	int opacity;
	int blend_type;
	Color *color;
	Tone *tone;
	
	bool disposed;
	
	int id;
	static int count;
};
#endif // __sprite__