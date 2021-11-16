#ifndef TUISTATE_H
#define TUISTATE_H

class TUIState {
	public:
		TUIState(void) { }
		virtual ~TUIState() { }
		virtual void load(void) = 0;
		virtual void unload(void) = 0;
		virtual void update(void) = 0;
		virtual void draw(void) = 0;
};

#endif // TUISTATE_H
