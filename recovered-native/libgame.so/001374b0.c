/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001374b0  Symbol: description */

/* cocos2d::CCAction::description() */

char * __thiscall cocos2d::CCAction::description(CCAction *this)

{
  char *__s;
  
  __s = (char *)operator_new__(100);
  sprintf(__s,(char *)(DAT_001374cc + 0x1374c4),*(undefined4 *)(this + 0x1c));
  return __s;
}


