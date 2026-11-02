/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00104e74  Symbol: ~UI */

/* UI::~UI() */

UI * __thiscall UI::~UI(UI *this)

{
  CCNode *pCVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_00104ec0 + 0x104e80);
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0xfc) = iVar2 + 0x140;
  *(int *)(this + 0x100) = iVar2 + 0x170;
  *(int *)(this + 0x104) = iVar2 + 0x17c;
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  KG_removeChild(pCVar1,true);
  if (*(int **)(this + 300) != (int *)0x0) {
    (**(code **)(**(int **)(this + 300) + 8))();
  }
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


