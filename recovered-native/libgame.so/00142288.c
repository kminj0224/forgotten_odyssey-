/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142288  Symbol: description */

/* cocos2d::CCNode::description() */

char * __thiscall cocos2d::CCNode::description(CCNode *this)

{
  char *__s;
  
  __s = (char *)operator_new__(100);
  sprintf(__s,(char *)(DAT_001422a4 + 0x14229c),*(undefined4 *)(this + 0x7c));
  return __s;
}


