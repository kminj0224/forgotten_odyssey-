/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145418  Symbol: replaceScene */

/* cocos2d::CCDirector::replaceScene(cocos2d::CCScene*) */

void __thiscall cocos2d::CCDirector::replaceScene(CCDirector *this,CCScene *param_1)

{
  CCMutableArray<cocos2d::CCScene*> *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = *(CCMutableArray<cocos2d::CCScene*> **)(this + 0x50);
  iVar2 = *(int *)(this_00 + 0x14);
  iVar1 = *(int *)(this_00 + 0x18);
  this[0x4c] = (CCDirector)0x1;
  CCMutableArray<cocos2d::CCScene*>::replaceObjectAtIndex
            (this_00,(iVar1 - iVar2 >> 2) - 1,param_1,true);
  *(CCScene **)(this + 0x48) = param_1;
  return;
}


