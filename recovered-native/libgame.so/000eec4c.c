/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eec4c  Symbol: Effect */

/* Effect::Effect() */

Effect * __thiscall Effect::Effect(Effect *this)

{
  undefined4 *puVar1;
  int iVar2;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar2 = *(int *)(DAT_000eeca0 + 0xeec5e);
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0xfc) = iVar2 + 0x138;
  *(int *)(this + 0x100) = iVar2 + 0x168;
  puVar1 = *(undefined4 **)(DAT_000eeca4 + 0xeec7e);
  *(int *)(this + 0x104) = iVar2 + 0x174;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *puVar1 = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  return this;
}


