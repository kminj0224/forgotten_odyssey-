/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012e5d0  Symbol: MM_NEXT_MENU_CALL */

/* MainMenuLayer::MM_NEXT_MENU_CALL() */

void __thiscall MainMenuLayer::MM_NEXT_MENU_CALL(MainMenuLayer *this)

{
  if (*(int *)(this + 0x110) == 1) {
    Play_UI_Call();
  }
  else if (*(int *)(this + 0x110) == 2) {
    Option_UI_Call(this);
  }
  return;
}


