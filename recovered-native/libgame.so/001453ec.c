/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001453ec  Symbol: replaceObjectAtIndex */

/* cocos2d::CCMutableArray<cocos2d::CCScene*>::replaceObjectAtIndex(unsigned int, cocos2d::CCScene*,
   bool) */

void __thiscall
cocos2d::CCMutableArray<cocos2d::CCScene*>::replaceObjectAtIndex
          (CCMutableArray<cocos2d::CCScene*> *this,uint param_1,CCScene *param_2,bool param_3)

{
  CCObject *this_00;
  
  if ((param_3) &&
     (this_00 = *(CCObject **)(param_1 * 4 + *(int *)(this + 0x14)), this_00 != (CCObject *)0x0)) {
    CCObject::release(this_00);
  }
  *(CCScene **)(param_1 * 4 + *(int *)(this + 0x14)) = param_2;
  if (param_2 != (CCScene *)0x0) {
    CCObject::retain((CCObject *)param_2);
  }
  return;
}


