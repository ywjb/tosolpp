/*
** Lua binding: Sample1
** Generated automatically by tosol++0.1.0 
*/
using namespace Samples1;
inline static b2Vec2 tolua_Sample1_b2Vec2_0()
{
 return b2Vec2();
}
inline static b2Vec2 tolua_Sample1_b2Vec2_1(const float xIn, const float yIn)
{
 return b2Vec2(xIn, yIn);
}

int tolua_Sample1_open(lua_State* L)
{
 sol::state_view tosol_S(L);
 tosol_S.new_usertype<Key>("Key", 
 	"Alt", sol::property([]() { return Key::Alt; }),
 	"BackSpace", sol::property([]() { return Key::BackSpace; }),
 	"CapsLock", sol::property([]() { return Key::CapsLock; }),
 	"ControlKey", sol::property([]() { return Key::ControlKey; }),
 	"Control", sol::property([]() { return Key::Control; }),
 	"Delete", sol::property([]() { return Key::Delete; }),
 	"Down", sol::property([]() { return Key::Down; }),
 	"End", sol::property([]() { return Key::End; }),
 	"Enter", sol::property([]() { return Key::Enter; }),
 	"Escape", sol::property([]() { return Key::Escape; }),
 	"Home", sol::property([]() { return Key::Home; }),
 	"Insert", sol::property([]() { return Key::Insert; }),
 	"Left", sol::property([]() { return Key::Left; }),
 	"NumLock", sol::property([]() { return Key::NumLock; }),
 	"PageDown", sol::property([]() { return Key::PageDown; }),
 	"PageUp", sol::property([]() { return Key::PageUp; }),
 	"RControlKey", sol::property([]() { return Key::RControlKey; }),
 	"Right", sol::property([]() { return Key::Right; }),
 	"Shift", sol::property([]() { return Key::Shift; }),
 	"Space", sol::property([]() { return Key::Space; }),
 	"Subtract", sol::property([]() { return Key::Subtract; }),
 	"Tab", sol::property([]() { return Key::Tab; }),
 	"Up", sol::property([]() { return Key::Up; }),
 	"Tilde", sol::property([]() { return Key::Tilde; }),
 	"Equals", sol::property([]() { return Key::Equals; }),
 	"OpenBracket", sol::property([]() { return Key::OpenBracket; }),
 	"CloseBracket", sol::property([]() { return Key::CloseBracket; }),
 	"Backslash", sol::property([]() { return Key::Backslash; }),
 	"Semicolon", sol::property([]() { return Key::Semicolon; }),
 	"Quotes", sol::property([]() { return Key::Quotes; }),
 	"Comma", sol::property([]() { return Key::Comma; }),
 	"Period", sol::property([]() { return Key::Period; }),
 	"Slash", sol::property([]() { return Key::Slash; }),
 	"WindowsKey", sol::property([]() { return Key::WindowsKey; }),
 	"LButton", sol::property([]() { return Key::LButton; }),
 	"MButton", sol::property([]() { return Key::MButton; }),
 	"RButton", sol::property([]() { return Key::RButton; }),
 	"XButton1", sol::property([]() { return Key::XButton1; }),
 	"XButton2", sol::property([]() { return Key::XButton2; }),
 	"F1", sol::property([]() { return Key::F1; }),
 	"F2", sol::property([]() { return Key::F2; }),
 	"F3", sol::property([]() { return Key::F3; }),
 	"F4", sol::property([]() { return Key::F4; }),
 	"F5", sol::property([]() { return Key::F5; }),
 	"F6", sol::property([]() { return Key::F6; }),
 	"F7", sol::property([]() { return Key::F7; }),
 	"F8", sol::property([]() { return Key::F8; }),
 	"F9", sol::property([]() { return Key::F9; }),
 	"F10", sol::property([]() { return Key::F10; }),
 	"F11", sol::property([]() { return Key::F11; }),
 	"F12", sol::property([]() { return Key::F12; }),
 	"A", sol::property([]() { return Key::A; }),
 	"B", sol::property([]() { return Key::B; }),
 	"C", sol::property([]() { return Key::C; }),
 	"D", sol::property([]() { return Key::D; }),
 	"E", sol::property([]() { return Key::E; }),
 	"F", sol::property([]() { return Key::F; }),
 	"G", sol::property([]() { return Key::G; }),
 	"H", sol::property([]() { return Key::H; }),
 	"I", sol::property([]() { return Key::I; }),
 	"J", sol::property([]() { return Key::J; }),
 	"K", sol::property([]() { return Key::K; }),
 	"L", sol::property([]() { return Key::L; }),
 	"M", sol::property([]() { return Key::M; }),
 	"N", sol::property([]() { return Key::N; }),
 	"O", sol::property([]() { return Key::O; }),
 	"P", sol::property([]() { return Key::P; }),
 	"Q", sol::property([]() { return Key::Q; }),
 	"R", sol::property([]() { return Key::R; }),
 	"S", sol::property([]() { return Key::S; }),
 	"T", sol::property([]() { return Key::T; }),
 	"U", sol::property([]() { return Key::U; }),
 	"V", sol::property([]() { return Key::V; }),
 	"W", sol::property([]() { return Key::W; }),
 	"X", sol::property([]() { return Key::X; }),
 	"Y", sol::property([]() { return Key::Y; }),
 	"Z", sol::property([]() { return Key::Z; }),
 	"D0", sol::property([]() { return Key::D0; }),
 	"D1", sol::property([]() { return Key::D1; }),
 	"D2", sol::property([]() { return Key::D2; }),
 	"D3", sol::property([]() { return Key::D3; }),
 	"D4", sol::property([]() { return Key::D4; }),
 	"D5", sol::property([]() { return Key::D5; }),
 	"D6", sol::property([]() { return Key::D6; }),
 	"D7", sol::property([]() { return Key::D7; }),
 	"D8", sol::property([]() { return Key::D8; }),
 	"D9", sol::property([]() { return Key::D9; }),
 	"NumPad0", sol::property([]() { return Key::NumPad0; }),
 	"NumPad1", sol::property([]() { return Key::NumPad1; }),
 	"NumPad2", sol::property([]() { return Key::NumPad2; }),
 	"NumPad3", sol::property([]() { return Key::NumPad3; }),
 	"NumPad4", sol::property([]() { return Key::NumPad4; }),
 	"NumPad5", sol::property([]() { return Key::NumPad5; }),
 	"NumPad6", sol::property([]() { return Key::NumPad6; }),
 	"NumPad7", sol::property([]() { return Key::NumPad7; }),
 	"NumPad8", sol::property([]() { return Key::NumPad8; }),
 	"NumPad9", sol::property([]() { return Key::NumPad9; }),
 	"NumPadPeriod", sol::property([]() { return Key::NumPadPeriod; }),
 	"NumPadDivide", sol::property([]() { return Key::NumPadDivide; }),
 	"NumPadMultiply", sol::property([]() { return Key::NumPadMultiply; }),
 	"NumPadSubtract", sol::property([]() { return Key::NumPadSubtract; }),
 	"NumPadAddition", sol::property([]() { return Key::NumPadAddition; })
);


 tosol_S.new_usertype<b2Vec2>("Vec2", 
 	sol::constructors<
 		b2Vec2(),
 		b2Vec2(const float xIn, const float yIn)>(),
 	"SetZero", &b2Vec2::SetZero,
 	"Set", &b2Vec2::Set,
 	sol::meta_function::subtraction, sol::overload(
		sol::resolve<b2Vec2() const>(&b2Vec2::operator-),
		sol::resolve<b2Vec2(const b2Vec2&)>(&b2Vec2::operator-)
	),
 	sol::meta_function::index, &b2Vec2::operator[],
 	sol::meta_function::addition, &b2Vec2::operator+,
 	sol::meta_function::multiplication, sol::overload(
		sol::resolve<void(const b2Vec2&)>(&b2Vec2::operator*),
		sol::resolve<void(float)>(&b2Vec2::operator*)
	),
 	"Length", &b2Vec2::Length,
 	"LengthSquared", &b2Vec2::LengthSquared,
 	"Normalize", &b2Vec2::Normalize,
 	"IsValid", &b2Vec2::IsValid,
 	"Skew", &b2Vec2::Skew,
 	"ToString", &b2Vec2::ToString,
 	"x", &b2Vec2::x,
 	"y", &b2Vec2::y,
 	"ZERO", sol::property([]() { return b2Vec2::ZERO; })
);


 return 0;
}
 