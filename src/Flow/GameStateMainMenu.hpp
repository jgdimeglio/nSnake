#ifndef GAMESTATEMAINMENU_H_DEFINED
#define GAMESTATEMAINMENU_H_DEFINED

#include <Flow/GameState.hpp>
#include <Interface/LayoutMainMenu.hpp>
#include <Interface/Menu/Menu.hpp>
#include <Interface/Menu/MenuAlphabetic.hpp>
#include <Interface/WindowGameHelp.hpp>

/// The Main Menu.
///
class GameStateMainMenu: public GameState
{
	friend class LayoutMainMenu;

public:
	GameStateMainMenu();
	virtual ~GameStateMainMenu() { };

    void load(int stack=0);

	/// Gets called when we're leaving this menu.
	///
	/// It saves all the menu settings
	/// (for example, game speed, board size, and such)
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

	MenuAlphabetic* menuLevels;
	bool menuLevelsActivated;

	Menu* menuOptions;
 	bool menuOptionsActivated;

	Menu* menuControls;
	bool menuControlsActivated;

	WindowGameHelp* helpWindows;

	// easily create internal menus
	void createMainMenu();
	void createArcadeMenu();
	void createLevelsMenu();
	void createOptionsMenu();
	void createControlsMenu();
	void saveSettingsMenuOptions();
	void saveSettingsMenuArcade();
};

#endif //GAMESTATEMAINMENU_H_DEFINED

