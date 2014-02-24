#ifndef GAMESTATEMAINMENU_H_DEFINED
#define GAMESTATEMAINMENU_H_DEFINED

#include <Flow/GameState.hpp>
#include <Interface/LayoutMainMenu.hpp>
#include <Interface/Menu/Menu.hpp>

/// The Main Menu.
///
class GameStateMainMenu: public GameState
{
	friend class LayoutMainMenu;

public:
	GameStateMainMenu();
	virtual ~GameStateMainMenu();

    void load(int stack=0);

    int unload();

	GameState::StateCode update();

    void draw();

private:
	LayoutMainMenu* layout;

	/// The main menu.
	Menu* menu;

	/// Single Player submenu.
	Menu* menuArcade;
	bool menuArcadeActivated;

	Menu* menuOptions;
	bool menuOptionsActvated;

	Menu* menuProfiles;
	bool menuProfilesActivated;

	// easily create internal menus
	void createMainMenu();
	void createArcadeMenu();
	void createOptionsMenu();
	void createProfilesMenu();
	void saveSettingsMenuOptions();
	void saveSettingsMenuArcade();
};

#endif //GAMESTATEMAINMENU_H_DEFINED

