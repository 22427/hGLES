#pragma once
#include "hgles_input_interface.h"
#include "hgles_dll.h"
#include <cstdint>
#include <unordered_set>
namespace hgles
{
	class MGL_DLL_PUBLIC InputSystem :
			#ifndef NDEBUG
			public InputSystemInterface
			#endif
	{
		uint8_t m_key_state[KEY_LAST+1];
		uint8_t m_button_state[BUTTON_LAST+1];
		std::unordered_set<KeyboardListener*> m_keyboard_listener;
		std::unordered_set<MouseListener*> m_mouse_listener;
		std::unordered_set<CharacterListener*> m_char_listener;

	public:
		InputSystem(){}
		void init(Window *w){}
		void add_keyboard_listener(KeyboardListener *kbl){}
		void add_mouse_listener(MouseListener *ml){}
		void add_character_listener(CharacterListener *cl){}

		void remove_keyboard_listener(KeyboardListener *kbl){}
		void remove_mouse_listener(MouseListener *ml){}
		void remove_character_listener(CharacterListener *cl){}

		bool is_key_down(const Key k){}
		bool is_button_down(const Button b){}

	};
}
