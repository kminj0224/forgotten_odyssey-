/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a174  Symbol: replaceObjectAtIndex */

/* cocos2d::CCMutableArray<cocos2d::CCLayer*>::replaceObjectAtIndex(unsigned int, cocos2d::CCLayer*,
   bool) */

void __thiscall
cocos2d::CCMutableArray<cocos2d::CCLayer*>::replaceObjectAtIndex
          (CCMutableArray<cocos2d::CCLayer*> *this,uint param_1,CCLayer *param_2,bool param_3)

{
  CCObject *this_00;
  
  if ((param_3) &&
     (this_00 = *(CCObject **)(param_1 * 4 + *(int *)(this + 0x14)), this_00 != (CCObject *)0x0)) {
    CCObject::release(this_00);
  }
  *(CCLayer **)(param_1 * 4 + *(int *)(this + 0x14)) = param_2;
  if (param_2 != (CCLayer *)0x0) {
    CCObject::retain((CCObject *)param_2);
  }
  return;
}


