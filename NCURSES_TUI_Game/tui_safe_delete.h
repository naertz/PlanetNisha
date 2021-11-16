#ifndef TUI_SAFE_DELETE_H
#define TUI_SAFE_DELETE_H

template<typename T> void safe_delete(T *&object) {
	delete object;
	object = nullptr;
}

#endif // TUI_SAFE_DELETE_H
